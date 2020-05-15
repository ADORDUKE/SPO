#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
extern void func(const char path[]){
	if(remove(path)==0) printf("DONE\n");
	else printf("ERROR\n");
}

