
#include <iostream>
using namespace std;

int main()
{
    string studentName;
    int age;
    int examScore;
    
    cout<<"name:TABITHA KIMANI:"<<endl;
	cout<<"REG.NO:CT101/G/26591/25:"<<endl;

    cout<<"Enter student name:"<<endl;
    cin>>studentName;

    cout<<"Enter student age:"<<endl;
    cin>>age;

    cout<<"Enter exam score:"<<endl;
    cin>>examScore;

    cout<<"===== COLLEGE ADMISSION RESULTS ====="<<endl;
    cout<<"Student Name:"<<studentName<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Exam Score:"<<examScore<<endl;

    if(age>=18)
    {
        if(examScore>=50)
        {
            cout<<"Admission Decision: Admitted"<<endl;
        }
        else
        {
     cout<<"Admission Decision: Not Admitted: Low Score"<<endl;
        }
    }
    else
    {
        cout<<"Admission Decision:Not Admitted:Underage"<< endl;
    }

    cout<<"====================================="<< endl;

    return 0;
}

