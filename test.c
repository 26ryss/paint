#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  FILE *fp;
  char buf[1000];
  char *b = strtok(NULL, " ");
  if (b == NULL){
      fp = fopen("history.txt", "r");
  } else {
      fp = fopen(b, "r");
  }

  if (fp == NULL) {
      printf("Failed to open the file.\n");
      return 0;
  }

  while (fgets(buf, 1000, fp) != NULL) {
      printf("%s", buf);
  }

  fclose(fp);

  return 0;
}