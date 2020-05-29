/* ::::::::::::::::::::::::::::::::::::: Balanced array ::::::::::::::::::::::::::::::::::::::: */
/*                           ALL TH ELIMENT OF A BALANCED ARRAY ARE DISTINC                     */
/*                             SUM OF FIRST HALF EQUAL TO THE SECOND HALF                       */
/*                               THE FIRST n/2 ELIMENTS OF ARRAY ARE EVEN                       */
/*                               THE SECOND N/2 ELIMENTS OF ARRAY ARE ODD                       */
/*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
#include<stdio.h>
#include<stdlib.h>
void balance(int *, int ) ;
int main()
{
    int n,half;
    scanf("%d",&n); // taking the length of an ARRAY
    half =n/2 ;
    /* cheaking the length of an ARRAY is valid or not for the balanced array*/
    if(n ==2 | n%2 !=0 | half%2 != 0 ) 
    {
        printf("NO");
        exit(1);
    }
    int Balanced_array[n];
    printf("YES\n");
    balance(Balanced_array,n);
    for(int i=0;i<n;i++) // printing the ARRAY 
    {
        printf("%d ",Balanced_array[i]);
    }
    return 0 ;
}
void balance(int *arr,int value)
{
    int odd_half ,half, INDEX=0;
    half = value/2;
    /* storing the positive intiger in array */
    for(int i =1;i<=value/2;i++)
    {
        arr[INDEX] =2*(i);
        INDEX++;
    }
    odd_half = (1+half+1)/2; 
    for(int i =0;i<=(value/2);i++)
    {
         if( i != odd_half-1)
         {
         arr[INDEX] = 2*(i+1)-1 ;
         INDEX++;
         }
    }
}