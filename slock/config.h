/* user and group to drop privileges to */
static const char *user  = "hos";
static const char *group = "hos";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#131313",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
