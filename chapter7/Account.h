#ifndef Account_h
#define Account_h


#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

class Account {
public:
    void calculate() { amount += amount * interestRate; }
    static double rate() { return interestRate; }
    static void rate(double newRate) { interestRate = newRate; }

private:
    string owner;
    double amount;
    static double interestRate;
    static constexpr double todayRate = 42.42;
    static double initRate() { return todayRate; }
};

double Account::interestRate = initRate();





#endif
