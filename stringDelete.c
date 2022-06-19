#define MAX 80
#include <stdio.h>

int main(){
	char word[MAX];
	char newWord[MAX];
	int position, k, i;
	char temp;
	printf("Type in the word and press Enter:\n");
	scanf("%s", &word);
	for(k=0; k<MAX; k++){
                     newWord[k] = word[k];
	}

	printf("Type in the position of the character to be deleted:\n");
	scanf("%d", &position);
	for(i=position-1; i<MAX; i++){
                              temp = newWord[i+1];
                              newWord[i] = temp;
}
printf("Original word = %s\n", word);
printf("Modified word = %s\n", newWord);
return 0;
}
