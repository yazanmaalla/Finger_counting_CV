String x;
void setup() {
  for (int i=2; i<=6 ; i++)
      pinMode(i, OUTPUT);
   Serial.begin(9600); }

void loop() {
 if(Serial.available() >0) {
  x=Serial.readStringUntil('\n');
  if (x =="1")
  { digitalWrite(2,HIGH); digitalWrite(3,LOW); 
    digitalWrite(4,LOW);  digitalWrite(5,LOW); 
    digitalWrite(6,LOW);  }
else if (x =="2")
  { digitalWrite(2,HIGH); digitalWrite(3,HIGH);
    digitalWrite(4,LOW);  digitalWrite(5,LOW);
       digitalWrite(6,LOW);  }
       else if (x =="3")
  { digitalWrite(2,HIGH); digitalWrite(3,HIGH);
    digitalWrite(4,HIGH); digitalWrite(5,LOW);
       digitalWrite(6,LOW);  }
       else if (x =="4")
  { digitalWrite(2,HIGH); digitalWrite(3,HIGH);
    digitalWrite(4,HIGH); digitalWrite(5,HIGH);
       digitalWrite(6,LOW);  }
 else if (x =="5")
  { digitalWrite(2,HIGH); digitalWrite(3,HIGH);
    digitalWrite(4,HIGH); digitalWrite(5,HIGH);
       digitalWrite(6,HIGH);  }
else  if (x =="0")  { 
  digitalWrite(2,LOW); digitalWrite(3,LOW);
  digitalWrite(4,LOW); digitalWrite(5,LOW);
       digitalWrite(6,LOW);  } }}
