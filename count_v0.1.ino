/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Projecto: Contador de 0 a 9.
Ingeniero: Antonio Amaya
Descripcion:
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
//Definicion de GPIO a utiliza.
#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8

//Funcion para generar numero en display.
int Display (int dato);


void setup() {
  //Definimos nuestros GPIO como Salidas.
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);

  Serial.begin (9600); //iniciar monitor serie a 9600 baudios
}

void loop() {
  //Ciclo for para generar conteo de 0 a nueve y pasar valor a mostrar en la funcion Display.
  for(int i = 0; i < 10; i++){
    Display(i);
    Serial.println("contador:  ");
    Serial.println (i); //imprimir por pantalla el valor de contador
    delay(100);
  }

}

//Funcion Display, pasamos dato de ciclo for, y dependiendo el valor de "i" se ejecutara el caso
//mostrando cada numero en un lapso de 100 milisegundos.
int Display(int datos){
  
  switch(datos){
    case 0:
      digitalWrite(A,HIGH);
      digitalWrite(B,HIGH);
      digitalWrite(C,HIGH);
      digitalWrite(D,HIGH);
      digitalWrite(E,HIGH);
      digitalWrite(F,HIGH);
      digitalWrite(G,LOW);
    break;
    case 1:
      digitalWrite(A,LOW);
      digitalWrite(B,HIGH);
      digitalWrite(C,HIGH);
      digitalWrite(D,LOW);
      digitalWrite(E,LOW);
      digitalWrite(F,LOW);
      digitalWrite(G,LOW);
    break;
    case 2:
      digitalWrite(A,HIGH);
      digitalWrite(B,HIGH);
      digitalWrite(C,LOW);
      digitalWrite(D,HIGH);
      digitalWrite(E,HIGH);
      digitalWrite(F,LOW);
      digitalWrite(G,HIGH);
    break;
    case 3:
      digitalWrite(A,HIGH);
      digitalWrite(B,HIGH);
      digitalWrite(C,HIGH);
      digitalWrite(D,HIGH);
      digitalWrite(E,LOW);
      digitalWrite(F,LOW);
      digitalWrite(G,HIGH);
    break;
    case 4:
      digitalWrite(A,LOW);
      digitalWrite(B,HIGH);
      digitalWrite(C,HIGH);
      digitalWrite(D,LOW);
      digitalWrite(E,LOW);
      digitalWrite(F,HIGH);
      digitalWrite(G,HIGH);
    break;
    case 5:
      digitalWrite(A,HIGH);
      digitalWrite(B,LOW);
      digitalWrite(C,HIGH);
      digitalWrite(D,HIGH);
      digitalWrite(E,LOW);
      digitalWrite(F,HIGH);
      digitalWrite(G,HIGH);
    break;
    case 6:
      digitalWrite(A,HIGH);
      digitalWrite(B,LOW);
      digitalWrite(C,HIGH);
      digitalWrite(D,HIGH);
      digitalWrite(E,HIGH);
      digitalWrite(F,HIGH);
      digitalWrite(G,HIGH);
    break;
    case 7:
      digitalWrite(A,HIGH);
      digitalWrite(B,HIGH);
      digitalWrite(C,HIGH);
      digitalWrite(D,LOW);
      digitalWrite(E,LOW);
      digitalWrite(F,LOW);
      digitalWrite(G,LOW);
    break;
    case 8:
      digitalWrite(A,HIGH);
      digitalWrite(B,HIGH);
      digitalWrite(C,HIGH);
      digitalWrite(D,HIGH);
      digitalWrite(E,HIGH);
      digitalWrite(F,HIGH);
      digitalWrite(G,HIGH);
    break;
    case 9:
      digitalWrite(A,HIGH);
      digitalWrite(B,HIGH);
      digitalWrite(C,HIGH);
      digitalWrite(D,LOW);
      digitalWrite(E,LOW);
      digitalWrite(F,HIGH);
      digitalWrite(G,HIGH);
    break;
    default:
      Serial.println("Algo esta mal! xd, revisa el codigo de nuevo!");
    break;
  }

}
