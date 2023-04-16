// virtual base class
/*
Virtual base class is a base function that will inherit data members only 
once in hierarchical inheritance to avoid ambiguity. Example if in a hierarchail
inhertance is class B and C are derived from A and D is derived from B and C
The data members/mehtods of A will be inherited by B and C and from B and C to
D. D will recieve two copies of data members this will create ambiguity. inorder
to solve this ambiguity we make A a virtual base class so that all its data 
members and methods will get inherited once only either to B or C. 
Syntax for virtual base class is (if B is inherited from A) then we can 
write B like this
class {{Derived-class-name}} : virtual {{visibility}} {{Base-class-name}}
*/

#include<iostream>
using namespace std;

class Student
{
    protected:
        int roll_no;
    public:
        void set_number(int a)
        {
            roll_no = a;
        }
        void print_number()
        {
            cout << "Your roll number is " << roll_no << endl;
        }

};

class Test : virtual public Student //this is virtual base class
{
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2)
        {
            maths = m1;
            physics = m2;
        }
        void print_marks()
        {
            cout << "Your marks is: " << endl
                 << "Maths = " << maths << endl
                 << "Physics = " << physics << endl;
        }
};

class Sport : virtual public Student
{
    protected:
        float score;
    public:
        void set_score(float sc)
        {
            score = sc;
        }
        void print_score()
        {
            cout << "Your PT score is " << score << endl;
        }
};

class Result : public Test, public Sport
{
    private:
        float total;
    public:
        void display(void)
        {
            total = maths + physics + score; // if we haven't use virtual class 
            print_number(); // then the class result would have got two copies of 
            print_score(); // roll_no and that would have created ambiguity
            print_marks();
            cout << "Your total score is " << total << endl;
        }
};

int main()
{
    Result faheem;
    
    faheem.set_number(23);
    faheem.set_marks(23.32, 23.23);
    faheem.set_score(34);
    faheem.display();
    
    return 0;
}