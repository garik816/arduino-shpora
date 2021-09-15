static unsigned long timer = millis();

if (millis() - timer > 3000) {
timer = millis();
myDFPlayer.next();  //Play next mp3 every 3 second.
}
