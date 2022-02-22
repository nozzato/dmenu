/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;			/* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=13"
};
static const char *prompt = NULL;	/* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][3] = {
	/* fg		bg */
//	[SchemeNorm]	= { "#bbbbbb", "#222222" },
//	[SchemeSel]	= { "#eeeeee", "#005577" },
//	[SchemeOut]	= { "#000000", "#00ffff" },

	/* monokai */
	[SchemeNorm]	= { "#f9f8f5", "#272822" },
	[SchemeSel]	= { "#f9f8f5", "#f92672" },
	[SchemeOut]	= { "#f9f8f5", "#a1efe4" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
