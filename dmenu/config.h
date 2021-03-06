/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Source Code Pro:size=11"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
////default
//  [SchemeNorm] = { "#bbbbbb", "#222222" },
//  [SchemeSel] = { "#eeeeee", "#005577" },
//  [SchemeOut] = { "#000000", "#00ffff" },
//
//// blue-black
//  [SchemeNorm] = { "#4fb8cc", "#000000" },
//  [SchemeSel] = { "#000000", "#4fb8cc" },
//  [SchemeOut] = { "#f32323", "#000000" },
////
// pink
  [SchemeNorm] = { "#ff8700", "#000000" },
  [SchemeSel] = { "#000000", "#ff8700" },
  [SchemeOut] = { "#f32323", "#000000" },
//
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
//static unsigned int lines      = 0;
    /* grid */
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 0;
    /* grid */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
