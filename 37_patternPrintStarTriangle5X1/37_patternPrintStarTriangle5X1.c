#include<stdio.h>

int main()
{
    int total_rows;

    printf("Enter The Rows: ");
    scanf("%d",&total_rows);

    for (int rows = 1; rows <=total_rows; rows++)
    {
        for (int cols=total_rows;cols>=rows; cols--)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}