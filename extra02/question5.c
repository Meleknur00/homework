// 5. Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her
// own vote.
// Test Data: 21
// Expected Output:
// Congratulation! You are eligible for casting your vote.


#include <stdio.h>

int main()
{
    int d;
    printf("Enter your age: ");
    scanf("%d",&d);

    if (d > 18)
    {
        printf("Congratulation! You are eligible for casting your vote.\n");    
    } 
    else 
    {
        printf("SORRY YOU ARE NOT ELIGIBLE FOR CASTING YOUR VOTE.\n");
    }
}