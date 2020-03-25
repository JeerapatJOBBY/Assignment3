void setup(){
    Serial.begin(9600);
    pinMode(3, INPUT_PULLUP);

}
int x = 0;
void loop(){
     while (digitalRead(3)==0) {
     x++;
     Serial.println(x);
     delay(100);

     }
     
    }
