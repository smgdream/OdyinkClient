#include <stdio.h>
#include "../include/def.h"

int getData(const char *url)
{
    char tmpstr[300];

	if (fexist("./odydata/docindex.ini"))
		remove("./odydata/docindex.ini");
	if (fexist("./odydata/doctype.ini"))
		remove("./odydata/doctype.ini");
	if (fexist("./odydata/docnum.ini"))
		remove("./odydata/docnum.ini");
		
	//
    sprintf(tmpstr, "%s/%s", url, "docindex.ini");
    if (webGet(tmpstr, "./odydata/"))
        return 1;
    sprintf(tmpstr, "%s/%s", url, "doctype.ini");
    if (webGet(tmpstr, "./odydata/"))
        return 1;
    sprintf(tmpstr, "%s/%s", url, "docnum.ini");
    if (webGet(tmpstr, "./odydata/"))
        return 1;
    return 0;
}