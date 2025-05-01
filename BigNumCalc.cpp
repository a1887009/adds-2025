#include "BigNumCalc.h"
#include <iostream>

bigNumCalc::bigNumCalc() {}

bigNumCalc::~bigNumCalc() {}

std::list<int> bigNumCalc::buildBigNum(std::string numString) {
    std::list<int> numList;
    for (char c : numString) {
        numList.push_back(c - '0');
    }
    return numList;
}

std::list<int> bigNumCalc::add(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    auto it1 = num1.rbegin();
    auto it2 = num2.rbegin();
    int carry = 0;

    while (it1 != num1.rend() || it2 != num2.rend() || carry != 0) {
        int digit1 = (it1 != num1.rend()) ? *it1 : 0;
        int digit2 = (it2 != num2.rend()) ? *it2 : 0;
        int sum = digit1 + digit2 + carry;

        result.push_front(sum % 10);
        carry = sum / 10;

        if (it1 != num1.rend()) ++it1;
        if (it2 != num2.rend()) ++it2;
    }

    return result;
}

std::list<int> bigNumCalc::sub(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    auto it1 = num1.rbegin();
    auto it2 = num2.rbegin();
    int borrow = 0;

    while (it1 != num1.rend()) {
        int digit1 = *it1;
        int digit2 = (it2 != num2.rend()) ? *it2 : 0;

        int diff = digit1 - digit2 - borrow;

        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        result.push_front(diff);

        ++it1;
        if (it2 != num2.rend()) ++it2;
    }

    // Remove leading zeros
    while (result.size() > 1 && result.front() == 0) {
        result.pop_front();
    }

    return result;
}

std::list<int> bigNumCalc::mul(std::list<int> num1, int num2) {
    std::list<int> result;
    auto it = num1.rbegin();
    int carry = 0;

    while (it != num1.rend() || carry != 0) {
        int digit1 = (it != num1.rend()) ? *it : 0;
        int product = digit1 * num2 + carry;

        result.push_front(product % 10);
        carry = product / 10;

        if (it != num1.rend()) ++it;
    }

    return result;
}

void bigNumCalc::printResult(const std::list<int>& result) {
    for (int digit : result) {
        std::cout << digit;
    }
    std::cout << std::endl;
}
