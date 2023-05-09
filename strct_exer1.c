#include <stdio.h>

#ifndef USER_COM_ENA
        #define USER_COM_ENA
#endif


#include "exer_com.h"

int main(int argv, char *argc[])
{
	ST_EXER	st_val = { 1, 2, 'Good morning!'};
	ST_EXER *st_val_p = &st_val;
	printf("*** Init ****\n");

	printf("struct from=%d\n", st_val_p->from);
	printf("struct to=%d\n", st_val.to);
	printf("struct msg[0]=%c\n",

	return 0;
}


