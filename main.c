#include <stdio.h>
#include "include/def.h"

//#include "include/debug.h"

// Odyink Client
// v0.5-pre1
// 2022-04-16 (UTC+8)

int main()
{
	if (OSNUM)
		cmdInit();
	clear();

	if (!fexist("./odydata/website.ini"))
		install();
	clear();

	if (!getData(getUrl("./odydata/website.ini")))
		docIndex();
	else {
		printf("Network error!\n");
		genSleep(2);
	}

	if (fexist("./odydata/docindex.ini"))
		remove("./odydata/docindex.ini");
	if (fexist("./odydata/doctype.ini"))
		remove("./odydata/doctype.ini");
	if (fexist("./odydata/docnum.ini"))
		remove("./odydata/docnum.ini");
	if (OSNUM)
		cmdRestore();
	clear();
	return 0;
}
