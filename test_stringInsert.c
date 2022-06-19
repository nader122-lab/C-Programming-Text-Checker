#define MAX 100
#include <stdio.h>
void stringInsert(char str[], char c, int position);
int main(){
           char str[MAX];
           char c;
           int position, a; 
           printf("please enter a string: \n");
           scanf("%s", &str);
           printf("please enter a character you would like to input: \n");
           scanf("%s", &c);
           printf("please enter the position in the string you would like to place the character: \n"); 
           scanf("%d", &position);
           stringInsert(str, c, position);
return 0;
}

void stringInsert(char str[], char c, int position){
           str[position-1] = c;
           printf("%s\n", str);
}
