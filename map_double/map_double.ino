
// Global variable
double varToMap = 9.9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  double x = mapDouble(varToMap, 1, 10, 11, 20);
  double y = map(varToMap, 1, 10, 11, 20);
  Serial.print("mapDouble: "); Serial.print(x);
  Serial.print("; map: "); Serial.println(y);
  delay(1000);

}


double mapDouble(double i, double in_min, double in_max, double out_min, double out_max) {
  return (i-in_min)*(out_max-out_min)/(in_max-in_min) + out_min;  
}
