  1 #include <karel.h>
  2 
  3 
  4 bool front_is_blocked();
  5 
  6 int main() {
  7    turn_on("stairs1.kw");
  8       
  9 sa]]
 10 
 11 ····
 12    
 13    pick_beeper();
 14    while (front_is_blocked()) {
 15       turn_left();
 16       step();
 17       turn_right();
 18       step();
 19    }
 20    
 21    turn_off();
 22 }
<c[+] [FORMAT=unix] [TYPE=C] [ASCII=000] [HEX=00] [POS=0011,0005] [28%] [LEN=38]
-- INSERT --
