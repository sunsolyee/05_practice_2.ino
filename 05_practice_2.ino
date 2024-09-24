#define red 7
unsigned int toggle;

void setup() {
  pinMode(red, OUTPUT);
  Serial.begin(115200); // Initialize serial port
  while (!Serial){
    ; // wait for serial port to connect.
    toggle = 1;
    digitalWrite(red,toggle);
  }

}

void loop() {
  toggle = 0;
  digitalWrite(red,toggle);
  delay(1000);

  for (int i = 0; i < 10; i++){
    toggle = !toggle;
    digitalWrite(red,toggle);
    delay(200);
  } 

  digitalWrite(red,1);
  while(1){
    
  }
}
