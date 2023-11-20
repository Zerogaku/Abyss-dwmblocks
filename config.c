#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
    {"cat /tmp/recordingicon 2>/dev/null",	0,	1},
    {"sb-music",   18000,    2 },
    /*{"sb-disk",    1800, 3 },*/
    /*{"sb-memory",  10,   4 },*/
    /*{"sb-news", 0,    5 },*/
    /*{"sb-forecast",     18000,    6 },*/
    /*{"sb-nettraf",  1,    7 },*/
    {"sb-volume",  18000,    8 },
    {"sb-battery", 5,    9 },
    {"sb-clock",    1,    10},
    {"sb-internet",    1,    11},
    /*{"sb-help-icon",    0,    12},*/
};

const unsigned short blockCount = LEN(blocks);

