#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr=fopen("1007in.txt","r");
	FILE *fptr1=fopen("1007out.txt","w");
	char a;
	if(fptr==NULL){
		printf("Error\n");
	}
	else{
		do{
			a=fgetc(fptr);
			if(a=='!'||a=='?'||a=='.'){
				a='\n';
				printf("%c",a);
				fputc(a,fptr1);
			}
			else{
				printf("%c",a);
				fputc(a,fptr1);
			}
		}while(a!=EOF);
	}
	fclose(fptr);
	fclose(fptr1);
	return 0;
 } 
