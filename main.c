#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]){
	if(argc < 2){
		 printf("ERROR");
		 return 1;
	}

	int len = strlen(argv[1]);
	int count = 0;

	for(int i = 0; i < len; i++){
		count++;
		printf("debug: %d\n", count);
	}
	printf("The size of your string is: %d\n", count);
	return 0;
}
