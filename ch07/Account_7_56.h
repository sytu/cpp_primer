#ifndef ACCOUNT_H 
#define ACCOUNT_H

#include <string>
class Account {
public:
	void calculate() { amount += amount * interestRate; }
	static double rate() { return interestRate; }
	static void rate(double newRate) { interestRate = newRate; }
private:
	std::string owner;
	double amount;
	satic constexpr todayRate = 99.8;
	static double interestRate;
	static double initRate() { return todayRate; }
	static constexpr int period = 30;
	double daily_tb1[period];
};
double Account::interestRate = initRate();
constexpr int Account::period;

#endif



