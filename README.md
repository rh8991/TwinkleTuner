# Arduino Volume-Controlled Speaker Project

## A Little Story Behind the Project

One evening, my nephew couldn’t fall asleep, so I decided to help with some engineering magic. Using an Arduino, a 10K potentiometer, and an old car speaker, I whipped up a lullaby machine to play "Twinkle Twinkle Little Star."  

When I turned it on, the speaker produced robotic sounds that resembled a droid trying to sing. I thought to myself, *He probably thinks R2-D2 is babysitting him.* 🤖  

And that’s how this quirky little project was born. Welcome to the **TwinkleTuner**! 🎵✨

This project uses an **Arduino Uno**, an **old car speaker**, and a **10K potentiometer** to create a basic audio output system. The potentiometer allows for manual control of the speaker's volume by varying the signal sent to the speaker.

## Components
- **Arduino Uno**: Microcontroller board to control the project.
- **Old Car Speaker**: Outputs sound based on PWM signals from the Arduino.
- **10K Potentiometer**: Adjusts the amplitude of the audio signal, effectively controlling the volume.
- **Breadboard**: Used for connecting and organizing the components.
- **Wires**: For electrical connections.

## Circuit Description
1. The **potentiometer** is connected as follows:
   - **Middle leg**: Connected to **PWM digital pin 9** on the Arduino.
   - **Ground leg**: Connected to the **ground rail** on the breadboard.
   - **Other side leg**: Connected to one terminal of the **speaker**.

2. The **speaker** is connected as follows:
   - One terminal to the **ground rail** on the breadboard.
   - The other terminal to the **potentiometer's output side**.

3. The **Arduino Uno** provides PWM signals through **pin 9**, which are modulated by the potentiometer to control the speaker's volume.

## Code Functionality
The code generates a melody of **"Twinkle Twinkle Little Star"** using PWM signals sent to the speaker. It enhances the audio experience by introducing harmonic tones for a richer sound.

### Key Features
1. **Tone Frequencies**:
   - Predefined frequencies for musical notes (C, D, E, F, G, A, B) are used to play the melody.
   
2. **Dynamic Harmonics**:
   - A custom function, `playToneWithHarmonics()`, adds harmonic tones to the base frequencies for an enriched sound output.

3. **Volume Control**:
   - The potentiometer adjusts the signal amplitude, allowing manual volume control.

### Melody Playback
The melody is played as follows:
- Notes are output to the speaker in a sequence to form the melody.
- Each note is played for a defined duration (`shortDuration` or `longDuration`).
- A harmonic overlay is added to each note for enhanced sound quality.
- After completing the melody, the system pauses before repeating.

## Observations
- Rotating the potentiometer changes the volume by varying the signal strength.
- The melody plays continuously in a loop with periodic pauses.

## Applications
- Simple sound systems.
- Learning PWM audio generation and analog signal control.
- Demonstrating basic concepts of sound harmonics and electronics.
