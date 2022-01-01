//"Am I overweight?" program. 
String weightstring = "";
String heightstring = "";
float weight;
float height;
float bmi;
float res = 0;

void setup() {
    Serial.begin(115200);
    Serial.println("BMI Calculator");
    Serial.println("Enter your weight in KG:");
}

void loop() {
    if (res == 0) {
    if (Serial.available()) {
            weightstring = Serial.readString();
            weight = weightstring.toInt();
            Serial.println("Confirmed " + String(weight) + " KG");
            Serial.println("Enter your height in CM:");
            res = 1;
        }
    } 
    if (res == 1) {
        if(Serial.available()) {
            heightstring = Serial.readString();
            height = heightstring.toInt();
            Serial.println("Confirmed " + String(height) + " cm");
            bmi = 10000*weight/(height*height);
            Serial.println("Your BMI is: " + String(bmi));
            if(bmi < 16) {
                Serial.println("You are severely underweight");
            }
            else if(bmi < 18.4) {
                Serial.println("You are underweight");
            }
            else if(bmi < 24.9) {
                Serial.println("You are normal");
            }
            else if(bmi < 29.9) {
                Serial.println("You are overweight");
            }
            else if(bmi < 34.9) {
                Serial.println("You are Moderately Obese");
            }
            else if(bmi < 39.9) {
                Serial.println("You are Severely Obese");
            }
            else {
                Serial.println("You are Morbidly Obese");
            }
            res = 0;
            Serial.println("--------------------------------");
            Serial.println("BMI Calculator");
            Serial.println("Enter your weight in KG:");
        }
    }
}    

 
