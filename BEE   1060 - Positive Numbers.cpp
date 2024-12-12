/* Positive Numbers */

#include <stdio.h>

int main() {
     double a,b,c,d,e,f;
     int sum=0;
     scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
     if(a>0)
     {
         sum=sum+1;
     }
     if(b>0)
     {
         sum=sum+1;
     }
     if(c>0)
     {
         sum=sum+1;
     }
     if(d>0)
     {
         sum=sum+1;
     }
     if(e>0)
     {
         sum=sum+1;
     }
     if(f>0)
     {
         sum=sum+1;
     }
     printf("%d valores positivos\n",sum);


    return 0;
}
