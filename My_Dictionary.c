#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "dict.h"
#include "store.h"
#include "search.h"
#include "print.h"  
                             
int main(){
	harr *source = store();
	printf("Enter word to find meaning\n");
	char word[15];
	while(scanf("%s", word) != -1){
		dict *head = search(source, word);
		if (head == NULL)
			printf("Word not found\n\n\n");
		else
			print(head);
	}
	return 0;
}		
