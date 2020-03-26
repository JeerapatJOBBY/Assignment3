void setup(){
    Serial.begin(9600);
    pinMode(2,INPUT_PULLUP);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);

}
int y = 0;
void loop(){
    int x = 0;
    while (digitalRead(2)==0) {
    x++;
    delay(50);
    if (x <= 1){
        y++;
        for (int z = 0; z < 5; z++) {
        switch (y) {
        case 1:
        digitalWrite(3,1);
        break;

        case 2:
        digitalWrite(3, 0);
        delay(50);
        digitalWrite(4, 1);
        break;

        case 3:
        digitalWrite(4, 0);
        delay(50);
        digitalWrite(5, 1);
        break;
        }
        continue;
        }
        
        
    }
    
    }
}