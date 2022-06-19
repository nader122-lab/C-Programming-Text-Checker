#include <stdio.h>

int main()
{
int count = 0;
char word[5];
printf("Enter a 5 letter word:\n");
while (count<5){
word[count] = getchar();
count++;
}
if(word[0]==word[4] && word[1]==word[3])
{
printf("this word is a palindrome\n");
}
else
{
printf("this word is not a palindrome\n");
}
return 0;
}



