/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};

static const char black[] = "#000000";
static const char light_blue[] = "#4682ff";
static const char light_purple[] = "#8644ff";
static const char dark_purple[] = "#1e172a";
static const char grey[] = "#121212";

static const char *prompt      = ">>>";      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[ SchemeNorm          ] = { light_blue,   black        },
	[ SchemeSel           ] = { black,        light_blue   },
	[ SchemePrompt        ] = { black,        light_purple },
	[ SchemeInput         ] = { light_purple, black        },
	[ SchemeSidebar       ] = { dark_purple,  dark_purple  },
	[ SchemeBackground    ] = { grey,         grey         },
	[ SchemeNormHighlight ] = { light_purple, black        },
	[ SchemeSelHighlight  ] = { black,        light_purple },
	[ SchemeBorders       ] = { dark_purple,  dark_purple  },
	[ SchemeOut           ] = { "#FF0000", "#FF0000" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 30;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 3;


static int min_width = 800;
