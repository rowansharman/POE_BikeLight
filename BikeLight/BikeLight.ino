const byte led1 = 6;
const byte led2 = 11;
const byte led3 = 10;
const byte led4 = 9;
const byte button = 3;
const byte potPin = 0;
int value = 0;
int value1 = 0;
int counter = 0;
int potState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  Serial.print(value1);
  Serial.println(value);
  value1 = digitalRead(button);

  if (value<value1) 
    counter++;

  value = value1;
    
  counter = counter%6;
  
  switch (counter) {
    case 1:
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      break;
    case 2:
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      delay(150);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      delay(150);
      break;
    case 3:
      digitalWrite(led1, HIGH);
      delay(80);
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      delay(80);
      digitalWrite(led2, LOW);
      digitalWrite(led3, HIGH);
      delay(80);
      digitalWrite(led3, LOW);
      digitalWrite(led4, HIGH);
      delay(80);
      digitalWrite(led4, LOW);
      break;
    case 4:
      digitalWrite(led1, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led2, LOW);
      digitalWrite(led4, LOW);
      delay(200);
      digitalWrite(led1, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led2, HIGH);
      digitalWrite(led4, HIGH);
      delay(200);
      break; 
    case 5:
      potState = analogRead(potPin);
      potState = map(potState, 0, 1023, 0, 255); //maps pot input of 0 to 1023 to led output of 0 to 255
      analogWrite(led1, potState);
      analogWrite(led2, potState);
      analogWrite(led3, potState);
      analogWrite(led4, potState);
      break;
    default:
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      break;  
  }
  
}

      
