#include "arduPi.h"

/*********************************************************
 *  IF YOUR ARDUINO CODE HAS OTHER FUNCTIONS APART FROM  *
 *  setup() AND loop() YOU MUST DECLARE THEM HERE        *
 * *******************************************************/

int timer = 500;
int pins[] = { 8, 9, 10, 11, 12, 13 };
int num_pins = 6;

/**************************
 * YOUR ARDUINO CODE HERE *
 * ************************/

void setup() {
    int i;
    for (i = 0; i < num_pins; i++) pinMode(pins[i], OUTPUT);
}

void loop() {
    int i;
    for (i = 0; i < num_pins; i++) {
        digitalWrite(pins[i], HIGH);
        delay(timer);
        digitalWrite(pins[i], LOW);
    }
    for (i = num_pins - 1; i > 0; i--) {
        digitalWrite(pins[i], HIGH);
        delay(timer);
        digitalWrite(pins[i], LOW);
    }
}

int main() {

    setup();
    while (1) {
        loop();
    }
    return (0);
}
