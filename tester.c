#include <string.h>
#include <stdio.h>

int main() {

  char example1[20] = "example of strcpy";
  char example2[20] = "example of strncpy";

  strcpy (example1, "example of strcpy");

  printf("%s\n", example1);

  strncpy (example2, "example of strncpy", 6);
    
  printf("%s\n", example2);
    
  return 0;
}
