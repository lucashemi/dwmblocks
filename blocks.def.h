//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "forecast",	18000,	5},
	{"", "volume",		0,	10},
	{"", "cpu",		10,	18},
	/*{"", "battery",		5,	3},*/
	{"", "internet",		5,	4},
	{"", "kbselect",	0,	30},
	{"", "clock",	60,	1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "";
static unsigned int delimLen = 5;
