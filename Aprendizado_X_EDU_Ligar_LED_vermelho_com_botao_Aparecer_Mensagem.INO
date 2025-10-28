// Entrada e saída de dados:

int botao = 11; 
int led01 = 13;
int led02 = 10; 
int val = 0; 


void setup() {

 Serial.begin(9600);
 
  pinMode (botao, INPUT);
  pinMode (led01, OUTPUT);
  pinMode (led02, OUTPUT);
  
}
           
 void loop () {
           
 
   for (int i = 0; i<5; i++){
   
   
   val = digitalRead (botao);
  
   while (val == HIGH) {
   
   
 
  Serial.println ("Botao pressionado!");
  
  digitalWrite (led02, LOW);
  
  digitalWrite (led01, HIGH); 
  delay (500);   
     
  digitalWrite (led01, LOW); 
  delay (500);  
  
  val = digitalRead (botao);
     
  delay (50);
       
 }
     
   
   }
           
  Serial.println ("Tudo certo aqui...");
   digitalWrite (led01, LOW);
   digitalWrite (led02, HIGH);
   delay (2000);
   
}
