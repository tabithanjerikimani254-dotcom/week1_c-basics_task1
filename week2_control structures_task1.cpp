
#include <iostream>
using namespace std;

int main()
{
    string student_Name;
    double marks;
    char grade;
    
    cout<<"name:TABITHA KIMANI:"<<endl;
	cout<<"REG.NO:CT101/G/26591/25:"<<endl;

    cout<<"Enter student name:"<<endl;
    cin>>student_Name;

    cout<<"Enter exam marks:"<<endl;
    cin>>marks;

    if(marks >=70&&marks<=100)
    {
        grade = 'A';
    }
    else if(marks>=60&&marks<70)
    {
        grade = 'B';
    }
    else if(marks >=50&& marks<60)
    {
        grade = 'C';
    }
    else if (marks>=40&&marks<50)
    {
        grade = 'D';
    }
    else if(marks<40)
	{
    grade = 'E';
	}
    
    

    cout << "===== STUDENT EXAM RESULTS ====="<<endl;
    cout << "Student Name:"<<student_Name<<endl;
    cout << "Exam Marks:"<<marks<< endl;
    cout << "Grade:"<<grade<<endl;
    cout << "================================"<<endl;

    return 0;
}

