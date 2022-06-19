#include <stdio.h>
#define CAP 100

int main() 
{

  char text;
  int spaceCount = 0;
  int capitalCount = 0;
  int newLineCount = 0;
  int i;
  printf("Enter your text, press ctrl-D when you are finished:\n");
  do
  {
   text = getchar();
   if(text==' ')
   {
    spaceCount++;
   }
   if(text=='\n')
   {
    newLineCount++;
   }
   if(text>64 && text<91)
   {
    capitalCount++;
   }
   }while(text!=EOF);
  
  printf("spaceCount = %i\n", spaceCount);
  printf("newLineCount = %i\n", newLineCount);
  printf("capitalCount = %i\n", capitalCount);  
  return 0;
}

