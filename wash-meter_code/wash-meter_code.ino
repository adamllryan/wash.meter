
class machine {
  bool state = false;
  //thresholod to determine if on or off
  int threshold = 1;
  bool isOn() {
    return state;
  }
  void setThreshold(int i) {
    this->threshold = i;
  }
};

void setup() {
  int AIN0 = 115;
  pinMode(AIN0, INPUT);
  machine* m = new machine();
}

void loop() {
  
  
}
