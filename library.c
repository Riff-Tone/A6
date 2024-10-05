//
//  library.c
//  A6
//
//  Created by Diego Gayosso Hernandez on 10/4/24.
//

#include "library.h"

void readFile(int size) {
	 // Define the file path
	 const char *FILENAME = "file.txt";
	 FILE* fp = fopen(FILENAME, "r");

	 if (fp != NULL) {  // If the file exists
		  char Name[size];
		  int Score;

		  while (fscanf(fp, "%d %s", &Score, Name) != EOF) { //rewrite this to work with what you have
			  printf("");
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
	printf("Welcome! Press 'q' to quit or any other key to continue: ");
	scanf("%c",&input);
	clearInputBuffer();
	return input;
}
