/*Pattern: Closed Box

Print the given pattern for the given number of rows.
Pattern for N=4

# # # #
*     *
*     *
# # # #

*/

#include <stdio.h>
int main()
{
    int i, j, N;

    /* Input number of rows from user */
    scanf("%d", &N);

    /* Iterate over each row */
    for(i=1; i<=N; i++)
    {
        /* Iterate over each column */
        for(j=1; j<=N; j++)
        {
            if(i==1 || i==N )
            {
                /* Print star for 1st, Nth row and column */
                printf("#");
            }
            else if(j==1 ||  j==N){
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        /* Move to the next line/row */
        printf("\n");
    }

    return 0;
}
