#include<iostream>
using namespace std;
class student
{
private:
string name;
int roll_no;
float marks;
public:
void input()
{
    cout<<"Student name:";
    cin>>name;
    cout<<"Student roll_no:";
    cin>>roll_no;
    cout<<"Student marks:";
    cin>>marks;

}

void display(){
    cout<<"Enter student name:"<<endl;
    cout<<"Enter student roll_no:"<<endl;
    cout<<"Enter student marks:"<<endl;
}
};

int main()
{
    student s;
    s.input();
    s.display();
    return 0;
}