#include <iostream>
using namespace std;

int main()
{
    struct student1
    {
        int rollNo;
        float gpa;
    };

    student1 s1;
    s1.rollNo = 101;
    s1.gpa = 3.6; // struct in c++

    class student
    {
    private:
        int rollNo;
        float cgpa;

    public:
        void setData(int r, float c)
        {
            rollNo = r;
            cgpa = c;
        }

        void showData()
        {
            cout << rollNo << " " << cgpa;
        }
    };

    student s2;
    s2.setData(101 , 3.6);
    s2.showData();         //class in c++

    enum day {monday , tuesday , wednesday , thursday , friday};

    day today = monday;


    return 0;
}