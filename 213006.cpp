#include <iostream>
using namespace std;

class Person
{
private:
string name;
int id;
public:
Person()
{
int i;
string n;
name=n;
id=i;
}

Person(int i)
{
id=i;
}
Person(int i, string n)
{
name=n;
id=i;
}
void showPersonDetails()
{
cout<<"Person Details"<<endl;
cout<<endl<<"Person ID: "<<id<<endl;
cout<<"Name: "<<name<<endl<<endl;

}
};

int main()
{
Person q; //calling default constructor
q.showPersonDetails();
Person t(q);
t.showPersonDetails();
Person r(3); //calling parameterized constructor
r.showPersonDetails();
Person y(2,"Muhammad"); // calling parameterized constructor
y.showPersonDetails();
}

