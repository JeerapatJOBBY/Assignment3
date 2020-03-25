void setup(){
    Serial.begin(9600);
    pinMode(2,INPUT_PULLUP);
}
int y = 0;
void loop(){
    int x = 0;
    while (digitalRead(2)==0) {
    x++;
    delay(500);
    if (x == 1){
        y++;
        Serial.println(y);
    }
    }
    

    
}