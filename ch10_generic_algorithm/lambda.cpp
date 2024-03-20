#include <stdio.h>

// this fun should be ahead of main
void ex_10_15 (int input) {
    int localVar = input * 2;
    auto f = [localVar] (int lambdaVal) -> int {return localVar + lambdaVal;};
    printf ("%d\n", f(1));
}

// practice 10.3.2
int main () {
    // 10.14
    auto f = [] (int leftNum, int rightNum) -> int {return leftNum + rightNum;};
    ex_10_15(10);
    printf ("%d\n", f(10, 1));
}
