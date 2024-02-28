#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// [Runtime]
// 11ms
// Beats 77.94% of users with C
// [Memory]
// 6.17MB
//Beats 68.11% of users with C
bool isPowerOfThree(int n) {
    if (n == 0) return  false;
    if (n == 1 ) return  true;
    if (n % 3 == 0) return isPowerOfThree(n / 3);
    return  false;
}

// [Runtime]
// 8ms
// Beats 85.73% of users with C
// [Memory]
// 6.35MB
//Beats 41.25% of users with C
bool isPowerOfThreeUsingSwitch(int n) {
    switch(n) {
        case 0:
            return false;
            break;
        case 1:
            return true;
    }

    if (n % 3 == 0) {
        n =  n / 3;
        return isPowerOfThree(n);
    }

    return  false;
}


// [Runtime]
// 8ms
// Beats 85.73% of users with C
// [Memory]
// 6.00MB
//Beats 77.22% of users with C
bool isPowerOfThreeUsingSwitchWithDefault(int n) {
    switch(n) {
        case 0:
            return false;
            break;
        case 1:
            return true;
        default:
            if (n % 3 == 0) {
                n =  n / 3;
                return isPowerOfThree(n);
                // if you write like this:
                // return isPowerOfThree(n / 3);
                // [Runtime]: 12ms
                // [Memory] 6.18mb
            }
    }
    return  false;
}

int main()
{
    bool ipt = isPowerOfThree(81);
    printf("%d", ipt);
    return EXIT_SUCCESS;
}