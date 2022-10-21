//
// Created by Haibin Cao on 10/5/22.
//

#include "AccountNumber.h"

AccountNumber::AccountNumber(int *accountNumber, int size)
: accountNumber(accountNumber), size(size)
{
    if(size < 1)
    {
        std::cout << 'Invalid' << std::endl;
    }
}

void AccountNumber::accountCheck(int *accountNumber, int size)
{
    int *temp = new int[size];
    int sum = 0;

    for (int i = 0; i < size; ++i)
    {
        temp[i] = accountNumber[i];
    }

    for (int i = size-2; i >= 0; i=i-2)
    {
        temp[i] = temp[i] * 2;
        if(temp[i] > 9)
        {
            temp[i] = temp[i] - 9;
        }
    }

    for (int i = 0; i < size; ++i)
    {
        sum = sum + temp[i];
    }

    if(sum % 10 == 0)
    {
        std::cout << "This is a valid account number: ";
        for (int i = 0; i < size; ++i)
        {
            std::cout << temp[i];
        }
        delete []temp;
    }
    else
    {
        std::cout << "Invalid Account Number " << std::endl;
        changeLeastSigNum(temp, sum);
        std::cout << "Corrected Account Number to: ";
        for (int i = 0; i < size; ++i)
        {
            std::cout << temp[i];
        }
        delete []temp;
    }

}

int* AccountNumber::changeLeastSigNum(int *accountNumber, int sum)
{
    int remainder = sum % 10;
    if((accountNumber[size-1] + (10-remainder)) <= 9)
    {
        accountNumber[size-1] = accountNumber[size-1] + (10-remainder);
    }
    else if((accountNumber[size-1] - remainder) >= 0)
    {
        accountNumber[size-1] = accountNumber[size-1] - (remainder);
    }
    return accountNumber;
}