    #include <stdio.h>
    int main() {
        double n1, n2, n3;
        printf("Enter three different numbers: ");
        scanf("%lf %lf %lf", &n1, &n2, &n3);
        if (n1 >= n2 && n1 >= n3)
            printf("The 1st Number is the greatest among three.\n");
        if (n2 >= n1 && n2 >= n3)
            printf("The 2nd Number is the greatest among three\n");
        if (n3 >= n1 && n3 >= n2)
            printf("The 3rd Number is the greatest among three.\n");
        return 0;
    }