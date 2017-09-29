#include <string.h>
#include <stdio.h>

int main() {

  char example1[20];

  strcpy (example1, "example of strcpy");

  printf("%s\n", example1);

  char example2[20];

  strncpy (example2, "example of strncpy", 10);
    
  printf("%s\n", example2);
    
  return 0;
}
