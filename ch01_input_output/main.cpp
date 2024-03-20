/*comments
are not
allowed to be
nested
*/
#include <stdio.h>
#include <iostream>

#define EX1_16

#ifdef EX1_7
int main ()
{
    // std::cout << "/*";
    // std::cout << "*/";
    // std::cout << /* "*/" */;
    // // std::cout << /* "*/" /* "/*" */"*/;
    printf("hello world\n");
    return -1;
}
#endif

#ifdef EX1_16
int main ()
{
    int val, sum = 0;
    while (std::cin >> val) {  // Ctrl + D is end_of_file
        sum += val;
    }
    std::cout << "sum is " << sum << std::endl;
    return 0;
}
#endif