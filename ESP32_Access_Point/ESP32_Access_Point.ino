#include <WiFi.h>
//#include <ThingsBoard.h>

#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include "webs.h"

// REPLACE WITH YOUR NETWORK CREDENTIALS
const char* ssid = "intip.in/a1233";  // Enter SSID here
const char* password = "1234567899";  //Enter Password here

const char* PARAM_INPUT_1 = "input1";
const char* PARAM_INPUT_2 = "input2";
const char* PARAM_INPUT_3 = "input3";
String inputMessage1, inputParam, inputMessage2, inputMessage3;

void notFound(AsyncWebServerRequest *request) {
  request->send(404, "text/plain", "Not found");}

AsyncWebServer server(80);

void setup() {
  Serial.begin(115200);

  WiFi.softAP(ssid, password);
  IPAddress IP = WiFi.softAPIP();
  delay(100);
  Serial.println();
  Serial.print("IP Address: ");
  Serial.println(IP);

  // Send web page with input fields to client
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/html", mainw);
  });
  server.on("/Menu_1", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/html", conf_main);
  });
  server.on("/AC_1", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/html", AC_1);
  });

//  // Send a GET request to <ESP_IP>/get?input1=<inputMessage>
//  server.on("/get", HTTP_GET, [] (AsyncWebServerRequest *request) {
//    
//    // GET input1 value on <ESP_IP>/get?input1=<inputMessage>
//    if (request->hasParam(PARAM_INPUT_1)) {
//      inputMessage = request->getParam(PARAM_INPUT_1)->value();
//      inputParam = PARAM_INPUT_1;
//    }
//    // GET input2 value on <ESP_IP>/get?input2=<inputMessage>
//    else if (request->hasParam(PARAM_INPUT_2)) {
//      inputMessage = request->getParam(PARAM_INPUT_2)->value();
//      inputParam = PARAM_INPUT_2;
//    }
//    // GET input3 value on <ESP_IP>/get?input3=<inputMessage>
//    else if (request->hasParam(PARAM_INPUT_3)) {
//      inputMessage = request->getParam(PARAM_INPUT_3)->value();
//      inputParam = PARAM_INPUT_3;
//    }
//    else {
//      inputMessage = "No message sent";
//      inputParam = "none";
//    }
//    Serial.println(inputMessage);
//    request->send(200, "text/html", "HTTP GET request sent to your ESP on input field (" + inputParam + ") with value: " + inputMessage + "<br><a href=\"/\">Return to Home Page</a>");
//  });
  server.onNotFound(notFound);
  server.begin();}

void loop() {
//  Serial.print("inputMessageloop =");
//  Serial.println(inputMessage);
//  delay(3000);
  }
