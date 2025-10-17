#include "stdio.h"
#define senpa printf("----------------------------\n");

int main(){
    int number; //int (%d), long int (%ld)
    
    senpa 
    printf("       Lucky Number\n");
    senpa
    printf("Enter lucky number\n");
    scanf("%d", &number);
    senpa
    if( number == 13){
        printf("You are correct, 13 is a Lucky number\n");
         
    }
    senpa

    return 0;
}

    