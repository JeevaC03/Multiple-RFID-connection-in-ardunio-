
//#define RELAYPIN 13
#define WARNLEDPIN 12
//char tag[] ="2700134F453E"; // Replace with your own Tag ID
char input[12];        // A variable to store the Tag ID being presented
int count = 0;        // A counter variable to navigate through the input[] character array
char input1[12];        // A variable to store the Tag ID being presented
int count1 = 0;
char input2[12];        // A variable to store the Tag ID being presented
int count2 = 0;
boolean flag = 0;     // A variable to store the Tag match status
void setup()
{
  Serial.begin(9600);   // Initialise Serial Communication with the Serial Monitor
  Serial1.begin(9600);
   Serial2.begin(9600);
  //pinMode(RELAYPIN,OUTPUT); // RELAY OUTPUT
  pinMode(WARNLEDPIN,OUTPUT); //WRONG TAG INDICATOR
}
void loop()
{
  if(Serial.available())// Check if there is incoming data in the RFID Reader Serial Buffer.
  {
    count = 0; // Reset the counter to zero
    /* Keep reading Byte by Byte from the Buffer till the RFID Reader Buffer is empty 
       or till 12 Bytes (the ID size of our Tag) is read */
    while(Serial.available() && count < 12) 
    {
      input[count] = Serial.read(); // Read 1 Byte of data and store it in the input[] variable
      Serial.print(input[count]);
      count++; // increment counter
      delay(1);
    }
    /* When the counter reaches 12 (the size of the ID) we stop and compare each value 
        of the input[] to the corresponding stored value */
 }

 if(Serial1.available())// Check if there is incoming data in the RFID Reader Serial Buffer.
  {
    count1 = 0; // Reset the counter to zero
    /* Keep reading Byte by Byte from the Buffer till the RFID Reader Buffer is empty 
       or till 12 Bytes (the ID size of our Tag) is read */
    while(Serial1.available() && count1 < 12) 
    {
      input1[count1] = Serial1.read(); // Read 1 Byte of data and store it in the input[] variable
      Serial.print(input1[count1]);
      count1++; // increment counter
      delay(1);
    }
    /* When the counter reaches 12 (the size of the ID) we stop and compare each value 
        of the input[] to the corresponding stored value */
 }
  if(Serial2.available())// Check if there is incoming data in the RFID Reader Serial Buffer.
  {
    count2 = 0; // Reset the counter to zero
    /* Keep reading Byte by Byte from the Buffer till the RFID Reader Buffer is empty 
       or till 12 Bytes (the ID size of our Tag) is read */
    while(Serial2.available() && count2 < 12) 
    {
      input2[count2] = Serial2.read(); // Read 1 Byte of data and store it in the input[] variable
      Serial.print(input2[count2]);
      count2++; // increment counter
      delay(1);
    }
    /* When the counter reaches 12 (the size of the ID) we stop and compare each value 
        of the input[] to the corresponding stored value */
 }
}
