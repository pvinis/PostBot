void init_title() {
  int i;
  
  set_bkg_data(0, 138, title_sprites);
  set_bkg_tiles(0, 0, 20, 18, title);
  
  waitpad(255);
  
  for(i =0; i < 360; i++)
	title[i] = 0;
  
  set_bkg_tiles(0, 0, 20, 18, title);
  printf(" \n press select in\n level to program\n robot\n\n");
  printf(" press a in level\n to run program\n\n");
  printf(" press b to abort\n or return\n\n");
  printf(" press start\n");
  
  waitpad(255);
}
