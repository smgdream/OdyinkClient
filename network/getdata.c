#include <stdio.h>
#include "../include/def.h"

int getData(const char *url)
{
	char tmpstr[300];
	unsigned int sign = 0;

	clear();
	cleanData();
	printf("Getting data...\n");
	sprintf(tmpstr, "%s/%s", url, "docindex.ini");
	if (sign || webGet(tmpstr, "./odydata/"))
		sign = 1;
	sprintf(tmpstr, "%s/%s", url, "doctype.ini");
	if (sign || webGet(tmpstr, "./odydata/"))
		sign = 1;
	sprintf(tmpstr, "%s/%s", url, "docnum.ini");
	if (sign || webGet(tmpstr, "./odydata/"))
		sign = 1;
	if (sign) {
		fprintf(stderr, "Network error!\n");
		genSleep(2);
		clear();
		return 1;
	}
	return 0;
}