#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char **str = malloc (107 * sizeof(char*));
  int i;
  int j = 0;
  
  for (i = 0; i < 107; i++){
    str[i] = (char*) malloc (sizeof(char*));
  }
  for (i = 8; i <= 114; i++){
    sprintf(str[j], "xmodmap -e 'keycode %d=%d'", i, i + 50);
    j++;	
  }

  for (i = 0; i < 107; i++){
    system (str[i]);
  }
  return 0;
}
