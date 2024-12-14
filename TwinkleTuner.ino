// Define the pin connected
const int speakerPin = 9;

// Frequencies for basic tones (in Hz)
const int toneC = 262;
const int toneD = 294;
const int toneE = 330;
const int toneF = 349;
const int toneG = 392;
const int toneA = 440;
const int toneB = 494;
const int toneGSharp = 415;
const int toneFSharp = 370;

// Duration of each tone (in milliseconds)
const int shortDuration = 300;
const int longDuration = 600;
const int pauseDuration = 100;

void setup() {
  // Initialize the speaker pin
  pinMode(speakerPin, OUTPUT);
}

void loop() {
  // Play "Twinkle Twinkle Little Star" melody with enhanced tones
  playToneWithHarmonics(toneC, longDuration); // "Twinkle"
  playToneWithHarmonics(toneC, longDuration);
  delay(pauseDuration);

  playToneWithHarmonics(toneG, longDuration); // "Twinkle"
  playToneWithHarmonics(toneG, longDuration);
  delay(pauseDuration);

  playToneWithHarmonics(toneA, longDuration); // "Little"
  playToneWithHarmonics(toneA, longDuration);
  delay(pauseDuration);

  playToneWithHarmonics(toneG, longDuration); // "Star"
  delay(pauseDuration * 5);


  // Pause before repeating
  delay(2000);
}

void playToneWithHarmonics(int frequency, int duration) {
  // Play the base tone
  tone(speakerPin, frequency, duration * 0.8);

  // Add a harmonic by quickly alternating with a higher frequency
  delay(duration * 0.2);
  tone(speakerPin, frequency * 2, duration * 0.2);

  // Stop the tone
  noTone(speakerPin);
}
