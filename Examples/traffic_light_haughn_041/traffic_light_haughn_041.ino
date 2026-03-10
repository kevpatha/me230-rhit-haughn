// C++ code
//

int red = 9;
int yellow = 8;
int green = 7;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  digitalWrite(red, HIGH);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(red, LOW);
  
  digitalWrite(yellow, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(yellow, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(yellow, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(yellow, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(yellow, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(yellow, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(green, HIGH);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(green, LOW);
  
  digitalWrite(yellow, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(yellow, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(yellow, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(yellow, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(yellow, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(yellow, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  
}