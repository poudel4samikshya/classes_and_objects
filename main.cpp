#include <iostream>
using namespace std;

//creating a class called NJIT
int Total_students (int a,int b,int c,int d);

class NJIT {
public: // acess modifiers
    //properties of clsss NJIT
    int no_of_teachers = 0;
    int no_of_students = 0;
    int no_of_classrooms = 0;

private:
    int age = 22;
    string name = "Samikshya";

    void age_dispaly() {
        cout << "The age of student  " << name << "  is " << age << endl;
    }


public:
    void display_information() {
        cout << "Here is the information you need" << endl;
        cout << "NO of teachers:  " << no_of_teachers << endl;
        cout << "NO of students:   " << no_of_students << endl;
        cout << "NO of classrooms:  " << no_of_classrooms << endl;
    }

    void xyz(){
            age_dispaly();
    }


};



// driver code 
int  main()
{
    // information of each badge
    NJIT Freshmen; //object 1
    Freshmen.no_of_teachers = 50;
    Freshmen.no_of_students = 4000;
    Freshmen.no_of_classrooms = 50;

    NJIT Sophomore; //object 2
    Sophomore.no_of_teachers = 30;
    Sophomore.no_of_students = 2000;
    Sophomore.no_of_classrooms = 30;

    NJIT  Junior; //object 3
    Junior.no_of_teachers = 15;
    Junior.no_of_students = 1500;
    Junior.no_of_classrooms = 20;

    NJIT Senior; //object 4
    Senior.no_of_teachers = 10;
    Senior.no_of_students = 1000;
    Senior.no_of_classrooms = 10;
    cout<<Total_students(Freshmen.no_of_students,Sophomore.no_of_students,Junior.no_of_students,Senior.no_of_students )<<endl;
    Freshmen.display_information();
    Senior.display_information();

    NJIT obj1;
    obj1.xyz();
}
//function to add all of the students
int Total_students (int a,int b,int c,int d)
{
    int  total_students = a +b + c + d;
    return total_students;
}
