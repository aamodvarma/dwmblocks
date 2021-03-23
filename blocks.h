//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/



	{" 💻 ", "/home/ajrv/.config/dwmblocks/scripts/memory",	        6,		            1},

	{" 🔊 ", "/home/ajrv/.config/dwmblocks/scripts/volume",			2,		            10},

	{" 🕑 ", "/home/ajrv/.config/dwmblocks/scripts/clock",			5,		            0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
