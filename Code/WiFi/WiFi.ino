#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

// Replace with your Wi-Fi credentials
const char* ssid = "realme C67";
const char* password = "zohirr5000";

#define IN_1_L D1
#define IN_2_L D2
#define IN_3_R D3
#define IN_4_R D4

#define BUZZER	D0

#define TRIG D5
#define ECHO D6

// Initialize the web server on port 80
ESP8266WebServer server(80);

// Define the handler for the root path ("/")
void handleRoot() {

  String html = "<!DOCTYPE html><html><head>";
    html += "<title>Zzrad</title><style>.button-container { display: flex; justify-content: center; align-items: center; height: 100vh; }";
    html += ".button1 { background-color: #202467; color: #ffffff; font-size: xx-large; }";
    html += ".button2 { background-color: #202467; color: #ffffff; font-size: xx-large; }";
    html += ".button3 { background-color: #202467; color: #ffffff; font-size: xx-large; }";
    html += "</style></head><body>";
    html += "<div class=\"button-container\"><div><h1>Autonomous Chair system</h1>";
    html += "<button class=\"button1\" onclick=\"sendNumber(1)\">Laboratory</button><br>";
    html += "<button class=\"button2\" onclick=\"sendNumber(2)\">X-ray lab</button><br>";
    html += "<button class=\"button3\" onclick=\"sendNumber(3)\">Pharmacy</button><br>";
    html += "</div></div>";
    html += "<script>function sendNumber(num) { var xhr = new XMLHttpRequest(); xhr.open('GET', '/send?number=' + num, true); xhr.send(); }";
    html += "</script></body></html>";
    
    server.send(200, "text/html", html);

  // Create a simple HTML page with three buttons
}

// Define the handler for the "/send" path
void handleSend() {
  // Get the "number" parameter from the URL query string
  String number = server.arg("number");
  
  // Print the number to the serial monitor (you can add your custom actions here)
  Serial.print("Received number: ");
  Serial.println(number);
  
  // Respond to the client
  server.send(200, "text/plain", "Number received");
  int num = number.toInt();
   int Distance = 0;
  int Duration = 0;

  digitalWrite(TRIG, LOW);
  delay(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  Duration = pulseIn(ECHO, HIGH);

  Distance = Duration / 57.14;
  if (num == 1)
  {
    if (Distance < 10)
    {
      digitalWrite(IN_1_L, LOW);
      digitalWrite(IN_2_L, LOW);

      digitalWrite(IN_3_R, LOW);
      digitalWrite(IN_4_R, LOW);
      delay(25);
      digitalWrite(BUZZER, HIGH);
      
    }
    else
    {
    digitalWrite(BUZZER, LOW);
    digitalWrite(IN_1_L, HIGH);
    digitalWrite(IN_2_L, LOW);
    digitalWrite(IN_3_R, HIGH);
    digitalWrite(IN_4_R, LOW);
    
    delay(2000);
    
    digitalWrite(IN_1_L, HIGH);
    digitalWrite(IN_2_L, LOW);  
    digitalWrite(IN_3_R, LOW);
    digitalWrite(IN_4_R, LOW);
    
    delay(3000);

    digitalWrite(IN_1_L, HIGH);
    digitalWrite(IN_2_L, LOW);
    digitalWrite(IN_3_R, HIGH);
    digitalWrite(IN_4_R, LOW);

    delay(4000);
   
    digitalWrite(IN_1_L, HIGH);
    digitalWrite(IN_2_L, LOW);  
    digitalWrite(IN_3_R, LOW);
    digitalWrite(IN_4_R, LOW);
   
    delay(2000);
    
    digitalWrite(IN_1_L, HIGH);
    digitalWrite(IN_2_L, LOW);
    digitalWrite(IN_3_R, HIGH);
    digitalWrite(IN_4_R, LOW);
    
    delay(2000);
  
    digitalWrite(IN_1_L, LOW);
    digitalWrite(IN_2_L, LOW);
    digitalWrite(IN_3_R, LOW);
    digitalWrite(IN_4_R, LOW);
   
    delay(10000);
    server.send(200, "text/plain", "ENTERED ROOM 1");
    Serial.println("ENTERED Laboratory");
    Serial.println(Distance);
    delay(500);
    }  // go to first room
  }
  else if (num == 2)
  {
      // Tgo to second room
    digitalWrite(IN_1_L, HIGH);
    digitalWrite(IN_2_L, LOW);
    digitalWrite(IN_3_R, HIGH);
    digitalWrite(IN_4_R, LOW);
    
    delay(2000);
    
    digitalWrite(IN_1_L, HIGH);
    digitalWrite(IN_2_L, LOW);  
    digitalWrite(IN_3_R, LOW);
    digitalWrite(IN_4_R, LOW);
    
    delay(3000);

    digitalWrite(IN_1_L, HIGH);
    digitalWrite(IN_2_L, LOW);
    digitalWrite(IN_3_R, HIGH);
    digitalWrite(IN_4_R, LOW);

    delay(4000);
   
    digitalWrite(IN_1_L, LOW);
    digitalWrite(IN_2_L, LOW);  
    digitalWrite(IN_3_R, HIGH);
    digitalWrite(IN_4_R, LOW);
   
    delay(2000);
    
    digitalWrite(IN_1_L, HIGH);
    digitalWrite(IN_2_L, LOW);
    digitalWrite(IN_3_R, HIGH);
    digitalWrite(IN_4_R, LOW);
    
    delay(2000);
  
    digitalWrite(IN_1_L, LOW);
    digitalWrite(IN_2_L, LOW);
    digitalWrite(IN_3_R, LOW);
    digitalWrite(IN_4_R, LOW);
   
    delay(10000);

    server.send(200, "text/plain", "ENTERRD ROOM 2");
    Serial.println("ENTERED X-Ray Lab");
  }
    else if (num == 3)
  {
      // Tgo to second room
    digitalWrite(IN_1_L, HIGH);
    digitalWrite(IN_2_L, LOW);
    digitalWrite(IN_3_R, HIGH);
    digitalWrite(IN_4_R, LOW);
    
    delay(1000);
    
    digitalWrite(IN_1_L, HIGH);
    digitalWrite(IN_2_L, LOW);  
    digitalWrite(IN_3_R, LOW);
    digitalWrite(IN_4_R, LOW);
    
    delay(4000);

    digitalWrite(IN_1_L, HIGH);
    digitalWrite(IN_2_L, LOW);
    digitalWrite(IN_3_R, HIGH);
    digitalWrite(IN_4_R, LOW);

    delay(4000);
   
    digitalWrite(IN_1_L, LOW);
    digitalWrite(IN_2_L, LOW);
    digitalWrite(IN_3_R, LOW);
    digitalWrite(IN_4_R, LOW);
   
    delay(10000);

    server.send(200, "text/plain", "ENTERRD ROOM 2");
    Serial.println("ENTERED Pharmacy");
  }
}

void setup() {
  // Start the serial monitor
  Serial.begin(115200);

  // Connect to the Wi-Fi network
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  
  Serial.println("Connected to WiFi");
  Serial.println("IP address: " + WiFi.localIP().toString());
  
  // Set up the handlers for the web server
  server.on("/", handleRoot);
  server.on("/send", handleSend);

  // Start the web server
  server.begin();


  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);

  pinMode(IN_1_L, OUTPUT);
  pinMode(IN_2_L, OUTPUT);

  pinMode(IN_3_R, OUTPUT);
  pinMode(IN_4_R, OUTPUT);
  pinMode(BUZZER, OUTPUT);

}

void loop() {
  // Handle incoming client requests
  server.handleClient();
 
  //    int Distance = 0;
  // int Duration = 0;

  // digitalWrite(TRIG, LOW);
  // delay(2);
  // digitalWrite(TRIG, HIGH);
  // delayMicroseconds(10);
  // digitalWrite(TRIG, LOW);

  // Duration = pulseIn(ECHO, HIGH);

  // Distance = Duration / 57.14;

  // if (Distance < 10)
  //  {
  //     digitalWrite(IN_1_L, LOW);
  //     digitalWrite(IN_2_L, LOW);

  //     digitalWrite(IN_3_R, LOW);
  //     digitalWrite(IN_4_R, LOW);
  //     delay(25);
  //     digitalWrite(BUZZER, HIGH);
      
  //   }
  //   else
  //   {
  //      digitalWrite(BUZZER, LOW);
  //   }
  
  // Serial.println(Distance);
  delay(500);
}