//int
int x = 1;
int y;
void setup() {
//difference begin power on
Serial.begin(9600);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(6, OUTPUT);
//while loop begin
while (x < 4) {
Serial.print("Cycle no");
Serial.println(x);
 digitalWrite((x + 7), HIGH);
//for loop begin
for (y = 0; y < 255; y=y+1) {
analogWrite(6 , y);
delay(10);
}
for (y = 0; y > 255; y=y+1) {
analogWrite(6 , y);
delay(10);
}
x = x + 1;
}
}
void loop() {
}
