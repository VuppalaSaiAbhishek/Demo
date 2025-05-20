/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Write a program to find maximum and minimum in an Array.

#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int Arr[9];
    float l = -INFINITY ;
    float s = INFINITY ;
    for(int i=0;i<sizeof(Arr)/sizeof(Arr[0]);i++){
        scanf("%d",&Arr[i]);
    }
    for(int i=0;i<sizeof(Arr)/sizeof(Arr[0]);i++){
        if(Arr[i]>l){
            l = Arr[i];
        }
        if(Arr[i]<s && Arr[i]<=l){
            s = Arr[i];
        }
    };
    int lon = (int)l;
    int smal = (int)s;
    printf("%d %d",lon,smal);
}