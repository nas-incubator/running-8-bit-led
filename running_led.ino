// Define the LED pins
const int led1 = 2;
const int led2 = 3;
const int led3 = 4;
const int led4 = 5;

void setup() {
  // Initialize the LED pins as outputs
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  // Turn on LED 1
  digitalWrite(led1, HIGH);
  delay(2000); // Wait for 500 milliseconds
  digitalWrite(led1, LOW);
  
  // Turn on LED 2
  digitalWrite(led2, HIGH);
  delay(1000); // Wait for 500 milliseconds
  digitalWrite(led2, LOW);
  
  // Turn on LED 3
  digitalWrite(led3, HIGH);
  delay(250); // Wait for 500 milliseconds
  digitalWrite(led3, LOW);
  
  // Turn on LED 4
  digitalWrite(led4, HIGH);
  delay(1000); // Wait for 500 milliseconds
  digitalWrite(led4, LOW);
}