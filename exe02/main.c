#include <stdio.h>

int main() {
   int V;
   int T;
   int R;
   int D;
   int L;

   scanf("%d",&T); 
   scanf("%d", &V);
   scanf("%d", &R);
   D = V * T;
   L = D/R;

   printf("R = %d", R);
   printf("\nV = %d", V);
   printf("\nT = %d", T);
   printf("\nD = %d", D);
   printf("\nL = %d\n", L);
  
  
  
   
   return 0;
}