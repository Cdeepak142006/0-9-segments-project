#include <ESP8266WiFi.h>
#include <FirebaseESP8266.h>
                          
#define FIREBASE_HOST "https://agriculture-28d68-default-rtdb.firebaseio.com/"                     //Your Firebase Project URL goes here without "http:" , "\" and "/"
#define FIREBASE_AUTH "tLHxqpHfuay4HLU6aZF5RCzUHUH4Fl9dBEgx9JYZ" //Your Firebase Database Secret goes here

#define WIFI_SSID "AiROBOSOFT_ACT"                                               //WiFi SSID to which you want NodeMCU to connect
#define WIFI_PASSWORD "airobosoft@123"                                      //Password of your wifi network 
 
  

// Declare the Firebase Data object in the global scope
FirebaseData firebaseData;

// Declare global variable to store value
int val;
int val2;
int val3;
int val4;
int val5;

int statuss = 0;
int out = 0;
int i ;
int j ;
int k ;
int l ;
int m ;

void setup() 
{

  Serial.begin(9600);         
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);                                     //try to connect with wifi
  Serial.print("Connecting to ");
  Serial.print(WIFI_SSID);


  
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }

  
  Serial.println();
  Serial.print("Connected to ");
  Serial.println(WIFI_SSID);
  Serial.print("IP Address is : ");
  Serial.println(WiFi.localIP());                                            //print local IP address
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);   // connect to firebase

  Firebase.reconnectWiFi(true);
  delay(1000);
}
void loop() 
{
  // Look for new cards

  //Show UID on serial monitor
   
if (Firebase.getInt(firebaseData, "/dataset/55/email")) {                           // On successful Read operation, function returns 1  

    if (firebaseData.dataType() == "int") {                            // print read data if it is integer

      val = firebaseData.intData();
      Serial.println(val);
      Serial.println("\n Change value at firebase console to see changes here."); 
      
      
    }

  } else {
    Serial.println(firebaseData.errorReason());
  }
if (Firebase.getInt(firebaseData, "/dataset/55/password")) {                           // On successful Read operation, function returns 1  

    if (firebaseData.dataType() == "int") {                            // print read data if it is integer

      val2 = firebaseData.intData();
      Serial.println(val2);
      Serial.println("\n Change value at firebase console to see changes here."); 
      
      
    }

  } else {
    Serial.println(firebaseData.errorReason());
  }
if (Firebase.getInt(firebaseData, "/List/Medicine1/email")) {                           // On successful Read operation, function returns 1  

    if (firebaseData.dataType() == "int") {                            // print read data if it is integer

      val3 = firebaseData.intData();
      Serial.println(val3);
      Serial.println("\n Change value at firebase console to see changes here."); 
      
      
    }

  } else {
    Serial.println(firebaseData.errorReason());
  }
if (Firebase.getInt(firebaseData, "/List/Medicine1/email")) {                           // On successful Read operation, function returns 1  

    if (firebaseData.dataType() == "int") {                            // print read data if it is integer

      val4 = firebaseData.intData();
      Serial.println(val4);
      Serial.println("\n Change value at firebase console to see changes here."); 
      
      
    }

  } else {
    Serial.println(firebaseData.errorReason());
  }

if (Firebase.getInt(firebaseData, "/List/Medicine1/name")) {                           // On successful Read operation, function returns 1  

    if (firebaseData.dataType() == "int") {                            // print read data if it is integer

      val5 = firebaseData.intData();
      Serial.println(val5);
      Serial.println("\n Change value at firebase console to see changes here."); 
      
      
    }

  } else {
    Serial.println(firebaseData.errorReason());
  }
Serial.println(val);
Serial.println(val2);
Serial.println(val3);
Serial.println(val4);
Serial.println(val5);
//Serial.print(Firebase.getInt("users/nithin/email"));


}
