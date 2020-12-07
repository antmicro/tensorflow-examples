# %% [markdown]
"""

![Renode](https://antmicro.com/OpenSource/assets/images/projects/renode.png)
"""
# %% [markdown]
"""
## Install requirements
"""

# %%
!pip install -q git+https://github.com/antmicro/pyrenode.git git+https://github.com/antmicro/renode-colab-tools.git Pillow
!rm -rf renode-tflite-nrf52840-person-detection renode
!git clone https://github.com/antmicro/renode-tflite-nrf52840-person-detection.git
!mkdir -p renode && cd renode && tar -xzf ../renode-tflite-nrf52840-person-detection/renode-1.11.0.linux-portable.tar.gz --strip 1
!pip install -q -r renode/tests/requirements.txt
import os
from renode_colab_tools import *
os.environ['PATH'] = os.getcwd()+"/renode:"+os.environ['PATH']

# %% [markdown]
"""## Take a photo"""

# %%
from IPython.display import Image
photo = take_photo()
display(Image(photo))

# %% [markdown]
"""## Convert the photo, required size < 4096 bytes"""

# %%
from PIL import Image
image = Image.open('photo.jpg')
image.thumbnail((120, 120))
image.save('photo.jpg')

# %% [markdown]
"""## Run a person-detection example with a captured photo in Renode"""
# %%
from pyrenode import *
shutdown_renode()
connect_renode() # this sets up a log file, and clears the simulation (just in case)

# %%
import time
tell_renode('using sysbus')
tell_renode('mach create')
tell_renode('machine LoadPlatformDescription @/content/renode-tflite-nrf52840-person-detection/nrf52840.repl')
tell_renode('sysbus LoadELF @/content/renode-tflite-nrf52840-person-detection/binaries/person_detection.ino.elf')

tell_renode('uart0 CreateFileBackend @uart.dump true')
tell_renode('logLevel 3')
tell_renode('spi2.camera ImageSource @/content/photo.jpg')
tell_renode('s')
time.sleep(5) #waits for creating uart.dump
!tail -f renode/uart.dump #it takes a few minutes to get the person score

# %%
tell_renode('q')
expect_cli('Renode is quitting')
shutdown_renode()

# %% [markdown]
"""## Renode metrics analysis"""
# %%
from renode.tools.metrics_analyzer.metrics_parser import MetricsParser

!renode/test.sh renode-tflite-nrf52840-person-detection/arducam.robot
init_notebook_mode(connected=False)
parser = MetricsParser('renode/metrics.dump')

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