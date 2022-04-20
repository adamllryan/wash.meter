void setup() {
  // put your setup code here, to run once:
  pinMode(A1, INPUT);
  Serial.begin(9600);
}
int runtime = 0;
int last_runtime = 0;
bool isRunning = false;
int max_voltage = 3;
int on_voltage = 2;
int threshold = 1024/max_voltage*on_voltage;
void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  isRunning = (analogRead(A1)>threshold);
  if (isRunning) {
    runtime++;
    } else {
      if (runtime !=0)
        last_runtime = runtime;
      runtime = 0;
      
      }
  Serial.print("Runtime: ");
  Serial.println(runtime);
  Serial.print("Last Runtime: ");
  Serial.println(last_runtime);
  Serial.println(analogRead(A1));
}
