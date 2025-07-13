#include <iostream>
#include <string>
using namespace std;

/*------------------ Q1: Employee Salary Manager ------------------*/
// Create a class Employee with name, baseSalary, bonus.
// Implement:
// - a constructor
// - a method totalSalary() that returns base + bonus
// - a method setBonus(int)
// - a method display() to print all info

class Employee {
private:
    string name;
    int baseSalary;
    int bonus;
    int total;

public:
    Employee(string n, int b){
        this->name=n;
        this->baseSalary=b;
    }
    void setBonus(int b){
        this->bonus=b;
        totalSalary();
    };
    int totalSalary(){
        int tot;
        this->total=this->baseSalary+this->bonus;
        return total;
    };
    void display(){
        cout<<name<<endl;
        cout<<baseSalary<<endl;
        cout<<bonus<<endl;
        cout<<total<<endl;
    };

};

// Implement class Employee above this line



/*------------------ Q2: Product Discount Calculator ------------------*/
// Create a class Product with name and price.
// Implement:
// - a constructor
// - applyDiscount(int percent)
// - getPrice() method

class Product {
private:
    string name;
    float price;

public:
    Product(string n, float p){
        this->name=n;
        this->price=p;
    };
    
    void applyDiscount(int percent){
        int dis;
        dis=(price*percent)/100;
        price-=dis;

    };  // apply percent discount to price


    float getPrice(){
        return this->price;
    };
};

// Implement class Product above this line


/*------------------ Q3: Student Pass Checker ------------------*/
// Create a class ExamStudent with name and 3 marks.
// Implement:
// - constructor
// - average()
// - hasPassed() => returns true if avg >= 40 and each mark >= 35

class ExamStudent {
private:
    string name;
    int m1, m2, m3;

public:
    ExamStudent(string n, int a, int b, int c);
    float average();
    bool hasPassed();
};

// Implement class ExamStudent above this line


/*------------------ Q4: Bank Withdrawal ------------------*/
// Create class BankAccount2 with name and balance
// Implement:
// - constructor
// - withdraw(int amt): subtract only if balance >= amt
// - display()

class BankAccount2 {
private:
    string name;
    int balance;

public:
    BankAccount2(string n, int b);
    void withdraw(int amt);
    void display();
};

// Implement class BankAccount2 above this line


/*------------------ MAIN DRIVER ------------------*/
int main() {
    cout << "----- Employee Test -----\n";
    Employee e1("Ravi", 30000);
    e1.setBonus(5000);
    e1.display();  // Expected: Ravi, Base: 30000, Bonus: 5000, Total: 35000

    cout << "\n----- Product Discount Test -----\n";
    Product p1("Shoes", 2000);
    p1.applyDiscount(10);  // 10% off
    cout << "Final price: " << p1.getPrice() << endl;  // Expected: 1800

    // cout << "\n----- ExamStudent Test -----\n";
    // ExamStudent s1("Neha", 45, 60, 50);
    // cout << "Average: " << s1.average() << endl;
    // cout << "Passed? " << (s1.hasPassed() ? "Yes" : "No") << endl;

    // ExamStudent s2("Rohit", 35, 20, 50);
    // cout << "Average: " << s2.average() << endl;
    // cout << "Passed? " << (s2.hasPassed() ? "Yes" : "No") << endl;

    // cout << "\n----- BankAccount2 Test -----\n";
    // BankAccount2 b1("Kiran", 10000);
    // b1.withdraw(2500);    // Success
    // b1.withdraw(9000);    // Should not allow
    // b1.display();         // Final balance should be 7500

    // return 0;
}
