#define ledBoard 13//Salida 13 de Arduino
char dato=' ';//Variable implementada para el envio de datos
int valor=0;//Variable para deternimar el numero de veces que parpadea el testigo salida 13

void setup() {
  // put your setup code here, to run once:
  pinMode(ledBoard, OUTPUT);//Configura pin 13 como salida
  Serial.begin(9600);//Velicidad 9600Bd
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()>0){//Determina si el puerto ha recibido informacion
    dato = Serial.read();//Pasa a larible dato el valor recibido
  }
  if (dato=='a'){//Determina que valor ha sido almacenado en dato
    valor = 1;
    //Ciclo que se encarga de de encender el testigo segun indica la variable valor
   for (int i = 0; i<valor; i++){
    digitalWrite(ledBoard, HIGH);//Testigo en alto
    delay(250);//Retardo
    digitalWrite(ledBoard, LOW);//Testigo en bajo
    delay(250);//Retardo
   }
  }
  if (dato=='b'){
   valor = 2;
   for (int i = 0; i<valor; i++){
    digitalWrite(ledBoard, HIGH);
    delay(250);
    digitalWrite(ledBoard, LOW);
    delay(250);
   }
  }
  if (dato=='c'){
   valor = 3;
   for (int i = 00; i<valor; i++){
    digitalWrite(ledBoard, HIGH);
    delay(250);
    digitalWrite(ledBoard, LOW);
    delay(250);
   }
  }
  if (dato=='d'){
   valor = 4;
   for (int i = 00; i<valor; i++){
    digitalWrite(ledBoard, HIGH);
    delay(250);
    digitalWrite(ledBoard, LOW);
    delay(250);
    digitalWrite(ledBoard, LOW);
   }
  }
  if (dato=='e'){
   valor = 5;
   for (int i = 00; i<valor; i++){
    digitalWrite(ledBoard, HIGH);
    delay(250);
    digitalWrite(ledBoard, LOW);
    delay(250);
   }
  }
  if (dato=='f'){
   valor = 6;
   for (int i = 00; i<valor; i++){
    digitalWrite(ledBoard, HIGH);
    delay(250);
    digitalWrite(ledBoard, LOW);
    delay(250);
   }
  }
  if (dato=='g'){
    valor = 7;
    for (int i = 00; i<valor; i++){
    digitalWrite(ledBoard, HIGH);
    delay(250);
    digitalWrite(ledBoard, LOW);
    delay(250);
    }
  }
  if (dato=='h'){
    valor = 8;
    for (int i = 00; i<valor; i++){
    digitalWrite(ledBoard, HIGH);
    delay(250);
    digitalWrite(ledBoard, LOW);
    delay(250);
    }
  }
  if (dato=='i'){
    valor = 9;
    for (int i = 00; i<valor; i++){
    digitalWrite(ledBoard, HIGH);
    delay(250);
    digitalWrite(ledBoard, LOW);
    delay(250);
    }
  }
  if (dato=='j'){
    valor = 10;
    for (int i = 00; i<valor; i++){
    digitalWrite(ledBoard, HIGH);
    delay(250);
    digitalWrite(ledBoard, LOW);
    delay(250);
  }
  }
}
