//
//  library.c
//  A6
//
//  Created by Diego Gayosso Hernandez on 10/4/24.
//

#include "library.h"
#include "slist.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void readFile(void) {

	const char *FILENAME = "NodeNames.txt";
	
	FILE* fp = fopen(FILENAME, "r");
	
	int size = 20;
	 if (fp != NULL) {  // If the file exists, read the content
		 printf("file exist");
		  char Name[size];
		  int result;

		 while ((result = fscanf(fp, "%s", Name)) != EOF) {
			  printf("Read name: %s\n", Name);
		 }

		  fclose(fp);
	 } else {  // If the file doesn't exist, try to create it
		  printf("File does not exist, attempting to create: %s\n", FILENAME);
		  fp = fopen(FILENAME, "w");

		  if (fp != NULL) {  // Check if the file was successfully created
				printf("File %s created successfully.\n", FILENAME);
				fclose(fp);
		  } else {
				printf("Error: Unable to create file %s. Please check permissions or directory.\n", FILENAME);
		  }
	 }
}

void writeFile(void) {
	 const char *FILENAME = "Champions.txt";
	 FILE* fp = fopen(FILENAME, "w");

	 //write the score to the file
	 for (int i = 0; i < 5; i++) {
		  // Checks to see if the score is valid (not -1 meaning uninitialized)
//		  if (scoreBoard[i].score != -1) {
//				fprintf(fp, "%d %s\n", scoreBoard[i].score, scoreBoard[i].playerName);
//		  }
	 }

	 fclose(fp);
}

void clearInputBuffer(void) { //from A4
	 int c;
	 while ((c = getchar()) != '\n' && c != EOF) { }
}

char toQuit(void){ //from A4
	char input;
	
	printf("To scroll through the names type\n");
	printf("f: forwards, b: backwards, q: quit, ");
	scanf("%c",&input);
	clearInputBuffer();
	return input;
}
