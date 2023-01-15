#include<Wire.h>
#include <SoftwareSerial.h>
#include <LiquidCrystal_I2C.h>
#include <EEPROM.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
#include <TinyGPSPlus.h>
#include <AltSoftSerial.h>
TinyGPSPlus gps;

//SoftwareSerial gps_serial(8, 9);
double SPEED;
String PHONE;
SoftwareSerial sim800(10, 11);
AltSoftSerial neogps;
boolean isReply = false;
volatile boolean down = false;
int downButtonState = 1;
int lastDownButtonState = 0;
int downPin = 12;
boolean alert = true;
char incomingByte;
String inputString;

void setup() {
  pinMode(downPin, INPUT);
  Serial.begin(115200);
  sim800.begin(9600);
  neogps.begin(9600);
  lcd.init();
  lcd.backlight();
 lcd.setCursor(1, 0);
  lcd.print("DISTRESS SOUND");
  lcd.setCursor(0, 1);
  lcd.print("DETECTION SYSTEM");
  delay(4000);

  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print("Please wait");
  delay(5000);
  lcd.setCursor(0, 1);
  lcd.print("Booting");
  delay(400);
  lcd.print(".");
  delay(400);
  lcd.print(".");
  delay(400);
  lcd.print(".");
  delay(400);
  lcd.print(".");
  delay(400);
  lcd.print(".");
  delay(400);
  lcd.print(".");
  delay(400);
  lcd.print(".");
  delay(400);
  lcd.print(".");
  delay(400);
  lcd.print(".");
  delay(4000);
  lcd.clear();


  while (!sim800.available()) {
    sim800.println("AT");
    delay(1000);
    Serial.println("Connecting...");
    lcd.setCursor(0, 0);
    lcd.print("  Configuring");
    lcd.setCursor(0, 1);
    lcd.print("GSM,GPS & VR.");
    delay(1000);
    lcd.print(".");
    delay(1000);
    lcd.print(".");
    delay(1000);
    lcd.print(".");
    delay(2000);
  }
  Serial.println("Connected!");
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("  All Modules");
  lcd.setCursor(0, 1);
  lcd.print("  Connected!!  ");
  sim800.println("AT+CMGF=1");  //Set SMS to Text Mode
  delay(1000);
  sim800.println("AT+CNMI=1,2,0,0,0");  //Procedure to handle newly arrived messages(command name in text: new message indications to TE)
  delay(1000);
  sim800.println("AT+CMGL=\"REC UNREAD\""); // Read Unread Messages

  delay(2000);


  lcd.setCursor(0, 0);
  lcd.print("    Welcome   ");
  lcd.setCursor(0, 1);
  lcd.print("System Is Active ");

}

void loop() {
    downButtonState = digitalRead(downPin);
  checkIfDownButtonIsPressed();

  if (sim800.available()) {
    delay(100);

    // Serial Buffer
    while (sim800.available()) {
      incomingByte = sim800.read();
      inputString += incomingByte;
    }

    delay(10);

    Serial.println(inputString);
    inputString.toUpperCase(); // Uppercase the Received Message

    if (PHONE == "") {
      if (inputString.indexOf("SET/346140") > -1) {
        PHONE = inputString.substring(9, 22);
        delay(1000);
        Reply("Dear User, You have successfully paired to Device Number: 346140");
  //      Serial.println(inputString.indexOf("SET/346140"));
    //    Serial.println(inputString.substring(9, 22));

      }
    }
    if (inputString.substring(9, 22) == PHONE) {
      if (inputString.indexOf("DEL/346140") > -1) {
        Reply("Dear User, You have successfully Unpaired from Device Number: 346140");
        PHONE = "";
      }
      if (inputString.indexOf("LOC") > -1) {
        sendSmsGPS("Here is the location, Click on the link below.");
      }
 /*     if (inputString.indexOf("STATE") > -1) {
        if (state)
          Reply("Hello, Condition is Okay");


        else
          Reply("Hello, Patient Needs Assistance.Taking Action");
      }
*/
    }
    delay(50);

    //Delete Messages & Save Memory
    if (inputString.indexOf("OK") == -1) {
      sim800.println("AT+CMGDA=\"DEL ALL\"");

      delay(1000);
    }

    inputString = "";
  }

}

//***************************************************

void Reply(String text)
{
  sim800.print("AT+CMGF=1\r");
  delay(1000);
  sim800.print("AT+CMGS=\"" + PHONE + "\"\r");
  delay(1000);
  sim800.println(text);
  delay(100);
  sim800.write(0x1A); //ascii code for ctrl-26 //sim800.println((char)26); //ascii code for ctrl-26
  delay(1000);
  Serial.println("SMS Sent Successfully.");
}
void sendSmsGPS(String text)
{
  // Can take up to 60 seconds
  boolean newData = false;
  for (unsigned long start = millis(); millis() - start < 2000;)
  {
    while (neogps.available())
    {
      if (gps.encode(neogps.read()))
      {
        newData = true;
      }
    }
  }
  if (newData)      //If newData is true
  {
    float flat, flon;
    unsigned long age;
    Serial.print("Latitude= ");
    Serial.print(gps.location.lat(), 6);
    Serial.print(" Longitude= ");
    Serial.println(gps.location.lng(), 6);
    newData = false;
    delay(300);
    ///*
    sim800.print("AT+CMGF=1\r");
    delay(1000);
    sim800.print("AT+CMGS=\"" + PHONE + "\"\r");
    delay(1000);
    sim800.println(text);
    sim800.println("");
    sim800.print("http://maps.google.com/maps?q=loc:");
    sim800.print(gps.location.lat(), 6);
    sim800.print(",");
    sim800.print(gps.location.lng(), 6);
    delay(100);
    sim800.write(0x1A);
    delay(1000);

  }
}
void checkIfDownButtonIsPressed()
{
  if (downButtonState != lastDownButtonState)
  {
    if (lastDownButtonState == 1)
    {
      alert = !alert;
notification();
      sendSmsGPS("ALERT!!! Someone Needs Help  Urgently At This Point.");
    }
    delay(50);
   
  }
  lastDownButtonState = downButtonState;
 
  
}
void notification() {
  lcd.clear();
   lcd.setCursor(4, 0);
  lcd.print("DANGER");
  lcd.setCursor(1, 1);
  lcd.print("SENDING ALERT");
    lcd.noBacklight();
  delay(300);
  lcd.backlight();
  delay(200);
    lcd.noBacklight();
  delay(300);
  lcd.backlight();
  delay(200);
    lcd.noBacklight();
  delay(300);
  lcd.backlight();
  delay(200);
  lcd.noBacklight();
  delay(300);
  lcd.backlight();
  delay(200);
    lcd.noBacklight();
  delay(300);
  lcd.backlight();
  delay(200);
    lcd.noBacklight();
  delay(300);
  lcd.backlight();
  delay(200);
    lcd.noBacklight();
  delay(300);
  lcd.backlight();
  delay(200);
    lcd.noBacklight();
  delay(300);
  lcd.backlight();
  delay(200);
    lcd.noBacklight();
  delay(300);
  lcd.backlight();
  delay(200);
  if (PHONE != ""){
     lcd.setCursor(4, 0);
  lcd.print(" ALERT");
  lcd.setCursor(0, 1);
  lcd.print(" HAS BEEN SENT");
  }
  else{
         lcd.setCursor(4, 0);
  lcd.print(" ERROR");
  lcd.setCursor(0, 1);
  lcd.print("ALERT NOT SENT");
  }
}
