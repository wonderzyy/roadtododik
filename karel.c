 15       turn_right();
 16       step();
 17    }
 18 
 19    turn_off();
 20 }
 21 
 22 bool front_is_blocked() {
 23     if (front_is_clear()) {
 24         return false;
 25     }
 26     return true;
 27     // return !front_is_clear();
 28 }
 29 
 30 void turn_right() {
 31    set_step_delay(0);
 32    turn_left();
 33    turn_left();
 34    set_step_delay(400);
 35    turn_left();
 36 }
<[+] [FORMAT=unix] [TYPE=C] [ASCII=125] [HEX=7D] [POS=0036,0001] [100%] [LEN=36]

