#include <stdio.h>
#include <stdlib.h>

int isValidTriangle(int, int, int);
int isEquilateral(int, int, int);
int isIsosceles(int, int, int);
int isRightAngle(int, int, int);

int main()
{
    int a, b, c, res, choice;
    do
    {
        printf("\nEnter Your Choice \n");
        printf("1 : Check triangle is valid or Not \n");
        printf("2 : Check triangle is Isosceles \n");
        printf("3 : Check triangle is Equilateral \n");
        printf("4 : Check triangle is Right-Angled \n");
        printf("5 : Exit \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Three Numbers \n");
            scanf("%d %d %d", &a, &b, &c);
            res = isValidTriangle(a, b, c);
            if (res == 1)
                printf("Valid Triangle");
            else
                printf("Invalid Triangle");
            break;
        case 2:
            printf("Enter Three Numbers \n");
            scanf("%d %d %d", &a, &b, &c);
            res = isIsosceles(a, b, c);
            if (res == 1)
                printf("Isosceles Triangle");
            else
                printf("Not a Isosceles Triangle");
            break;

        case 3:
            printf("Enter Three Numbers \n");
            scanf("%d %d %d", &a, &b, &c);
            res = isEquilateral(a, b, c);
            if (res == 1)
                printf("Equilateral Triangle");
            else
                printf("Not Equilateral Triangle");
            break;
        case 4:
            printf("Enter Three Numbers \n");
            scanf("%d %d %d", &a, &b, &c);
            res = isRightAngle(a, b, c);
            if (res == 1)
                printf("Right Angle Triangle");
            else
                printf("Not a Right Angle Triangle");
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid Number ");
        }

    } while (1);

    return 0;
}

int isValidTriangle(int x, int y, int z) // check given number is valid or not
{
    if (x + y > z && x + z > y && y + z > x)
        return 1;
    else
        return 0;
}

int isEquilateral(int a, int b, int c) // check traingle is equal or not
{
    if (a == b && a == c && b == c)
        return 1;
    else
        return 0;
}

int isIsosceles(int a, int b, int c)
{
    if (a == b && b == c)
        return 0;
    else if (a == b || a == c || b == c)
        return 1;
    else
        return 0;
}

int isRightAngle(int a, int b, int c)
{
    if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == b * b + a * a)
        return 1;
    else
        return 0;
}
