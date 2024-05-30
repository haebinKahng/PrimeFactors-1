#include "pch.h"
#include "../Project1/fibo.cpp"
#include "../Project1/Account.cpp"
#include "../Project1/prime-factors.cpp"

// Fibo test
/*
// 0 1 1 2 3 5 8 13 21...
TEST(FiboTest, Test1) {

   EXPECT_EQ(0, Fibo().fibo(0));
   EXPECT_EQ(1, Fibo().fibo(1));
   EXPECT_EQ(1, Fibo().fibo(2));
   EXPECT_EQ(13, Fibo().fibo(7));
}

TEST(FiboTest, Test2) {
	vector<vector<int>> cases = { {0, 0}, {1, 1} };
	for (register int i = 0; i < cases.size(); i++) {
		register int input = cases[i][0];
		register int expect = cases[i][1];

		EXPECT_EQ(expect, Fibo().fibo(input));
	}
}
*/

// Account test
/*
class AccountFixture : public testing::Test {
public:
	Account account{ 10000 };
};

TEST_F(AccountFixture, CreateAccountInut10000) {
	EXPECT_EQ(account.getBalance(), 10000);
}

TEST_F(AccountFixture, Deposit) {
	account.deposit(500);
	EXPECT_EQ(account.getBalance(), 10500);
}

TEST_F(AccountFixture, Withdraw) {
	account.withdraw(600);
	EXPECT_EQ(account.getBalance(), 9400);
}

TEST_F(AccountFixture, interrestset) {
	account.setinterest(5);
	account.applyinterest();
	EXPECT_EQ(account.getBalance(), 10500);
}

TEST_F(AccountFixture, predictinterest) {
	account.setinterest(10);
	EXPECT_EQ(account.getpredictmoney(3), 13310);
}
*/

// prime-factor test
#include <vector>
class PrimeFixture : public testing::Test {
public:
	PrimeFactor prime_factor;
	vector<int> expected;
};

TEST_F(PrimeFixture, Of1) {
	expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFixture, Of2) {
	expected = { 2 };
	EXPECT_EQ(expected, prime_factor.of(2));
}

TEST_F(PrimeFixture, Of3) {
	expected = { 3 };
	EXPECT_EQ(expected, prime_factor.of(3));
}

TEST_F(PrimeFixture, Of4) {
	expected = { 2, 2 };
	EXPECT_EQ(expected, prime_factor.of(4));
}

TEST_F(PrimeFixture, Of6) {
	expected = { 2, 3 };
	EXPECT_EQ(expected, prime_factor.of(6));
}

TEST_F(PrimeFixture, Of9) {
	expected = { 3, 3 };
	EXPECT_EQ(expected, prime_factor.of(9));
}