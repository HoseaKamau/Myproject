// C++ code
int pmeter = A0;
int buzzer = 8;
int greenLED = 9;
int yellowLED = 10;
int redLED = 11;
String mgs1 = "Pitch too high";
String mgs2 = "pitch two";
String mgs3 = "pitch three";
String mgs4 = "pitch four";
String mgs5 = "pitch five";
String mgs6 = "pitch six";
String mgs7 = "pitch seven";
String mgs8 = "pitch eight";
String mgs9 = "pitch nine";
String mgs10 = "pitch ten";
String mgs11 = "pitch eleven";
String mgs12 = "pitch twelve";
String mgs13 = "pitch thirteen";

void setup()
{
  pinMode(pmeter, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int calc = analogRead(pmeter);
  if (calc <= 50){
    tone(buzzer, 50);
    Serial.println(mgs2);
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
    delay(1000);
    noTone(buzzer);
  }
  else if( calc <= 100){
    tone(buzzer, 100);
    Serial.println(mgs3);
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
    delay(1000);
    noTone(buzzer);
  }
  else if (calc <= 150){
    tone(buzzer, 150);
    Serial.println(mgs4);
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
    delay(1000);
    noTone(buzzer);
  }
  else if (calc <= 200){
    tone(buzzer, 200);
    Serial.println(mgs5);
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
    delay(1000);
    noTone(buzzer);
  }
  else if (calc <= 250){
    tone(buzzer, 250);
    Serial.println(mgs6);
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
    delay(1000);
    noTone(buzzer);
  }
  else if (calc <= 300){
    tone(buzzer, 300);
    Serial.println(mgs7);
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(redLED, LOW);
    delay(1000);
    noTone(buzzer);
  }
  else if (calc <= 400){
    tone(buzzer, 400);
    Serial.println(mgs8);
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(redLED, LOW);
    delay(1000);
    noTone(buzzer);
  }
  else if (calc <= 500){
    tone(buzzer, 500);
    Serial.println(mgs9);
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(redLED, LOW);
    delay(1000);
    noTone(buzzer);
  }
  else if (calc <= 600){
    tone(buzzer, 600);
    Serial.println(mgs10);
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(redLED, LOW);
    delay(1000);
    noTone(buzzer);
  }
  else if (calc <= 700){
    tone(buzzer, 700);
    Serial.println(mgs11);
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(redLED, HIGH);
    delay(1000);
    noTone(buzzer);
  }
  else if (calc <= 800){
    tone(buzzer, 800);
    Serial.println(mgs12);
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(redLED, HIGH);
    delay(1000);
    noTone(buzzer);
  }
  else if (calc <= 900){
    tone(buzzer, 900);
    Serial.println(mgs13);
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(redLED, HIGH);
    delay(1000);
    noTone(buzzer);
  }
  else {
    Serial.println(mgs1);
  }
}
  /*delay(100);
  
}*/