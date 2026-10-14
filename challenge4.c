
#include <stdio.h>

int main()
{
    int n, i;
    float expense, total = 0, average;
    
    printf("Enter number of days: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter expense for day %d: ", i);
        scanf("%f", &expense);

        total = total + expense;

        if (expense > 1000)
        {
            printf("High expense\n");
        }
        else if (expense >= 500)
        {
            printf("Moderate expense\n");
        }
        else
        {
            printf("Low expense\n");
        }
    }

    average = total / n;

    printf("\nTotal expenses = Rs. %.2f\n", total);
    printf("Average daily expense = Rs. %.2f\n", average);

    if (total > 5000)
    {
        printf("Overall spending is high.\n");
    }
    else
    {
        printf("Overall spending is within the limit.\n");
    }

    return 0;
}
