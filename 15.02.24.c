/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


bool isPrime(int x){
    if(x<2)
    {
        return false;
    }
    for (int i=2 ; i<= x/2; i++)
    {
        if(x % i == 0)
        {
        return false ;    
        }
    }
    return true;
}

int main()

{
    int x;
    scanf("%d", &x);
    
    if(isPrime(x))
    {
        printf ("The number %d is prime." , x);
    }
    else
    {
        printf("The number %d is not prime." , x);
    }
    return EXIT_SUCCESS;


    return 0;
}
