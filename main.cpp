#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <iso646.h>
#define XYECOC main
#define SIZE 26
long double ans;
int fib(int q);
int refib(int q);
int XYECOC()
{
    for (int i = 1; i<30; i++ ){
    printf("%d\n", refib(i));
    }
}

int fib(int q){
int l1 = 1, l2 = 1, l3, l4;
if (q==1 || q==2){
return 1;
}
else {
for (int i =2; i<q; i++){

l3=l1+l2;
l4 = l3+l2;
l1=l2;
l2=l3;
l3=l4;
}

return l3;
}
}
int refib(int q){
if (q==1|| q==2){
return 1;
}
else{
return(refib(q-1)+refib(q-2));
}
}
