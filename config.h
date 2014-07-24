static const char *volupcmd[]           = { "/home/jeffrey/bin/vol_up", NULL };
static const char *voldowncmd[]         = { "/home/jeffrey/bin/vol_down", NULL };
static const char *volmutecmd[]         = { "/home/jeffrey/bin/mute_toggle", NULL };

static const char *music_playpausecmd[] = { "/home/jeffrey/bin/music", "play_pause", NULL };
static const char *music_nextcmd[]      = { "/home/jeffrey/bin/music", "next", NULL };
static const char *music_prevcmd[]      = { "/home/jeffrey/bin/music", "prev", NULL };

static const char *brightnessdowncmd[]  = { "/home/jeffrey/bin/brighter", "-", NULL };
static const char *brightnessupcmd[]    = { "/home/jeffrey/bin/brighter", "+", NULL };

static Key keys[] = {
	{ 0,                                      0x1008ff13,      spawn,          {.v = volupcmd } },
	{ 0,                                      0x1008ff11,      spawn,          {.v = voldowncmd } },
	{ 0,                                      0x1008ff12,      spawn,          {.v = volmutecmd } },

	{ 0,                                      0x1008ff14,      spawn,          {.v = music_playpausecmd } },
	{ 0,                                      0x1008ff16,      spawn,          {.v = music_prevcmd } },
	{ 0,                                      0x1008ff17,      spawn,          {.v = music_nextcmd } },

	{ Mod4Mask,                               XK_Down,         spawn,          {.v = brightnessdowncmd } },
	{ Mod4Mask,                               XK_Up,           spawn,          {.v = brightnessupcmd } },
};
