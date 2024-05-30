class Account {
public:
	Account(int money) : balance{money} {}
	int getBalance() {
		return balance; 
	}
	void deposit(int money) {
		balance += money;
	}
	void withdraw(int money) {
		balance -= money;
	}
	void applyinterest() {
		int interest = balance * rate / 100;
		balance += interest;
	}
	void setinterest(int n) {
		rate = n;
	}
	int getpredictmoney(int year) {
		register int result = balance;
		for (register int i = 0; i < year; i++) {
			result = getNextMoney(result);
		}
		return result;
	}
private:
	int balance = 10000;
	int rate;
	int getNextMoney(int origin) {
		register int interest = origin * rate / 100;
		return origin + interest;
	}
};