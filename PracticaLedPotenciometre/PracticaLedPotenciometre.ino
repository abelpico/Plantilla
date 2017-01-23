/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                      Led Potenciometre                      **
**                                                             **
**   NOM: Abel Picó                           Data:22/01/17    **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************

int sensorValue = 0; //indica la variable sensorValue com a 0

//*************************** SETUP *****************************

void setup() {
  pinMode(3, OUTPUT); //posa el pin 3 com a sortida

}


//*************************** LOOP ******************************

void loop() {
  sensorValue = analogRead(A0); //la variable sensorValue rep un nou valor
  analogWrite(3, sensorValue/4); // el valor que li hem donat es posa en el pin 3 i es divideix per 4

}


//************************ FUNCIONS *****************************
