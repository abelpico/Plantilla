/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                         Polsador Led                        **
**                                                             **
**   NOM: Abel Picó                           Data:22/01/17    **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************


//*************************** SETUP *****************************

void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT); //Posa el pin 3 com a sortida
  pinMode(5, INPUT); //Pos el pin 5 com a entrada

}


//*************************** LOOP ******************************

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(5)){        //quan el pin 5 estigui activat
    digitalWrite(3, HIGH);   // posa el pin 3 al nivell alt
  }else{                     //quan el pin 5 estigui descativat
    digitalWrite(3, LOW);    // posa el pin 3 a nivell baix
  }
}


//************************ FUNCIONS *****************************
