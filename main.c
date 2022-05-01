#include <stdio.h>
#include "include/def.h"

//#include "include/debug.h"

// Odyink Client
// v0.5.0.1-Dev
// 2022-04-23 (UTC+8)

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

	cleanData();
	if (OSNUM)
		cmdRestore();
	clear();
	return 0;
}
