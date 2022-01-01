//prime number generator
int n = 0;
String rcvString = "";

void setup() {
    Serial.begin(115200);
    Serial.println("Prime Number Generator");
    Serial.println("Generate the prime numbers from 1 to n");
    Serial.println("Enter the number n");
    
    

}

void loop() { 
   if (Serial.available()) {
        rcvString = Serial.readString();
        n = rcvString.toInt();
        Serial.println(n);
        for (int count = 0; count < n; count ++) {
            if (count % 2 != 0) {
                Serial.println(count);
            }
        }
    }
}