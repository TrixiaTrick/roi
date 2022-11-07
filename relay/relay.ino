 /********************************************
 * name:Relay Module
 * function: you may hear ticktock. That's the normally closed contact opened and the normally open contact closed.
 ********************************************/
/**********************************************/
const int relayPin =7; //the "s" of relay module attach to
/**********************************************/
void setup()
{
  pinMode(relayPin, OUTPUT); //initialize relay as an output
}
/***********************************************/
void loop()
{
  digitalWrite(relayPin, HIGH); //Close the relay
  delay(3000); //wait for 1 second - times when it's on - 1 second
  digitalWrite(relayPin, LOW); //disconnect the relay 
  delay(1000); //wait for 1 second - times when it's off - 1 second
}
/*************************************************/
