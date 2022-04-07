#include<stdio.h>
#include<time.h>
#include<conio.h>
#include <stdlib.h>
int main(){
	
    while(1){
    	time_t t;  
    	time(&t);
		system("CLS");
		printf("=====Digital Clock=======");
		printf("\n %s", ctime(&t));
		printf("=========================");
		sleep(1);
	}
}
