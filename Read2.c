#include <stdio.h>

#define f(a, b) a##b
#define g(a) #a
#define h(a) g(a)

#define X 4
#define Y X
#define Z Y
#define STR "Result: "

int main()
{
    printf("%s%d\n", h(f(S, T)), f(f(Z, Y), f(Y, X)));
    return 0;
}
