//
// The contents of this file are subject to the Mozilla Public License
// Version 1.0 (the "License"); you may not use this file except in
// compliance with the License. You may obtain a copy of the License
// at http://www.mozilla.org/MPL/
// 
// Software distributed under the License is distributed on an "AS IS"
// basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See
// the License for the specific language governing rights and
// limitations under the License.
//
// This software was developed as part of the legOS project.
//
// Contributor: Pat Welch (legOS@mousebrains.com)

#include <c++/Battery.H>
#include <conio.h>
#include <unistd.h>

// This program reads the sensor and displays the hex value on
/// the display every 10 ms

int 
main(int argc, 
     char **argv) 
{
  Battery b;

  while (1) {
    cputs("batt");
    sleep(1);
    lcd_int(b.get());
    sleep(1);
  }
  return 0;
}