
#include <iostream>
using namespace std;

int main()
{
    string studentName;
    int theoryMarks, practicalMarks, averageScore;
    cout<<"name:TABITHA KIMANI:"<<endl;
	cout<<"REG.NO:CT101/G/26591/25:"<<endl;

    cout<<"Enter student name:"<<endl;;
    cin>>studentName;

    cout<<"Enter theory test marks:"<<endl;
    cin>>theoryMarks;

    cout<<"Enter practical test marks:"<<endl;;
    cin>>practicalMarks;

    averageScore = (theoryMarks + practicalMarks) / 2;

    cout << "===== ROCKY DRIVING SCHOOL RESULTS ====="<<endl;
    cout << "Student Name:"<<studentName<<endl;
    cout << "Theory Marks:"<< theoryMarks << endl;
    cout << "Practical Marks:"<<practicalMarks<< endl;
    cout << "Average Score:"<< averageScore<<endl;

    if (averageScore>=50)
    {
        cout<<"Result:PASSED:"<< endl;
    }
    else
    {
        cout<<"Result:FAILED:"<< endl;
    }

    cout<<"========================================"<<endl;

    return 0;
}

