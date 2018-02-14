#include <Keyboard.h>



#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  delay(3000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("notepad");

  delay(500);

  typeKey(KEY_RETURN);

  delay(750);

  Keyboard.print("Hello bitch!!!");

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();

  //Entry 2
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("photoshop");

  delay(500);

  typeKey(KEY_RETURN);

  delay(750);

  typeKey(KEY_RETURN);

  //entry 3
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("wordpad");

  delay(500);

  typeKey(KEY_RETURN);

  delay(750);

  Keyboard.print("You are an idiot!!!");

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();

  //entry 4
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("cmd");

  delay(500);

  typeKey(KEY_RETURN);

  delay(750);

  Keyboard.print("diskpart");

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();

  // Ending stream
  Keyboard.end();
}

void loop() {}
