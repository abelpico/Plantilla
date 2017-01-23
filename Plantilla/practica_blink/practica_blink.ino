/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                            Blink                            **
**                                                             **
**   NOM: Abel Picó                           Data:22/01/17    **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************


//*************************** SETUP *****************************

void setup() {
  // put your setup code here, to run once:
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(5, OUTPUT);

}


//*************************** LOOP ******************************

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second

}


//************************ FUNCIONS *****************************
