#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void calculate_the_maximum(int n, int k) {
    int maxand = 0;
    int maxor = 0;
    int maxxor = 0;
    for (int i = 1; i < n; i++)
        {
        for (int j = i + 1; j <= n; j++){
            int cand = i & j;
            int cor = i | j;
            int cxor = i ^ j;

            if (maxand < cand && cand < k) 
            {
                 maxand = cand;
            }
            if (maxor < cor && cor < k)
            {
                maxor = cor;
            }
            if (maxxor < cxor && cxor < k)
            {
                maxxor = cxor;
            }
        }
    }
    printf("%d \n%d \n%d \n", maxand,maxor,maxxor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
}