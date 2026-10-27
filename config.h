const unsigned int interval = 5000;
static const char unknown_str[] = "n/a";

#define MAXLEN 2048

static const struct arg args[] = {
	{ cpu_perc, "[cpu %s%] ", NULL },
	{ ram_perc, "[ram %s%] ", NULL },
	{ battery_perc, "[bat %s%] ", "BAT0" },
	{ datetime, "[%s]", "%F %H:%M" },
};
