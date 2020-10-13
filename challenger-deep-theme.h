static const char *colorname[] = {
    /* 8 normal colors */
    "#100e23",
    "#ff8080",
    "#95ffa4",
    "#ffe9aa",
    "#91ddff",
    "#c991e1",
    "#aaffe4",
    "#cbe3e7",

    /* 8 bright colors */
    "#565575",
    "#ff5458",
    "#62d196",
    "#ffb378",
    "#65b2ff",
    "#906cff",
    "#63f2f1",
    "#a6b3cc",

    [255] = 0,

    /* more colors can be added after 255 to use with DefaultXX */
    "#1b182c",
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultbg = 256;
unsigned int defaultfg = 7;
static unsigned int defaultcs = 6;
static unsigned int defaultrcs = 1;
