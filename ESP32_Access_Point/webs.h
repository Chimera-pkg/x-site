//const char index_html[] PROGMEM = R"rawliteral(
//<!DOCTYPE HTML><html><head>
//  <title>ESP Input Form</title>
//  <meta name="viewport" content="width=device-width, initial-scale=1">
//  </head><body>
//  <form action="/get">
//    input1: <input type="text" name="input1">
//    <input type="submit" value="Submit">
//  </form><br>
//  <form action="/get">
//    input2: <input type="text" name="input2">
//    <input type="submit" value="Submit">
//  </form><br>
//  <form action="/get">
//    input3: <input type="text" name="input3">
//    <input type="submit" value="Submit">
//  </form>
//</body></html>)rawliteral";

const char mainw[] PROGMEM = R"rawliteral(
<!DOCTYPE HTML><html><head>
  <title>Main Page</title>
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel=\"icon\" href=\"data:,\">
  <style>html { font-family: Helvetica; display: inline-block; margin: 0px auto; text-align: center;}
  .button { background-color: #4CAF50; border: none; color: white; padding: 16px 40px;
  text-decoration: none; font-size: 30px; margin: 2px; cursor: pointer;}");
  .button2 {background-color: #555555;}</style>
  </head><body>
  <h1>ESP32 Web Server</h1>
  <p><a href="/Menu_1"><button class="button">IR Configure</button></a></p>
  <p><a href="/Menu_2"><button class="button">IR Control</button></a></p>
  <p><a href="/Menu_3"><button class="button">Attribute</button></a></p>
  <p><a href="/Menu_4"><button class="button">Reset</button></a></p>
</body></html>)rawliteral";

const char conf_main[] PROGMEM = R"rawliteral(
<!DOCTYPE HTML><html><head>
  <title>IR Configure</title>
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel=\"icon\" href=\"data:,\">
  <style>html { font-family: Helvetica; display: inline-block; margin: 0px auto; text-align: center;}
  .button { background-color: #4CAF50; border: none; color: white; padding: 16px 40px;
  text-decoration: none; font-size: 30px; margin: 2px; cursor: pointer;}");
  .button2 {background-color: #555555;}</style>
  </head><body>
  <h1>ESP32 Web Server</h1>
  <p><a href="/AC_1"><button class="button">AC 1</button></a></p>
  <p><a href="/AC_2"><button class="button">AC 2</button></a></p>
</body></html>)rawliteral";

const char AC_1[] PROGMEM = R"rawliteral(
<!DOCTYPE HTML><html><head>
  <title>IR Configure</title>
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel=\"icon\" href=\"data:,\">
  <style>html { font-family: Helvetica; display: inline-block; margin: 0px auto; text-align: center;}
  .button { background-color: #4CAF50; border: none; color: white; padding: 16px 40px;
  text-decoration: none; font-size: 30px; margin: 2px; cursor: pointer;}");
  .button2 {background-color: #555555;}</style>
  </head><body>
  <h1>ESP32 Web Server</h1>
  <p><a href="/On"><button class="button">ON</button></a></p>
  <p><a href="/Off"><button class="button">OFF</button></a></p>
  <p><a href="/Suhu_16"><button class="button">16°C</button></a></p>
</body></html>)rawliteral";

const char pop_conf[] PROGMEM = R"rawliteral(
<!DOCTYPE HTML><html><head>
  <title>IR Configure</title>
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel=\"icon\" href=\"data:,\">
  <style>html { font-family: Helvetica; display: inline-block; margin: 0px auto; text-align: center;}
  .button { background-color: #4CAF50; border: none; color: white; padding: 16px 40px;
  text-decoration: none; font-size: 30px; margin: 2px; cursor: pointer;}");
  .button2 {background-color: #555555;}</style>
  </head><body>
  <h1>ESP32 Web Server</h1>
  <p><a href="/On"><button class="button">ON</button></a></p>
  <p><a href="/Off"><button class="button">OFF</button></a></p>
  <p><a href="/Suhu_16"><button class="button">16°C</button></a></p>
</body></html>)rawliteral";
