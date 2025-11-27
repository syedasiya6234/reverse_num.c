#include <stdio.h>
#include <stdlib.h>
void printnum(int lower, int upper);
int main()
{
    int lower,upper;
    printf("Enter lower and upper values:");
    scanf("%d %d", &lower, &upper);
    printnum(lower, upper);
    return 0;
}
    void printnum(int lower,int upper)
{
    printf("%d",lower);   
    lower++;                
    if (lower>upper)     
    exit(0);
    printnum(lower,upper); 
}