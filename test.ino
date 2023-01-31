#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <gfxfont.h>



#define TFT_CS  9
#define TFT_RST 12
#define TFT_DC  8
#define SCREEN_DI 128;

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  // put your setup code here, to run once:
  tft.initR(INITR_BLACKTAB);

  tft.fillScreen(ST7735_BLACK);

  tft.setCursor(0, 0);
  tft.setTextColor(ST7735_WHITE);
  tft.setTextSize(3);
  tft.println("Hello");

  tft.setFont();

  tft.setTextSize(0);

  tft.setCursor(0, 50);
  tft.setTextColor(ST7735_RED);
  tft.println("World!");

  tft.setFont();
}
