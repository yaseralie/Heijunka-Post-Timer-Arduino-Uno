#include <Wire.h>
#include <ds3231.h>

//untuk 7 segment---------------------------------------------
#include <TM1637Display.h>
// Define the connections pins
#define CLK 2
#define DIO 3
// Create a display object of type TM1637Display
TM1637Display display = TM1637Display(CLK, DIO);

// Create an array that turns all segments ON
const uint8_t allON[] = {0xff, 0xff, 0xff, 0xff};

// Create an array that turns all segments OFF
const uint8_t allOFF[] = {0x00, 0x00, 0x00, 0x00};
//untuk 7 segment---------------------------------------------

struct ts t;

const int BUTTON1_PIN = 10; // Arduino pin connected to button's pin
const int BUTTON2_PIN = 11; // Arduino pin connected to button's pin
const int RELAY1_PIN  = 8; // Arduino pin connected to relay's pin
const int RELAY2_PIN  = 9; // Arduino pin connected to relay's pin

// Declare variable global
String sekarang;
String jam1;
String jam2;
String jam3;
String jam4;
String jam5;
String jam6;
String jam7;
String jam8;
String jam9;
String jam10;

String jam11;
String jam12;
String jam13;
String jam14;
String jam15;
String jam16;
String jam17;
String jam18;
String jam19;
String jam20;

String jam21;
String jam22;
String jam23;
String jam24;
String jam25;
String jam26;
String jam27;
String jam28;
String jam29;
String jam30;

String jam31;
String jam32;
String jam33;
String jam34;
String jam35;
String jam36;
String jam37;
String jam38;
String jam39;
String jam40;

String jam41;
String jam42;


void setup() {
  //setup untuk 7 segment----------------------------------
  // Set the brightness to 5 (0=dimmest 7=brightest)
  display.setBrightness(5);
  // Set all segments ON
  display.setSegments(allON);
  //setup untuk 7 segment----------------------------------

  Serial.begin(9600);
  Wire.begin();
  DS3231_init(DS3231_CONTROL_INTCN);

  // Register relay (output)
  pinMode(BUTTON1_PIN, INPUT_PULLUP); // set arduino pin to input pull-up mode (ground)
  pinMode(BUTTON2_PIN, INPUT_PULLUP); // set arduino pin to input pull-up mode (ground)
  pinMode(RELAY1_PIN, OUTPUT);        // set arduino pin to output mode
  pinMode(RELAY2_PIN, OUTPUT);        // set arduino pin to output mode

  //declare timing
  jam1 = "7:0:0";
  jam2 = "7:20:0";
  jam3 = "7:40:0";
  jam4 = "8:00:0";
  jam5 = "8:20:0";
  jam6 = "8:40:0";
  jam7 = "9:00:0";
  jam8 = "9:20:0";
  jam9 = "9:40:0";
  jam10 = "10:00:0";

  jam11 = "10:20:0";
  jam12 = "10:40:0";
  jam13 = "11:00:0";
  jam14 = "11:20:0";
  jam15 = "11:40:0";
  jam16 = "12:00:0";
  jam17 = "12:20:0";
  jam18 = "12:40:0";
  jam19 = "13:00:0";
  jam20 = "14:20:0";

  jam21 = "14:40:0";
  jam22 = "15:00:0";
  jam23 = "15:20:0";
  jam24 = "15:40:0";
  jam25 = "16:00:0";
  jam26 = "16:20:0";
  jam27 = "16:40:0";
  jam28 = "17:0:0";
  jam29 = "17:20:0";
  jam30 = "17:40:0";

  jam31 = "18:0:0";
  jam32 = "18:20:0";
  jam33 = "18:40:0";
  jam34 = "19:00:0";
  jam35 = "19:20:0";
  jam36 = "19:40:0";
  jam37 = "20:0:0";
  jam38 = "20:20:0";
  jam39 = "20:40:0";
  jam40 = "21:0:0";

  jam41 = "21:20:0";
  jam42 = "21:40:0";

  delay(1000);
  //Matikan semua relay
  digitalWrite(RELAY1_PIN, HIGH);
  digitalWrite(RELAY2_PIN, HIGH);
}

void loop() {
  DS3231_get(&t);
  sekarang = String(t.hour) + ":" +  String(t.min) + ":" + String(t.sec) ;
  Serial.println(sekarang);

  //Untuk mematikan lampu===========================================================================
  int buttonState1 = digitalRead(BUTTON1_PIN); // read new state
  int buttonState2 = digitalRead(BUTTON2_PIN); // read new state
  if (buttonState1 == LOW) {
    Serial.println("The button is being pressed");
    digitalWrite(RELAY1_PIN, HIGH); // turn off
  }

  if (buttonState2 == LOW) {
    Serial.println("The button is being pressed");
    digitalWrite(RELAY2_PIN, HIGH); // turn off
  }
  //Untuk mematikan lampu===========================================================================
  //Untuk menyalakan lampu********************************************
  //1-10
  if ((sekarang == jam1) or (sekarang == jam2) or (sekarang == jam3) or (sekarang == jam4) or (sekarang == jam5) or (sekarang == jam6) or (sekarang == jam7) or (sekarang == jam8) or (sekarang == jam9) or (sekarang == jam10)) {
    digitalWrite(RELAY1_PIN, LOW); // turn on
    digitalWrite(RELAY2_PIN, LOW); // turn on
  }
  //11-20
  if ((sekarang == jam11) or (sekarang == jam12) or (sekarang == jam13) or (sekarang == jam14) or (sekarang == jam15) or (sekarang == jam16) or (sekarang == jam17) or (sekarang == jam18) or (sekarang == jam19) or (sekarang == jam20)) {
    digitalWrite(RELAY1_PIN, LOW); // turn on
    digitalWrite(RELAY2_PIN, LOW); // turn on
  }
  //21-30
  if ((sekarang == jam21) or (sekarang == jam22) or (sekarang == jam23) or (sekarang == jam24) or (sekarang == jam25) or (sekarang == jam26) or (sekarang == jam27) or (sekarang == jam28) or (sekarang == jam29) or (sekarang == jam30)) {
    digitalWrite(RELAY1_PIN, LOW); // turn on
    digitalWrite(RELAY2_PIN, LOW); // turn on
  }
  //31-40
  if ((sekarang == jam31) or (sekarang == jam32) or (sekarang == jam33) or (sekarang == jam34) or (sekarang == jam35) or (sekarang == jam36) or (sekarang == jam37) or (sekarang == jam38) or (sekarang == jam39) or (sekarang == jam40)) {
    digitalWrite(RELAY1_PIN, LOW); // turn on
    digitalWrite(RELAY2_PIN, LOW); // turn on
  }
  //41-42
  if ((sekarang == jam41) or (sekarang == jam42)) {
    digitalWrite(RELAY1_PIN, LOW); // turn on
    digitalWrite(RELAY2_PIN, LOW); // turn on
  }
  //Untuk menyalakan lampu********************************************

  //untuk display time di 7 segement++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  // Get current date and time:
  //DateTime now = t.now();
  // Create time format to display:
  int displaytime = (t.hour * 100) + t.min;
  //jika genap maka ada center colon, untuk tanda kedip second
  if ( (t.sec % 2) == 0) {
    // Display the current time in 24 hour format with leading zeros enabled and a center colon:
    display.showNumberDecEx(displaytime, 0b11100000, true);
  }
  else {
    display.showNumberDec(displaytime, true); // Prints displaytime without center colon.
  }
  //untuk display time di 7 segement++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  delay(500);
}
