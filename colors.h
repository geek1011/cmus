#ifndef CMUS_COLOR_H
#define CMUS_COLOR_H

enum { CURSED_XTERM256_N = 256 };

struct cursed_xterm256_palette_entry {
	short r;
	short g;
	short b;
	const char *n;
};

extern struct cursed_xterm256_palette_entry cursed_xterm256_palette[CURSED_XTERM256_N];

#endif
