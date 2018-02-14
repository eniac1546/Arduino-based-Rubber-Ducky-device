#include <Keyboard.h>

#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(10);
  Keyboard.release(key);
}

/* Init function */
void setup()
{

  int i,n=5notepad
  Hello World!!!
  0;
  // Begining the Keyboard stream
  for(i=0;i<n;i++)
  {
  Keyboard.begin();

  // Wait 500ms
  delay(50);

  delay(30);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(50);

  Keyboard.print("notepad");

  delay(30);

  typeKey(KEY_RETURN);

  delay(30);

  Keyboard.print("Hello World!!!");

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
  }
}

/* Unused endless loop */
void loop() {}
