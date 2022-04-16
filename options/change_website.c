#include <stdio.h>
#include "../include/def.h"

void changeWebsite(void)
{
	printf("website:");
	writeUrl();
	getData(getUrl("./odydata/website.ini"));
	return;
}