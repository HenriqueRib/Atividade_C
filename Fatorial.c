#include <stdio.h>
#include <stdlib.h>
 int fat (int n) {
     int f;
     printf ("\nchamando fatorial de %d", n);
     if (n <= 0) return 1;
            f = n * fat(n-1);
     printf ("\nfeita a multiplicacao por %d", n);
     return f;
}
int main () {
     int n; 
     printf ("digite o valor de n:");
     scanf ("%d", &n);
      printf ("\nfatorial de %d = %d\n", n, fat(n));
     system ("PAUSE");
     return 0;
}
