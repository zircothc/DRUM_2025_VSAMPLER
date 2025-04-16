# DRUM_2025_VSAMPLER
ESP32 DRUM SAMPLER MACHINE (JC4827W543 C BOARD)

This is my DRUM SAMPLER HIFI MACHINE for Guition ESP32 JC4827W543 (Capacitive touch model)

44100 Hz, 16 Bit, 16 polyphony.
Sounds are stored on flash as const arrays.
50 selectable samples with different size.
16 sounds/tracks. 16 patterns. 16 memories (16 pattern each)
Random pattern/sound generator

HARDWARE:
Guition JC4827W543 C (ESP32-S3 N4R8, LCD ILI9488, touch panel GT911) https://s.click.aliexpress.com/e/_EzVhSEH

PCM5102A I2s DAC
Optional:
ADS1115 (I2c ADC)
4 pots (B10k)
1 Rotary encoder

SOFTWARE:
IDE: Arduino 2.3.5

Boards: Expressif Systems 3.2.0
Board: ESP32S3 Dev module

Necessary Libraries:
Sequencer Timer - Modified version of uClock. (add macsbug link). I'm testing an alternative.
TFT - Arduino_GFX_Library

Select "Huge APP 3MB" partition.
If samples don't fit into flash you can use custom partition included to get 3.5MB 
You can replace the sounds changing code "easily".
To get .c from sound files I use wavtocode (windows) https://colinjs.com/software.htm#t_WAVToCode
Sounds specs: 44100hz, 16Bit, Mono


TODO:
- Rename sample files (code is ready)
- MIDI. Not tested.
- MDI BLE. Waiting update. Now can't compile.
- Flag "#define" to avoid use of ADS1115 and rotary encoder
- Add a reverb code (I tried a lot but no good result) or some other audio FX.
- Solve issues
- Add photos. Rec a video. Finish this read me.


