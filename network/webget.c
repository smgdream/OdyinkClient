#include <stdio.h>
#include <stdlib.h>

int webGet(const char *url, const char *savePath)
{
    char tmpstr[600];
    sprintf(tmpstr, "wget -q -t 3 -P %s \"%s\"", savePath, url);
    return system(tmpstr);
}