#include <stdio.h>
#include <stdlib.h>
void sub(char* line, char a ,char b){
        while(*line!='\0'){
                if(*line== a){
                        *line=b;
                }
                line++;
        }
}
int main(){
        char input[100];
        char l1;
        char l2;
        fgets(input,100,stdin);
	
	scanf("%c %c",&l1,&l2);

        sub(input,l1,l2);
        printf("%s\n",input);
}

