int Knopwaarde = 0; 

int counter;
 
  
 void setup()
 // de ledjes
 

 {
  pinMode(1, OUTPUT); //groene led 1
  pinMode(2, OUTPUT); //groene led 2
  pinMode(3, OUTPUT); //groene led 3
  pinMode(4, OUTPUT); //groene led 4
  pinMode(5, OUTPUT); //rode led 1
  pinMode(6, OUTPUT); //rode led 2
  pinMode(7, OUTPUT); //rode led 3
  pinMode(8, OUTPUT); //rode led 4
 
  pinMode(10, OUTPUT);
  pinMode(9, INPUT);
}


//rotatie voor het standaard stoplicht 

void standaardrotatiestoplicht()
{
    // Alle rode leds aan
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(10, HIGH);
    delay(3000); // 3 seconden wachten
  
  
    // Linksboven groene led gaat aan
    digitalWrite(1, HIGH); // linksboven rode led gaat uit
    digitalWrite(5, LOW); // linksboven groene led gaat aan
    delay(3000); //3 seconden wachten
    
    // Alles weer op rood
    digitalWrite(1, LOW); // linksboven groene led gaat weer uit
    digitalWrite(5, HIGH); // linksboven rode led gaat weer aan
    delay(2000); // rood 

  
    // Rechtsboven Groen led gaat aan
    digitalWrite(2, HIGH); // rechtsboven groene led gaat aan
    digitalWrite(6, LOW); // rechtsboven rode let gaat ui 
    delay(3000); // 3 seconden wachten

    
    // Alles op Rood
    digitalWrite(2, LOW); //rechtsboven groene led gaat uit
    digitalWrite(6, HIGH); //rechtsboven rode let gaat aan
    delay(2000); // 2 seconden wachten

    
    // Rechtsonder Groen led gaat aan
    digitalWrite(7, LOW); //rechtsondere rode led gaat uit
    digitalWrite(3, HIGH); //rechtsonder groene led gaat aan
    delay(3000); // 3 seconden wachten

    
    // Alles op Rood
    digitalWrite(7, HIGH); //rechtsonder rode led gaat aan
    digitalWrite(3, LOW); //rechtsonder groene led gaan uit
    delay(3000); // 2 seconden wachten

    
    // Linksonder Groen led gaat aan
    digitalWrite(4, HIGH); //linksonder groene led gaat aan
    digitalWrite(8, LOW); //linksonder rode led gaan uit 
    delay(3000); // 3 seconden wachten

    
    // Alles op rood
    digitalWrite(4, LOW); //linksonder rode let gaat weer aan
    digitalWrite(8, HIGH); //linksonder groene let gaat weer uit
    delay(2000); // 2 seconden wachten
  }

//voetgangerspad functie

void Voetgangerspad ()
{	
 
	digitalWrite(10, LOW); //Stoplicht gaat uit
  
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
  
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    delay(8000);
}
// main loop 

void loop()  {
	Knopwaarde = digitalRead(9); //chekt of de knop is ingedrukt


  if (Knopwaarde == HIGH){ //als de knop is ingedrukt 
    Voetgangerspad ();  //gaat de voetgangerspad functie aan
  } 
  
   else { //als de knop niet is ingedrukt
      standaardrotatiestoplicht(); //gaat standaardrotatiestoplicht functie aan
  }
 
}


