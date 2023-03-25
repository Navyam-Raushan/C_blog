#include <stdio.h>

int main() {
  int characters = 0, words = 0, lines = 0;
  char ch;
  FILE *fp;

  // Open the file in read mode
  fp = fopen("file.txt", "r");

  // Check if the file was successfully opened
  if (fp == NULL) {
    printf("Error opening the file.\n");
    return 1;
  }

  // Read characters from the file one by one
  while ((ch = fgetc(fp)) != EOF) {
    characters++;
    if (ch == ' ' || ch == '\n') {
      words++;
    }
    if (ch == '\n') {
      lines++;
    }
  }

  // Close the file
  fclose(fp);

  // Print the results
  printf("Number of characters: %d\n", characters);
  printf("Number of words: %d\n", words + 1);
  printf("Number of lines: %d\n", lines + 1);

  return 0;
}