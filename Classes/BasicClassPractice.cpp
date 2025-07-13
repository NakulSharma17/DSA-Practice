#include <iostream>
#include <string>
using namespace std;

/*------------------ Q1: Rectangle ------------------*/
class Rectangle {
                  // return area
    public:
    int len;
    int bret;

    Rectangle(int len,int bret){
        this->len=len;
        this->bret=bret;
    }
    int area(){
        int ar;
        ar=this->len*this->bret;
        return ar;
    }
};

// Implement class Rectangle above this line


/*------------------ Q2: BankAccount ------------------*/
class BankAccount {
           // prints name and balance
    public:

    string name;
    int balancia;
    BankAccount(string name,int bal){
        this->balancia=bal;
        this->name=name;
    }
    void display(){
        cout<<name<<endl;
        cout<<balancia<<endl;
    }
};

// Implement class BankAccount above this line


/*------------------ Q3: Student ------------------*/
class Student {
           // returns average marks
    public:
    string name;
    int mark1;
    int mark2;
    int mark3;

    Student(string name,int mark1,int mark2,int mark3){
        this->mark1=mark1;
        this->mark2=mark2;
        this->mark3=mark3;
        this->name=name;
    }
    double average(){
        double avg=(mark1+mark2+mark3)/3;
        return avg;
    }
};

// Implement class Student above this line


/*------------------ Q4: Book ------------------*/
class Book {
               // prints book details
    public:
    string boo;
    string autho;
    int price;

    Book(string book,string autho,int price){
        this->autho=autho;
        this->boo=book;
        this->price=price;
    }
    void show(){
        cout<<autho<<endl;
        cout<<boo<<endl;
        cout<<price<<endl;
    }
};

// Implement class Book above this line


/*------------------ Q5: Circle ------------------*/
class Circle {
    public:
    int rad;
    Circle(int rad){
        this->rad=rad;
    }
    float area(){
        float pi=3.14;
        int ar=pi*(rad*rad);
        return ar;
    }
    float circumference(){
        float pi=3.14;
        int cir=2*pi*rad;
        return cir;
    }
};

// Implement class Circle above this line

/*------------------ MAIN DRIVER ------------------*/
int main() {
    cout << "----- Rectangle Test -----\n";
    Rectangle r1(10, 5);
    cout << "Area: " << r1.area() << endl;  // Expected: 50
    Rectangle r2(3, 7);
    cout << "Area: " << r2.area() << endl;  // Expected: 21

    cout << "\n----- BankAccount Test -----\n";
    BankAccount b1("Alice", 5000);
    b1.display();
    BankAccount b2("Bob", 2000);
    b2.display();

    cout << "\n----- Student Test -----\n";
    Student s1("John", 80, 75, 90);
    cout << "Average: " << s1.average() << endl;  // Expected: 81.6667
    Student s2("Jane", 60, 70, 65);
    cout << "Average: " << s2.average() << endl;  // Expected: 65

    cout << "\n----- Book Test -----\n";
    Book bk1("The Alchemist", "Paulo Coelho", 399);
    bk1.show();
    Book bk2("Atomic Habits", "James Clear", 599);
    bk2.show();

    cout << "\n----- Circle Test -----\n";
    Circle c1(7);
    cout << "Area: " << c1.area() << endl;                 // ≈ 153.94
    cout << "Circumference: " << c1.circumference() << endl; // ≈ 43.98

    return 0;
}
