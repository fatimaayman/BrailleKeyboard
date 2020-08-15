# A Typing Glove
A cheap braille keyboard that can be used anywhere by only one hand, was the main project's idea. Since the braille alphabet is just a combination of dots in a 3x2 matrix, it can be implemented using two fingers. Each phalange of the two fingers will represent a dot in the matrix. Currently the same hardware connection can be used as a Dial Pad or a Braille Keyboard just by uploading different software codes to the Arduino.

## Project Concept
The braille alphabet was the main inspiration of this idea. How? It can be simply implemented using mainly two fingers! As the alphabet is just a combination of dots in a 3x2 matrix. The glove basically consists of conductive metal sewing snaps, a snap per phalange, connected on the last three fingers. Nine input sewing snaps are sewed with a conductive thread to the glove. Each one of the snaps is connected through a conductive thread to a digital input pin in the microcontroller. Those snaps are basically used like switches, the circuit should be closed to allow the current to flow through it. Therefore, another sewing snap is sewed, using a conductive thread, from the glove’s thumb tip to the microcontroller’s ground pin. That snap is mainly used for the selection of dots.
When two snaps are connected together, the thumb’s snap and one of the other nine snaps, a signal will be sent via the conductive thread to the corresponding digital input pin in the microcontroller to indicate the user’s choice. As an output to that, wherever the cursor is located, the letter or digit corresponding to the user’s input will appear on the screen. Windows built-in Narrator application is also used for sound feedback.

## Implementation
A microcontroller is connected via conductive thread to the nine sewing snaps on the last three fingers of a glove. For the braille keyboard, the alphabet matrix is implemented on the last two fingers and more options, indicating the end of a letter, space bar, and backspace, are implemented on the middle finger. For a dial pad, the same nine snaps can be used to present the input numbers from 1 to 9. Each one of those snaps will be connected individually to a digital Arduino’s input pin. Another sewing snap will be sewed on the tip of the thumb to be used to close the circuit and select an input. That snap will be connected to the microcontroller’s ground pin.
The same hardware implementation is used to create a dial pad or a braille keyboard just by uploading different software codes.

### Hardware
Equipment:
- Arduino Pro Micro
- Copper Conductive Thread > 3m
- Non-Conductive Fabric (Glove)
- Conductive Sewing Snaps
- Non-Conductive Thread and a Needle

A link to the connected prototype: https://youtu.be/GfgXmcZWOBI

*To be Implemented*
### Software
A DialPad code was developed using Arduino IDE in the following file:
https://github.com/fatimaayman/BrailleKeyboard/blob/master/Arduino/DialPad 

A Braille Keyboard code was developed using Arduino IDE in the following file:
https://github.com/fatimaayman/BrailleKeyboard/blob/master/Arduino/Braille_Keyboard.ino
