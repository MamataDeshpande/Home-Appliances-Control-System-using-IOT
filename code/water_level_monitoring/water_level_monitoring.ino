/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>
#define TRIGGER D3// Comment this out to disable prints and save space
#define ECHO D2

//#include <SoftwareSerial.h>
//SoftwareSerial SwSerial(10,11);
//#include <BlynkSimpleStream.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
// Credentials have been replaced for repository publication.
char auth[] = "YOUR_BLYNK_AUTH_TOKEN";
const int R1 = 5;

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "YOUR_WIFI_SSID";
char pass[] = "YOUR_WIFI_PASSWORD";

//Servo servo;
BLYNK_WRITE(V5){
  int pinValue=param.asInt();
}

BLYNK_WRITE(V1){
  int pinValue=param.asInt();
}
void setup() {

// Debug console Serial.begin(115200);
//SwSerial.begin(9600);
  Serial.begin(9600);
  pinMode(TRIGGER, OUTPUT);
  pinMode(ECHO, INPUT);
  //Blynk.begin(Serial,auth);

  Blynk.begin(auth, ssid, pass);
  pinMode(R1,OUTPUT);
  // You can also specify server:

  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 8442);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8442);

  //servo.attach(15); // 15 means D8 pin of ESP8266
}

void loop()
{
  long duration, distance;
  digitalWrite(TRIGGER, LOW);
  delayMicroseconds(3);

  digitalWrite(TRIGGER, HIGH);
  delayMicroseconds(12);

  digitalWrite(TRIGGER, LOW);
  duration = pulseIn(ECHO, HIGH);
  distance = (duration/2) / 29.1;
  Blynk.virtualWrite(V1,distance);
  Blynk.virtualWrite(V5,distance);
  delay(200);

  Blynk.run(); // You can inject your own code or combine it with other sketches.
  delay(200);
}
