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
  pinMode(LED_BUILTIN, OUTPUT); //Posa el pin que vulguis com a sortida

}


//*************************** LOOP ******************************

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);   // posa el pin desitjat al nivell alt
  delay(1000);                       // espera un segon
  digitalWrite(LED_BUILTIN, LOW);    // posa el pin desitjat a nivell baix
  delay(1000);                       // espera un segon

}


//************************ FUNCIONS *****************************
