void setup(){
    Serial.begin(9600);
    pinMode(3,INPUT_PULLUP);
}
int z = 0;
int y = 0;
void loop(){
    int one = 1;
    int two = 2;
    int three = 3;
    int x = 0;
    while (digitalRead(3)==0) {
    x++;
    delay(50);
    if (x == 1){
        y++;
        
        Serial.println(y);
        if (one + z == y){
            z++;
            Serial.println(one);
        }
        
        else if (two + z == y){
            z++;
            Serial.println(two)
        }
        else if (three + z == y){
            z++;
            Serial.println(three);
        }

    }
    }

    

    
}