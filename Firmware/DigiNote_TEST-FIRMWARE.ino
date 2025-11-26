// This is an adaptation of the example test code for the e-Ink panel rewritten for the hardware on DigiNote
// The example needs to be run on the physical prototype before other features (like: BLE connectivity, power-saving, WiFi) are intergrated.
#include <SPI.h>
#include "ER-EPM042A1-1.h"
#include "imagedata.h"
#include "epdpaint.h"


#define COLORED     0
#define UNCOLORED   1

void setup() {
  // put your setup code here, to run once:
  const int keyA = 19
  const int keyB = 20
  const int keyC = 21
  pinMode(keyA, INPUT_PULLUP);
  pinMode(keyB, INPUT_PULLUP);
  pinMode(keyC, INPUT_PULLUP);
  bool setRX(pin_size_t 11); // or setMISO()
  bool setCS(pin_size_t 9);
  bool setSCK(pin_size_t 10);
  bool setTX(pin_size_t NOPIN); // or setMOSI()
  Serial.begin(9600);
  Epd epd;

  if (epd.Init() != 0) {
    Serial.print("e-Paper init failed");
    return;
  }

  /* This clears the SRAM of the e-paper display */
 epd.ClearFrameMemory();   // bit set = white, bit reset = black

  /**
    * 1 byte = 8 pixels, therefore you have to set 8*N pixels at a time.
    */
  #if 1   
  unsigned char image[1500];

Paint paint(image, 0, 0);    //width should be the multiple of 8 
  //paint.SetRotate(ROTATE_0);
  paint.SetWidth(200);    // width should be the multiple of 8 
  paint.SetHeight(20);

  //For simplicity, the arguments are explicit numerical coordinates 
  paint.Clear(UNCOLORED);
  paint.DrawStringAt(0, 0, "Hello world!", &Font20, COLORED);
  epd.SetFrameMemoryBlack(paint.GetImage(), 60, 20, paint.GetWidth(), paint.GetHeight());

  paint.Clear(UNCOLORED);
  paint.DrawStringAt(0, 0, "buydisplay.com", &Font20, COLORED);
  epd.SetFrameMemoryRed(paint.GetImage(), 60, 50, paint.GetWidth(), paint.GetHeight());



  paint.SetWidth(64);
  paint.SetHeight(64);

  paint.Clear(UNCOLORED);
  paint.DrawRectangle(0, 0, 40, 50, COLORED);
  paint.DrawLine(0, 0, 40, 50, COLORED);
  paint.DrawLine(40, 0, 0, 50, COLORED);
  epd.SetFrameMemoryBlack(paint.GetImage(), 72, 120, paint.GetWidth(), paint.GetHeight());
  
  paint.Clear(UNCOLORED);
  paint.DrawCircle(32, 32, 30, COLORED);
  epd.SetFrameMemoryBlack(paint.GetImage(), 200, 120, paint.GetWidth(), paint.GetHeight());

  paint.Clear(COLORED);
  paint.DrawFilledRectangle(0, 0, 40, 50, UNCOLORED);
  epd.SetFrameMemoryRed(paint.GetImage(), 72, 200, paint.GetWidth(), paint.GetHeight());

  paint.Clear(COLORED);
  paint.DrawFilledCircle(32, 32, 30, UNCOLORED);
  epd.SetFrameMemoryRed(paint.GetImage(), 200, 200, paint.GetWidth(), paint.GetHeight());

  /* This displays the data from the SRAM in e-Paper module */
  epd.DisplayFrame();
 delay(2000);
 #endif  
 
 #if 0
  /* This displays an image */
  epd.SetFrameMemory(IMAGE_BLACK, IMAGE_RED);
  epd.DisplayFrame();
 delay(2000);
 #endif 

  #if 0
  epd.SetFrameMemory(IMAGE_BLACK1, IMAGE_RED1);
  epd.DisplayFrame();
 delay(2000);
 #endif 

 delay(15000);
  epd.ClearFrameMemory();
  epd.DisplayFrame(); 
  /* Deep sleep */
  epd.Sleep();
}

void loop() {
  // put your main code here, to run repeatedly:

}

