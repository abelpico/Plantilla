/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                       Practica blink                        **
**                                                             **
**   NOM: Abel Picó                           Data:22/01/17    **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************


//*************************** SETUP *****************************

void setup() {
  // put your setup code here, to run once:
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);

}


//*************************** LOOP ******************************

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second

}


//************************ FUNCIONS *****************************
