#include<iostream>
#include<string.h>
using namespace std;
class Student{
    private:
    string name;
    int rollNo;
    int marks[5];
    char grade;
    int totalMarks;
    float percentage;

    public:
    Student(){
        cout<<" Enter Name of Student :"<<endl;
        getline(cin,name);
        cout<<" Enter roll number :"<<endl;
        cin>>rollNo;
       // cin.ignore();

        totalMarks=0;
        
         cout << "Enter marks of 5 subjects (out of 100 each):\n";
         for(int i=0;i<5;i++){
            cout<<" Subject "<<(i+1)<<":"<<endl;
            cin>>marks[i];
            totalMarks+=marks[i];
         }
 cin.ignore();
 calculate();
    }

    void calculate(){
      percentage=totalMarks/5.0;
      
      if(percentage>=90) {
        grade='A';
      } else if (percentage>=80) 
        grade='B';

        else if(percentage>=70) 
        grade='C';
        else if(percentage>=60) 
        grade='D';
        else if(percentage>=50) 
        grade='E';

        else grade='F';
    }
   
    void display(){
        cout << "\n===== Report Card =====\n";
          cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
       cout << "Total Marks :" << totalMarks << "/500" << endl;
         cout << "Percentage: " << percentage << "%" << endl;
        cout << "Grade: " << grade << endl;
    }
};




int main(){

 Student s1;   
    s1.display();


    return 0;
}