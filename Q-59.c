//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/

#include <stdio.h>
int main()
{
    int n, i, even_count = 0, odd_count = 0;
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }
    
    printf("Even=%d, Odd=%d\n", even_count, odd_count);
    return 0;
}