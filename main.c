#include <stdio.h>
#include "include/def.h"

//#include "include/debug.h"

// Odyink Client
// v0.5-pre1
// 2022-04-17 (UTC+8)

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

	cleanData();
	if (OSNUM)
		cmdRestore();
	clear();
	return 0;
}
