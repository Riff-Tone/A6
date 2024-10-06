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
	 const char *FILENAME = "NameList.txt";
	 FILE* fp = fopen(FILENAME, "r");

	 if (fp != NULL) {  // If the file exists
		  char Name[20];

		  while (fgets(Name, sizeof(Name), fp) != NULL) {
			  Name[strcspn(Name, "\n")] = '\0';
			  insert(Name);
		  }

		  fclose(fp);
	 } else {  // If the file doesn't exist, create it
		  fp = fopen(FILENAME, "w");
		  fclose(fp);
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
