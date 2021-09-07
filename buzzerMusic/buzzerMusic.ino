// Note Definitions from <https://gist.github.com/AgustinParmisano/bc5d750ba8e30186e5ee4d346feb9319>
// Greater range than provided <https://www.arduino.cc/en/Tutorial/BuiltInExamples/toneMelody>
// NB: ALL NOTES DEFINED WITH STANDARD ENGLISH NAMES, EXCEPT FROM "A"
//THAT IS CALLED WITH THE ITALIAN NAME "LA" BECAUSE A0,A1...ARE THE ANALOG PINS ON ARDUINO.
// (Ab IS CALLED Ab AND NOT LAb)
#define  C0 16//16.35
#define Db0 17//17.32
#define D0  18//18.35
#define Eb0 19//19.45
#define E0  21//20.60
#define F0  22//21.83
#define Gb0 23//23.12
#define G0  25//24.50
#define Ab0 26//25.96
#define LA0 28//27.50
#define Bb0 29//29.14
#define B0  31//30.87
#define C1  33//32.70
#define Db1 35//34.65
#define D1  37//36.71
#define Eb1 39//38.89
#define E1  41.20
#define F1  43.65
#define Gb1 46.25
#define G1  49.00
#define Ab1 51.91
#define LA1 55.00
#define Bb1 58.27
#define B1  61.74
#define C2  65.41
#define Db2 69.30
#define D2  73.42
#define Eb2 77.78
#define E2  82.41
#define F2  87.31
#define Gb2 92.50
#define G2  98.00
#define Ab2 103.83
#define LA2 110.00
#define Bb2 116.54
#define B2  123.47
#define C3  130.81
#define Db3 138.59
#define D3  146.83
#define Eb3 155.56
#define E3  164.81
#define F3  174.61
#define Gb3 185.00
#define G3  196.00
#define Ab3 207.65
#define LA3 220.00
#define Bb3 233.08
#define B3  246.94
#define C4  261.63
#define Db4 277.18
#define D4  293.66
#define Eb4 311.13
#define E4  329.63
#define F4  349.23
#define Gb4 369.99
#define G4  392.00
#define Ab4 415.30
#define LA4 440.00
#define Bb4 466.16
#define B4  493.88
#define C5  523.25
#define Db5 554.37
#define D5  587.33
#define Eb5 622.25
#define E5  659.26
#define F5  698.46
#define Gb5 739.99
#define G5  783.99
#define Ab5 830.61
#define LA5 880.00
#define Bb5 932.33
#define B5  987.77
#define C6  1046.50
#define Db6 1108.73
#define D6  1174.66
#define Eb6 1244.51
#define E6  1318.51
#define F6  1396.91
#define Gb6 1479.98
#define G6  1567.98
#define Ab6 1661.22
#define LA6 1760.00
#define Bb6 1864.66
#define B6  1975.53
#define C7  2093.00
#define Db7 2217.46
#define D7  2349.32
#define Eb7 2489.02
#define E7  2637.02
#define F7  2793.83
#define Gb7 2959.96
#define G7  3135.96
#define Ab7 3322.44
#define LA7 3520.01
#define Bb7 3729.31
#define B7  3951.07
#define C8  4186.01
#define Db8 4434.92
#define D8  4698.64
#define Eb8 4978.03
// DURATION OF THE NOTES
#define BPM 120    //  you can change this value changing all the others
#define Q (60000)/BPM //quarter 1/4
#define H 2*Q //half 2/4
#define E Q/2   //eighth 1/8
#define S Q/4 // sixteenth 1/16
#define W 4*Q // whole 4/4
#define tE 3*Q/2   //eighth 3/8


int buzzPin = 8;

// Two things need to be created: the array for the notes of the melody (in order)
// and the duration of each (think of it like sheet music in two parts)

// BOTH ARRAYS MUST BE THE SAME SIZE!

// The melody array 
int melody[] = {
  Gb5, Gb5, D5, B4, B4, E5, 
  E5, E5, Ab5, Ab5, A5, B5, 
  A5, A5, A5, E5, D5, Gb5, 
  Gb5, Gb5, E5, E5, Gb5, E5
};

// The note duration, E = 8th note, Q = quarter note, etc.
int durations[] = {
  E, E, E, Q, Q, Q, 
  Q, H, E, E, E, E, 
  E, E, E, Q, Q, Q, 
  Q, H, E, E, E, E
};
int songLength = sizeof(melody) / sizeof(melody[0]) / 2;
void setup() {
//pinMode(buzzPin, OUTPUT);
// pinMode(8, OUTPUT);
//digitalWrite(8,LOW);
}
void loop() {
  // The for loop stops when it is equal to the size of the melody array
  for (int thisNote = 0; thisNote < songLength; thisNote++){
    // determine the duration of the notes that the computer understands
    // divide 1000 by the value, so the first note lasts for 1000/8 milliseconds
    int duration = durations[thisNote];//1000/ durations[thisNote];
    tone(8, melody[thisNote], duration *0.9);
    // pause between notes
    int pause = duration;
    delay(pause);
    // stop the tone
    noTone(8);
  }
}