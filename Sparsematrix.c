#include <stdio.h>

#define MAX 50
// Input sparse matrix
void input(int a[MAX][3])
{ 
    int r, c, n, i; 
    printf("Enter rows, columns and number of non-zero elements: ");
    scanf("%d %d %d", &r, &c, &n);

    a[0][0] = r;
    a[0][1] = c;
    a[0][2] = n;

    printf("Enter row, column and value:\n");

    for (i = 1; i <= n; i++)
    {
        scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
    }
}

// Display sparse matrix
void display(int a[MAX][3])
{
    int i;

    printf("\nRow\tColumn\tValue\n");

    for (i = 0; i <= a[0][2]; i++)
    {
        printf("%d\t%d\t%d\n",
               a[i][0], a[i][1], a[i][2]);
    }
}

// Add two sparse matrices
void add(int a[MAX][3], int b[MAX][3], int sum[MAX][3])
{
    int i = 1, j = 1, k = 1;

    if (a[0][0] != b[0][0] || a[0][1] != b[0][1])
    {
        printf("\nAddition not possible!");
        return;
    }

    sum[0][0] = a[0][0];
    sum[0][1] = a[0][1];

    while (i <= a[0][2] && j <= b[0][2])
    {
        if (a[i][0] == b[j][0] &&
            a[i][1] == b[j][1])
        {
            sum[k][0] = a[i][0];
            sum[k][1] = a[i][1];
            sum[k][2] = a[i][2] + b[j][2];

            i++;
            j++;
            k++;
        }
        else if (a[i][0] < b[j][0] ||(a[i][0] == b[j][0] &&
             a[i][1] < b[j][1]))
        {
            sum[k][0] = a[i][0];
            sum[k][1] = a[i][1];
            sum[k][2] = a[i][2];

            i++;
            k++;
        }
        else
        {
            sum[k][0] = b[j][0];
            sum[k][1] = b[j][1];
            sum[k][2] = b[j][2];

            j++;
            k++;
        }
    }

    while (i <= a[0][2])
    {
        sum[k][0] = a[i][0];
        sum[k][1] = a[i][1];
        sum[k][2] = a[i][2];

        i++;
        k++;
    }

    while (j <= b[0][2])
    {
        sum[k][0] = b[j][0];
        sum[k][1] = b[j][1];
        sum[k][2] = b[j][2];

        j++;
        k++;
    }

    
    sum[0][2] = k - 1;
}

// Transpose
void transpose(int a[MAX][3], int t[MAX][3])
{
    int i, j, k = 1;

    t[0][0] = a[0][1];
    t[0][1] = a[0][0];
    t[0][2] = a[0][2];

    for (j = 0; j < a[0][1]; j++)
    {
        for (i = 1; i <= a[0][2]; i++)
        {
            if (a[i][1] == j)
            {
                t[k][0] = a[i][1];
                t[k][1] = a[i][0];
                t[k][2] = a[i][2];

                k++;
            }
        }
    }
}

int main()
{
    int a[MAX][3], b[MAX][3];
    int sum[MAX][3], t[MAX][3];

    printf("Enter first sparse matrix:\n");
    input(a);

    printf("\nEnter second sparse matrix:\n");
    input(b);

    printf("\nFirst Matrix:");
    display(a);

    printf("\nSecond Matrix:");
    display(b);

    add(a, b, sum);

    printf("\nAddition:");
    display(sum);

    transpose(a, t);

    printf("\nTranspose of First Matrix:");
    display(t);

    return 0;
}