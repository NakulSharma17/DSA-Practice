#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    You are required to create a class called `Book` that represents the details of a book.

    The class must contain the following:

    PRIVATE DATA MEMBERS:
    - A string to store the title
    - A string to store the author
    - A float to store the price
    - An integer to store the number of pages

    // PUBLIC MEMBER FUNCTIONS:
    // 1. A default constructor that initializes all members to default values (e.g., empty string, 0).
    // 2. A parameterized constructor that takes title, author, price, and pages as arguments.
    // 3. A method `void displayInfo()` that prints all book details.
    // 4. A method `bool isExpensive()` that returns true if price > 500.
    // 5. A method `bool isLong()` that returns true if pages > 300.
    // 6. A method `void applyDiscount(float percent)` that reduces the price by the given percentage.
    
    
    
    */
   class Book{
       private:
       
       string title;
       string author;
       float price;
       int no_pg;
       
       public:
       Book(){
           this->author="";
           this->no_pg=0;
           this->price=0;
           this->title="";
        }
        Book(string titluu,string authu,float pricuu,int no_peguu){
            this->author=authu;
            this->price=pricuu;
            this->no_pg=no_peguu;
            this->title=titluu;
        }
        void displayInfo(){
            cout<<title<<" "<<author<<" "<<no_pg<<" "<<price<<" "<<endl; 
        }
        bool isExpensive(){
            if(price>500){
                return true;
            }else{
                return false;
            }
            
        }
        bool isLong(){
            if(no_pg>300){
                return true;
            }
            else{
                return false;
            }
        }
        void applyDiscount(float percent){
            int dis=(price*percent)/100;
            price=price-dis;
            // cout<<price;
        }
    };
    // DRIVER CODE INSTRUCTIONS (write this inside `main()`):
    
    // - Create at least 3 `Book` objects using different constructors.
    // - Call `displayInfo()` on each book.
    // - Use `isExpensive()` and `isLong()` and print results.
    // - Apply a discount on one book using `applyDiscount()` and show updated info.
    int main(){
        Book atomic("Atomic Habits","shakespeare",600,301);
        // atomic.displayInfo();
        // atomic.isExpensive();
        // atomic.isLong();
        // atomic.applyDiscount(20);
        if(atomic.isExpensive()==true){
            atomic.displayInfo();
        }else{
            cout<<"aukat se kam"<<endl;
        }
        if(atomic.isLong()==true){
            atomic.applyDiscount(20);
            atomic.displayInfo();
        }else{
            cout<<"short kitab"<<endl;
        }
        Book alchemist("TheAlchemist","orthodox",300,150);
        if(alchemist.isExpensive()==true){
            alchemist.displayInfo();
        }else{
            cout<<"aukat se kam"<<endl;
        }
        if(alchemist.isLong()==true){
            alchemist.applyDiscount(20);
            alchemist.displayInfo();
        }else{
            cout<<"short kitab"<<endl;
        }
    }