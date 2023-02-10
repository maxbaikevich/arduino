#define KISKA 9
#define HUEK A0

void setup(){
  pinMode(KISKA, OUTPUT);
  pinMode(HUEK, INPUT);
}
void loop(){
  int rotation, brightess;

  rotation = analogRead(HUEK);
  brightess = rotation / 4;

  analogWrite(KISKA, brightess);
  
}
