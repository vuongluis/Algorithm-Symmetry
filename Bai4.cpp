#include <stdio.h>
#include <conio.h>
#include <string.h>
int isDoiXung(int n);
int main(){
	int n,i;
	printf("Nhap so n: "); scanf("%d",&n);
	i = 100;
	do{
		if(isDoiXung(i)==1){
			printf("%d ",i);
		}
		i++;
	}while(i < n);
}
int isDoiXung(int n){
	int result = 1;
	char str[15];
	sprintf(str,"%d",n);
	int len = strlen(str);
	if(len%2 != 0){
		for(int i = 0;i < len/2; i++){
			if(str[i] != str[len-i-1]){
				result = 0;
			}
		}	
	}
	return result;
}
