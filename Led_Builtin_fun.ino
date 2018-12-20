//  BUILTIN_LED_FADE
//  This project uses repeated action of ON & OFF to adjust the brightness
//  When t=1, the LED is on for 1ms, and off for 9ms
//  This happens for 10ms (loop for p)
//  Next, as the value of t increases to 10, brightness increases
//  As t increases above 10, reverse takes place, dimming it


int t,p;                                  //  t -> to adjust brightness
                                          //  p -> time period of certain brightness

void setup() {
  pinMode(LED_BUILTIN,OUTPUT);            //  define the built-in LED as output
}

void loop() {
  for(t=1;t<=19;t++){                     //  loop for t
    
    for(p=0;p<10;p++){                    //  loop for p
      
      digitalWrite(LED_BUILTIN,HIGH);     //  LED=ON
      
      if(t<=10) delay(t);                 //  Using t to set increase or decrease
      else delay(20-t);
     
      digitalWrite(LED_BUILTIN,LOW);      //  LED=OFF
      
      if(t<=10) delay(10-t);
      else delay(t-10);
    }
  }
}
