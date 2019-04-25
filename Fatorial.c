#include <stdio.h>
#include <stdlib.h>
 int fat (int n) {
     int f;
     if (n <= 0) return 1;
            f = n * fat(n-1);
     return f;
}
int main () {
     int n; 
     printf ("Digite o numero do fatorial ");
     scanf ("%d", &n);
      printf ("\nO fatorial de %d e = %d\n", n, fat(n));
     system ("PAUSE");
     return 0;
}
