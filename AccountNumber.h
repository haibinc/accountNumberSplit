//
// Created by Haibin Cao on 10/5/22.
//

#ifndef ACCOUNTNUMBERSPLIT_ACCOUNTNUMBER_H
#define ACCOUNTNUMBERSPLIT_ACCOUNTNUMBER_H
#include <iostream>

class AccountNumber {
private:
    int size;
    int *accountNumber;
public:
    AccountNumber(int *accountNumber, int size);
    void accountCheck(int *accountNumber, int size);
    int* changeLeastSigNum(int *accountNumber, int sum);
};


#endif //ACCOUNTNUMBERSPLIT_ACCOUNTNUMBER_H
