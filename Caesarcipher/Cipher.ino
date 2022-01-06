char input;
char output;
int shift;
String inputString;
int mode = 0;

void setup() {
  Serial.begin(115200);
  Serial.println("Cipher");
  Serial.println("Shift by: ");
}

void loop() {
if(mode == 0){
    if (Serial.available()) {
        inputString = Serial.readString();
        shift = inputString.toInt();
        Serial.println("Shift by: " + inputString);
        Serial.println("LOADING.....");
        mode = 1;
    }
}
if(mode == 1){
    if (Serial.available()) {
        input = Serial.read();
        output = input+shift;
        Serial.println((output));
    }
}
}