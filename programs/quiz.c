#include <stdio.h>

void print(int n, int j)
{
   if (j >= n)
      return;
   if (n-j > 0 && n-j >= j)
       printf("%d %dn", j, n-j);
   print(n, j+1);
}

int main()
{
    int n = 8;
    print(n, 1);
}
