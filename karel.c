#include <karel.h>

void turn_right();
bool front_is_blocked();

int main() {
   turn_on("stairs1.kw");

   set_step_delay(400);

   pick_beeper();
   while (front_is_blocked()) {
      turn_left();
      step();
      turn_right();
      step();
   }

   turn_off();
}

bool front_is_blocked() {
    if (front_is_clear()) {
        return false;
    }
    return true;
    // return !front_is_clear();
}

void turn_right() {
   set_step_delay(0);
   turn_left();
   turn_left();
   set_step_delay(400);
   turn_left();
}
