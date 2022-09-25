#include<stdio.h>

const int MAX =4;
int main() 
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    int var[] = {100, 200, 300, 19102079};
    int i, *ptr;
    ptr = var;

    for(i=0; i<MAX; i++){
        printf("\n\n\nAddress of var[%d] = %p ", i, ptr);
        printf("\nValue of var[%d] = %d ", i, *ptr);
        
        ptr++;
        
        }
    
    printf("\n\n\t\t\tCdoing is Fun !\n\n\n");
    return 0;
}