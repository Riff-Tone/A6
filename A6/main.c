//
//  main.c
//  A6
//
//  Created by Diego Gayosso Hernandez on 10/4/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"
#include "slist.h"


char* selector(char *input){
	switch (*input) {
		case 'f':
			return pop_front();
		case 'b':
			return pop_back();
		default:
			printf("Invalid input, please choose the appropritate input \n");
			break;
	}
	return "";
}


int main(int argc, const char * argv[]) {
	
	char quit = toQuit();
	readFile();
	
	while(quit != 'q'){
		
		printf("%s\n", selector(&quit));
		quit = toQuit();
	}
	printf("Thanks for playing! \n");
	
	return 0;
}
