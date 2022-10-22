#include <stdio.h>
#define STRING_SIZE 80
#define DIFERENCE 32
#define MAX_SIZE 100 // Maximum string size

int main()
{
  char str[MAX_SIZE];
  int i;

  printf("> ", str);
  gets(str);

  for(i=0; str[i] != '\0'; i++){
    if(str[i] >= 'a' && str[i] <= 'z'){
      str[i] = str[i] - DIFERENCE;
    }
  }

  printf("Uppercase string : %s",str);
  return 0;
}
