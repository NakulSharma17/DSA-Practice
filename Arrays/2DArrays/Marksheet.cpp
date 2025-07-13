// level HARD
/*
You're given marks of M students in N subjects (2D array).
Write a program that:

Accepts marks using a function

Displays the mark table (in a grid)

Calculates and prints:

Total marks of each student

Average marks of each subject

*/


/*


INPUT:
Enter number of students: 2
Enter number of subjects: 3
Enter marks for Student 1:
  Subject 1: 75
  Subject 2: 80
  Subject 3: 90
Enter marks for Student 2:
  Subject 1: 60
  Subject 2: 70
  Subject 3: 80


  OUTPUT:


  Marksheet:
   Student     Sub 1     Sub 2     Sub 3      Total
    Stud 1         75        80        90        245
    Stud 2         60        70        80        210

    ( STAGE 2 , agr upar wala easily ho jae)

    Subject Averages:
    Subject 1: 67.5
    Subject 2: 75
    Subject 3: 85


*/
#include<bits/stdc++.h>
using namespace std;
int main(){
  int col=3;
  int rown;
  cout<<"Enter Total Students: "<<endl;
  cin>>rown;
  int arr[rown][col];
  for(int i=0;i<rown;i++){
    cout<<"Enter Marks of Chem, Phy and Maths respectivly of Student "<<i+1<<": "<<endl;
    for(int j=0;j<col;j++){
      cin>>arr[i][j];
    }
  }
  for(int i=0;i<rown;i++){
    int sum=0;
    cout<<"Marks of Student "<<i+1<<": ";
    for(int j=0;j<col;j++){
      sum+=arr[i][j];
      cout<<arr[i][j]<<" ";
    }
    cout<<"Total: "<<sum;
    cout<<endl;
  }
  
  // int wsub;
  // cout<<"tell me subject u want the addition of: ";
  // cin>>wsub;
  // for(int i=0;i<col;i++){
  //   int subaddi=0;
  //   if(wsub==1){
  //     subaddi+=arr[i][0];
  //   }
  //   cout<<subaddi;
  // }
  int fixval;
  cout<<"Enter subject You Want to see(0-chem,1-phy and 2-maths) ";
  cin>>fixval;
  int addi=0;
  for(int i =0;i<rown;i++){
    cout<<arr[i][fixval]<<" "<<endl;
    addi+=arr[i][fixval];
    
  }
  cout<<"And subject addition is: "<<addi;
}