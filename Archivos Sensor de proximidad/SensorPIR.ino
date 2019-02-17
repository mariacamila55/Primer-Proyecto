const int trigPin = 3; //Emite onda
const int echoPin = 2; //Duración

int duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT); //Define el que sale
  pinMode(echoPin, INPUT); //Define el que entra

  for(int i = 4; i < 9; i++){
    pinMode(i, OUTPUT);
  }
}  Serial.print("distancia: ");//Muestra distancia
  Serial.println(distance);
  

void loop(){
  digitalWrite(trigPin, LOW); //Inicial apagado
  delayMicroseconds(2);//Tiempo inicial sin onda

  digitalWrite(trigPin, HIGH);//Cuando se prende
  delayMicroseconds(11); //Duración onda en ir y volver
  digitalWrite(trigPin, LOW);//Cuando se apaga

  duration = pulseIn (echoPin, HIGH);//Enciende para medir distancia

  distance = 0.034 * duration / 2;//Mide distancia teniendo en cuenta la velocidad del sonido y la onda dividida en 2
  if(distance < 5){//Distancia menor a 5
    for(int i = 4; i< 9; i++) {
      digitalWrite(i, HIGH);//Todos los pines encendidos
    } 
  }else if (distance > 5 && distance <10){
      digitalWrite (8, LOW)
      for (int i = 4; i < 8; i++){
        digitalWrite(i, HIGH);//Todos encendidos menos el 8
      }
   }else if(distance > 10 && distance < 15){
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      for ( int i = 4; i < 7; i++) {
        digitalWrite(i, HIGH);//Todos encendidos menos 7 y 8
      }
    }else if (distance > 15 && distance < 20) {
      digitalWrite(8, LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
      for (int i = 4; i < 6; i++) {
        digitalWrite(i, HIGH);//Todos encendidos menos 6,7 y 8
      }
     }else if (distance > 20 && distance < 25) {
      digitalWrite(8, LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
      digitalWrite(5,LOW);
      for(int = 4; i < 5 ; i++) {
        digitalWrite(i, HIGH);//Solo el 4 encendido
      }
     }
}
