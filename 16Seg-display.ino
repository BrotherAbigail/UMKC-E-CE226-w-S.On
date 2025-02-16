using namespace std;

//index of letters
//{B, A, M, K, H, G, T, F, E, S, R, D, U, P, C, N}
const int Letter[28][16] = {
  {0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1}, //A
  {0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 0, 1}, //B
  {0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1}, //C
  {0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 0, 1}, //D
  {0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1}, //E
  {0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1}, //F
  {0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1, 0, 1, 0, 1, 1}, //G
  {1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1}, //H
  {0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1}, //I
  {1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 1, 0, 1, 1, 0, 1}, //J
  {1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1, 0}, //K
  {1, 1, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1}, //L
  {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0}, //M
  {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1}, //N
  {0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1, 0, 1}, //O
  {0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1}, //P
  {0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 1}, //Q
  {0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1}, //R
  {0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 1, 1}, //S
  {0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1}, //T
  {1, 1, 1, 1, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1, 0, 1}, //U
  {1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0}, //V
  {1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 0, 1, 1, 0, 1}, //W
  {1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0}, //X
  {1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1}, //Y
  {0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0}, //Z
  {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, //Blank
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //Full
};


enum ABC {
  A = 0,
  B = 1,
  C = 2,
  D = 3,
  E = 4,
  F = 5,
  G = 6,
  H = 7,
  I = 8,
  J = 9,
  K = 10,
  L = 11,
  M = 12,
  N = 13,
  O = 14,
  P = 15,
  Q = 16,
  R = 17,
  S = 18,
  T = 19,
  U = 20,
  V = 21,
  W = 22,
  X = 23,
  Y = 24,
  Z = 25,
  Blank = 26,
  Full = 27
};

const int hwLength = 21;
ABC helloWorld[hwLength] = {Blank, Blank, Blank, Blank, Blank, H, E, L, L, O, Blank, W, O, R, L, D, Blank, Blank, Blank, Blank, Blank};

const int testPhraseLength = 33;
ABC testPhrase[testPhraseLength] = {Blank, Blank, Blank, Blank, Blank, T, H, I, S, Blank, I, S, Blank, A, Blank, T, E, S, T, Blank, S, E, N, T, E, N, C, E, Blank, Blank, Blank, Blank, Blank};

const int coolLoadLength = 18;
ABC coolLoad[coolLoadLength] = {Blank, Blank, Blank, Blank, Blank, Blank, Full, Full, Full, Full, Full, Full, Blank, Blank, Blank, Blank, Blank, Blank};

// pin number declaration
const int clearPin = 0;
const int clkPin = 1;


const int pin1 = 8;
const int pin2 = 9;
const int pin3 = 10;
const int pin4 = 11;
const int pin5 = 12;
const int pin6 = 13;


// functions
void clk(int msOn, int msOff, int clkOutNum);
void serialOut(int letNum1, int letNum2, int letNum3, int letNum4, int letNum5, int letNum6, int delayTime, bool creepLoadOn);
void serialOut(ABC let1, ABC let2, ABC let3, ABC let4, ABC let5, ABC let6, int delayTime, bool creepLoadOn);

void fancyReset(int msLoading);
void writePhrase(ABC inputArr[], int inputArrLen);


void setup() {
  // put your setup code here, to run once:
  pinMode(clkPin, OUTPUT);
  pinMode(clearPin, OUTPUT);
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
}


void loop() {
  fancyReset(200);
  writePhrase(helloWorld, hwLength);
  writePhrase(testPhrase, testPhraseLength);
}


void clk(int msOn, int msOff, int clkOutNum){
  digitalWrite(clkOutNum, HIGH);
  delay(msOn);
  digitalWrite(clkOutNum, LOW);
  delay(msOff);
}

void serialOut(int letNum1, int letNum2, int letNum3, int letNum4, int letNum5, int letNum6, int delayTime, bool creepLoadOn){
  for (int i = 15; i >= 0; i--){
    digitalWrite(pin6, Letter[letNum1][i]);
    digitalWrite(pin5, Letter[letNum2][i]);
    digitalWrite(pin4, Letter[letNum3][i]);
    digitalWrite(pin3, Letter[letNum4][i]);
    digitalWrite(pin2, Letter[letNum5][i]);
    digitalWrite(pin1, Letter[letNum6][i]);
    creepLoadOn ? clk(20, 20, clkPin) : clk(1, 1, clkPin);
  }
  delay(delayTime);
}
void serialOut(ABC let1, ABC let2, ABC let3, ABC let4, ABC let5, ABC let6, int delayTime, bool creepLoadOn){
  for (int i = 15; i >= 0; i--){
    digitalWrite(pin6, Letter[let1][i]);
    digitalWrite(pin5, Letter[let2][i]);
    digitalWrite(pin4, Letter[let3][i]);
    digitalWrite(pin3, Letter[let4][i]);
    digitalWrite(pin2, Letter[let5][i]);
    digitalWrite(pin1, Letter[let6][i]);
    creepLoadOn ? clk(20, 20, clkPin) : clk(1, 1, clkPin);
  }
  delay(delayTime);
}

void fancyReset(int msLoading){
  digitalWrite(clearPin, HIGH);
  digitalWrite(clearPin, LOW);
  writePhrase(coolLoad, coolLoadLength);
  serialOut(Full, Full, Full, Full, Full, Full, 100, true);
  serialOut(Blank, Blank, Blank, Blank, Blank, Blank, 250, true);
}

void writePhrase(ABC inputArr[], int inputArrLen){
  for(int i = 0; i < inputArrLen - 5; i++){
    serialOut(inputArr[i], inputArr[i+1], inputArr[i+2], inputArr[i+3], inputArr[i+4], inputArr[i+5], 250, false);
  }
}