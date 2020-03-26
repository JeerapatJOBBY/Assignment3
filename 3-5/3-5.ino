void setup(){
    Serial.begin(9600);
    pinMode(2,INPUT_PULLUP);
}
int y = 0;
void loop(){
    int x = 0;
    while (digitalRead(2)==0) {
    x++;
    delay(50);
    if (x <= 1){
        y++;
        Serial.println(y);
    }
    }
    //ข้อ 5 เสดแล้ว

    
}