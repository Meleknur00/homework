// 10. Write a C program to find the eligibility of admission for a professional course based on the following
// criteria:
// Marks in Maths >=65
// Marks in Phy >=55
// Marks in Chem>=50
// Total in all three subject >=180
// or
// Total in Math and phy >=140
// Test Data:
// Input the marks obtained in Physics:65
// Input the marks obtained in Chemistry:51
// Input the marks obtained in Mathematics:72
// Expected Output:
// The candidate is eligible for admission.

#include <stdio.h>

int main()
{
    int math,phy,chem;
    printf("Plese enter your grades: \n Maths, Phy, Chem:");
    scanf("%d %d %d",&math, &phy, &chem);

    if ((math >= 65 && phy >= 55 && chem >= 50 && math+phy+chem>=180)||(math + phy >140))
    {
        printf(" The candidate is eligible for admission.");
    }
    else
    {
        {
        printf("The candidate is not eligible for admission.");
        }
    }
    

}

