#include <iostream>
#include "AccountNumber.h"

int main() {
    int x[5] = {2,5,1,6,2};
    int *ptr = x;
    AccountNumber accountOne = AccountNumber(ptr, 5);
    accountOne.accountCheck(ptr, 5);

    return 0;
}
