const byte led1 = 12;
const byte led2 = 11;
const byte led3 = 10;
const byte led4 = 9;
const byte button = 3;
const byte pot = 4;
int value = 0;
int value1 = 0;
int counter = 0;

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
    
  counter = counter%5;
  
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
    default:
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      break;  
  }
  
}

      
