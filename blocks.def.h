//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"cpubars",	2,	1},
	{"",	"memory",	2,	2},
	{"",	"battery",	5,	3},
	{"",	"internet",	5,	4},
	{"",	"volume",	0,	5},
	{"",	"clock",	60,	6},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " | ";
