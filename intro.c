#include <stdio.h>
int main(){
    //(this is a single line comment)

    /* multiline
    comment 
    */

    printf("hello,world!\n");


    int num_var;                            //variable declaration
    num_var = 1;                            //variable initialization
    
    int num_var2 = 2; 
    
    int num_var3; 
    num_var3 = (num_var + num_var2 );      // operation on 2 int variable 
    printf("value = %d \n", num_var3);
    printf("value = %i \n", num_var3); 

    char char_var1 = 'a';
    float var3 = 12.3;
    double var4 = 32.333334;
    long var5 = 2323232323;
    
    
    return 0;
} 
