#define CMDLENGTH 45
#define DELIMITER " | "
#define LEADING_DELIMITER
#define CLICKABLE_BLOCKS

const Block blocks[] = {
	BLOCK("cpubars",  2,   1),
	BLOCK("memory",   2,   2),
	BLOCK("battery",  5,   3),
	BLOCK("internet", 5,   4),
	BLOCK("volume",   0,   5),
	BLOCK("clock",    60,  6),
};
