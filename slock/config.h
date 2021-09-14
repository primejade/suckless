/* user and group to drop privileges to */
static const char *user  = "hos";
static const char *group = "hos";

static const char *colorname[NUMCOLS] = {
	[INIT]   =  "#171717",    /* after initialization */
	[INPUT]  =  "#0059aa",    /* during input */
	[FAILED] =  "#f32323",    /* wrong password */
	[CAPS]   =  "#ff5500",    /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Please don't play with the keyboard";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "-misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-ascii-0";
