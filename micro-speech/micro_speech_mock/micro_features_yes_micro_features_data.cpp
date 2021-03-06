/* Copyright 2019 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "micro_features_yes_micro_features_data.h"

// Golden test values for the expected spectrogram from a "yes" sample file
// speech_commands_test_set_v0.02/yes/f2e59fea_nohash_1.wav.

const int g_yes_micro_f2e59fea_nohash_1_width = 43;
const int g_yes_micro_f2e59fea_nohash_1_height = 49;
const unsigned char g_yes_micro_f2e59fea_nohash_1_data[] = {
 0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   5,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   67, 2,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   139, 2,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   195, 2,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   230, 2,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  255, 7,
    6, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 255, 7,  16, 1,   1,   0,  2, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 255, 7,   22, 0,  1,   0,
    1, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 238, 5,   20, 3, 4,   1,  1,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  144, 4,   19, 3, 5,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  42, 6,   3,
    1, 3,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  3, 1,   5,  0,  1,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  5, 1,   3,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    1, 0,   1,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, 0,   0,   0,  0, 0,   0,  0,  0,   0,   0,  0, 0,   0,   0,  0,  0,   0,
    0, };
