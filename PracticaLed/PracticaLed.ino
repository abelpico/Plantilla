/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                             Led                             **
**                                                             **
**   NOM: Abel Picó                           Data:22/01/17    **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************


//*************************** SETUP *****************************

void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT); //Posa el 5 com a sortida

}


//*************************** LOOP ******************************

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(5, HIGH);   // posa el pin 5 al nivell alt
  delay(1000);                       // espera un segon
  digitalWrite(5, LOW);    // posa el pin 5 a nivell baix
  delay(1000);                       // espera un segon

}


//************************ FUNCIONS *****************************
