# %% [markdown]
"""
![Renode](https://antmicro.com/OpenSource/assets/images/projects/renode.png)
"""
# %% [markdown]
"""## Install requirements"""

# %%
!pip install -q ffmpeg-python pyaudioconvert git+https://github.com/antmicro/pyrenode.git git+https://github.com/antmicro/renode-colab-tools.git
!apt install sox xxd
!rm -rf renode-tflite-nrf52840-micro-speech
!git clone https://github.com/antmicro/renode-tflite-nrf52840-micro-speech.git
!mkdir -p renode && cd renode && tar -xzf ../renode-tflite-nrf52840-micro-speech/renode-1.11.0.linux-portable.tar.gz --strip 1
!pip install -q -r renode/tests/requirements.txt
import os
from renode_colab_tools import *
os.environ['PATH'] = os.getcwd()+"/renode:"+os.environ['PATH']

# %% [markdown]
"""## Record 1 sec of audio after clicking the button"""

# %%
audio, sr = get_audio()

# %% [markdown]
"""## Convert audio to required format"""

# %%
from scipy.io.wavfile import write as wav_write
import pyaudioconvert as pac

wav_write('audio.wav', sr, audio)
#convert to 16bit because Chrome seems to ignore recording settings
pac.convert_wav_to_16bit_mono('audio.wav', 'converted.wav')
sr, audio = wav_read('converted.wav')
audio.tofile('audio_bin')
!soxi converted.wav

# %% [markdown]
"""## Run a micro-speech example with a recorded audio sample in Renode"""

# %%
from pyrenode import *
shutdown_renode()
connect_renode() # this sets up a log file, and clears the simulation (just in case)

tell_renode('mach create')
tell_renode('machine LoadPlatformDescription @/content/renode-tflite-nrf52840-micro-speech/nrf52840.repl')
tell_renode('sysbus LoadELF @/content/renode-tflite-nrf52840-micro-speech/binaries/micro_speech.ino.elf')
tell_renode('machine EnableProfiler "demo"')

tell_renode('showAnalyzer sysbus.uart0 Antmicro.Renode.Analyzers.LoggingUartAnalyzer')
tell_renode('sysbus LoadBinary @/content/audio_bin 0x3ba50') # Replace audio sample
tell_renode('sysbus.uart0 CreateFileBackend @uart.txt')
tell_renode('s')
try:
  _ = expect_log('Heard')
except Exception:
  print('No command found')
shutdown_renode()
_ = expect_log("Disposed.") # to be sure if buffer to dump file is flushed

# %% [markdown]
"""## Recognized command (YES, NO) - command (score) @time"""

# %%
!cat renode/uart.txt

# %% [markdown]
"""## Renode metrics analysis"""

# %%
from renode.tools.metrics_analyzer.metrics_parser import MetricsParser

init_notebook_mode(connected=False)
parser = MetricsParser('renode/demo')

# %%
configure_plotly_browser_state()
show_executed_instructions(parser)

# %%
configure_plotly_browser_state()
show_memory_access(parser)

# %%
configure_plotly_browser_state()
show_peripheral_access(parser)

# %%
configure_plotly_browser_state()
show_exceptions(parser)