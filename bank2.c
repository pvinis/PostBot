#include <gb/gb.h>

#include "levelset.tiles"
#include "level_1.map"
#include "level_2.map"
#include "level_3.map"
#include "level_4.map"
#include "level_5.map"
#include "level_6.map"
#include "level_7.map"
#include "level_8.map"

int copy_map(unsigned char *dest, unsigned char *src) {
  int i, objectives = 0;
  
  for(i = 0; i < 360; i++) {
	dest[i] = src[i];
	if(src[i] == 17)
	  objectives++;
  }
  
  return objectives;
}

int show_level(unsigned char level, unsigned char *dest) {
  set_bkg_data(0, 37, levelset);
  
   switch(level) {
	 case 0:
	   return copy_map(dest, level_1);
	 case 1:
	   return copy_map(dest, level_2);
	 case 2:
	   return copy_map(dest, level_3);
	 case 3:
	   return copy_map(dest, level_4);
	 case 4:
	   return copy_map(dest, level_5);
	 case 5:
	   return copy_map(dest, level_6);
	 case 6:
	   return copy_map(dest, level_8);
	 case 7:
	   return copy_map(dest, level_7);
  }
}
