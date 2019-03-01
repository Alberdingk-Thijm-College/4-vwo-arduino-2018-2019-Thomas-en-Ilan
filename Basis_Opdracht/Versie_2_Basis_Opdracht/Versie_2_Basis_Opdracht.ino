int counter;
void setup()
// de ledjes
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

//rotatie voor het standaard stoplicht 

void standaardrotatiestoplicht()
{
    // Alle rode leds aan
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
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

// main loop 

void loop()
{
  standaardrotatiestoplicht();
  
}

