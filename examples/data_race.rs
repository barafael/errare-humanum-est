#[derive(Debug)]
struct Account {
    balance: u32,
}

impl Account {
    fn transfer_money_to(&mut self, amount: u32, mut to: Account) {
        if self.balance >= amount {
            self.balance -= amount;
            std::thread::sleep(std::time::Duration::from_millis(1));
            to.balance += amount;
        }
    }

    fn new(initial: u32) -> Self {
        Account {
            balance: initial,
        }
    }
}

fn main() {
    let mut account1 = Account::new(100);
    let mut account2 = Account::new(100);

    let child1 = std::thread::spawn(|| {
        account1.transfer_money_to(50, account2)
    });

    let child2 = std::thread::spawn(|| {
        account2.transfer_money_to(130, account1)
    });

    child1.join();
    child2.join();

    println!("{:?}\n{:?}", account1, account2);
}
