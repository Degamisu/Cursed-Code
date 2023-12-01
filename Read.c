#include <stdio.h>int m(int a,int b){return (a>0)?b/m(b%a,a):b;}int m(int a,int b){return (a>0)?b/m(b%a,a):b;}int main(){int a=4,b=6;int result=m(a,b);printf("Result: %d\n",result);}
