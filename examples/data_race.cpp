#include <iostream>
#include <thread>

struct Account {
    int balance{ 100 };
};

void transferMoney(int amount, Account &from, Account &to) {
    using namespace std::chrono_literals;
    if (from.balance >= amount) {
        from.balance -= amount;
        std::this_thread::sleep_for(1ns);
        to.balance += amount;
    }
}

void printSum(Account &a1, Account &a2) {
    std::cout << (a1.balance + a2.balance) << std::endl;
}

int main() {
    Account     account1;
    Account     account2;
    std::thread thr1(transferMoney, 50, std::ref(account1), std::ref(account2));
    std::thread thr2(transferMoney, 130, std::ref(account2), std::ref(account1));

    thr1.join();
    thr2.join();

    std::cout << "account1.balance: " << account1.balance << std::endl;
    std::cout << "account2.balance: " << account2.balance << std::endl;

    std::cout << std::endl;
}
