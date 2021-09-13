/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Source Code Pro:size=12"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
////default
//  [SchemeNorm] = { "#bbbbbb", "#222222" },
//  [SchemeSel] = { "#eeeeee", "#005577" },
//  [SchemeOut] = { "#000000", "#00ffff" },
//
////solarized-dark
//  [SchemeNorm] = { "#839496", "#002b36" },
//  [SchemeSel] = { "#3c3c33", "#8ec07c"},
//  [SchemeOut] = { "#000000", "#00ffff" },
//
////solarized-light
//  [SchemeNorm] = { "#657b83", "#fdf6e3" },
//  [SchemeSel] = { "#657b83", "#eee8d5"},
//  [SchemeOut] = { "#000000", "#00ffff" },
//
////gruvbox
//  [SchemeNorm] = { "#ebdbb2", "#282828" },
//  [SchemeSel] = { "#ebdbb2", "#98971a" },
//  [SchemeSel] = { "#ebdbb2", "#657b83" },
//  [SchemeOut] = { "#ebdbb2", "#8ec07c" },
//
//// red-black
//  [SchemeNorm] = { "#ffffff", "#000000" },
//  [SchemeSel] = { "#ff3344", "#000000" },
//  [SchemeOut] = { "#f32323", "#000000" },
//
// blue-black
  [SchemeNorm] = { "#4fb8cc", "#000000" },
  [SchemeSel] = { "#000000", "#4fb8cc" },
  [SchemeOut] = { "#f32323", "#000000" },
////
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
