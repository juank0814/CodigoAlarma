int estadoBoton1=0;
int estadoBoton2=0;
int estadoBoton3=0;
int pinTono=9;
int Cor_on=2;
int Coag_on=3;
int malaConexion=4;

void setup() {
  // put your setup code here, to run once:

pinMode(pinTono,OUTPUT);
pinMode(Cor_on,INPUT); //Establecemos el pin 2 BotonCorte como entrada
pinMode(Coag_on,INPUT); //Establecemos el pin 3 BotonCoag como entrada
pinMode(malaConexion,INPUT);//Establecemos el pin 4 mala conexion como entrada

}

void loop() {
  // put your main code here, to run repeatedly:
  
  estadoBoton1=digitalRead(Cor_on);  //almacena la lectura digital 
  if(estadoBoton1 == HIGH){
  tone(9,660,10);                     //tone(pin,frecuencia,duracion)
  }
   estadoBoton2=digitalRead(Coag_on);
  if(estadoBoton2 == HIGH){
  tone(9,940,10);
  }
  estadoBoton3=digitalRead(malaConexion);
  if(estadoBoton3 == HIGH){
  tone(9,3500,10);
  }

  }
