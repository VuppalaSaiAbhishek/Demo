/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Write a program to compare two strings without using inbuild function.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool compare(char a[],char b[]){
    if(strlen(a)!=strlen(b)){
        return false;
    }
    for(int i=0;i<sizeof(a);i++){
        if(a[i]!=b[i]){
            return false;   
        }
    }
    return true;
}
int main(){
    char a[100];
    char b[100];
    scanf("%s",&a);
    scanf("%s",&b);
    if(compare(a,b)){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    
}