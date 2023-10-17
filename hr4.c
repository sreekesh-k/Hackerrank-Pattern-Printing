
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int dupn = n, n2 = n; // i took 2 fake n's
    int size, mid;
    size = n + (n - 1); 
    int dupsize = size; // duplicate size to use it as a counter
    mid = n;            // i think midle row and middle column will always be the n??
    int track = 1;
    int i, j;
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size; j++)
        { // when row is above mid
            if (i <= mid)
            {
                if (j >= i && j <= dupsize)
                {
                    printf("%d ", dupn); // from i to end ( end is -- each row)
                }
                // when j is < 1 as well as j>dup size we need to print n , n-1,n-2 (will be filled by the above loop) n-2,n-1,n
                else
                {
                    if (j >= 1 && j < i)
                    {
                        printf("%d ", n2--);
                    }
                    else
                    {
                        printf("%d ", ++n2);
                    }
                }
            }
            // when row is below mid
            else
            { // instead of i to end... j moves from dup size to i , get it ??siiuuuuuuuuuuuuuuuuuu
                if (j >= dupsize && j <= i)
                {
                    printf("%d ", dupn);
                }
                else
                {
                    if (j >= 1 && j < dupsize)
                    {
                        printf("%d ", n2--);
                    }
                    else
                    {
                        printf("%d ", ++n2);
                    }
                }
            }
        }
        // value of dupn goes from n to 1 till the mid then goes back to n after the mid row
        if (dupn <= n && i < mid)
            dupn--;
        else
            dupn++;
        dupsize--; // its value should be -- each row see the 1st if in j loop
        printf("\n");
    }
    return 0;
}
