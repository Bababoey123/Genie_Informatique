 /* calcul_pi.c */
#include <stdio.h>
#include<math.h>
#define MAX_ITERATIONS 100
int main()
{
float  x[MAX_ITERATIONS], y[MAX_ITERATIONS], pi[MAX_ITERATIONS];
int i;

x[0] = sqrt(2);
pi[0] = 2 + sqrt(2);
y[0] = 4*sqrt(2);

for(i=0 ; i<MAX_ITERATIONS ; ++i) {

x[i+1] = 0.5*(sqrt(x[i]) + 1.0/sqrt(x[i]));

pi[i+1] = pi[i]*(x[i+1]+1.0)/(y[i]+1.0);

y[i+1] = (y[i]*sqrt(x[i+1]) + 1.0/sqrt(x[i+1])) / (y[i] + 1.0);

}
printf("pi = %f\n", pi[i]);
}
