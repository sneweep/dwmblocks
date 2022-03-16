//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/suckless/dwmblocks/statusbar/sb-volume",     0,     10},

	{"", "~/suckless/dwmblocks/statusbar/sb-cpu",        10,    0},

	{"", "~/suckless/dwmblocks/statusbar/sb-battery",    10,    0},

	{"", "~/suckless/dwmblocks/statusbar/sb-weather",    600,	0},

	{"", "~/suckless/dwmblocks/statusbar/sb-date",       5,     0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
