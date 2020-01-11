// // 7. Write a C program to accept the height of a person in centimeter and categorize the person according to
// // their height.
// // Test Data: 135
// // Expected Output:
// // The person is Dwarf.

// giant >200
// normal >160
// dwarf<=160

#include <stdio.h>

int main()
{
    int b;
    printf("Boyunuzu giriniz: ");
    scanf("%d", &b);


    if (b > 200)
    {
        printf("The person is giant\n");
    }
    else if (b > 160)
    {
        printf("The person is normal\n");
    }
    else 
    {
        printf("The person is dwarf\n");
    }
    
}