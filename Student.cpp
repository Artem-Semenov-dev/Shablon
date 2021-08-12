#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Student{
private:
    int bal;
    string fam;
    friend ostream& operator<<(ostream&, const Student&);
    friend bool operator<(const Student&, const Student&);
    friend bool operator>(const Student&, const Student&);
    friend bool operator ==(const Student&, const Student&);
public:
    Student();
    Student(int, string);
    int get_bal(){return bal;}
    string get_str(){return fam;} 
    void print();
    Student&operator+(int);
};

Student::Student(){
    bal = 0;
    fam = "";
}
Student::Student(int b, string f){
    bal = b;
    fam = f;
}
void Student::print(){
    cout << endl << "student - " << fam << "s balom - " << bal;
}
ostream& operator<<(ostream& out, const Student& el){
    out << "bal = " << el.bal << " second name - " << el.fam;   
    return out;
}
bool operator < (const Student& el1, const Student& el2){
    if (el1.bal < el2.bal) return true;
    else return false;
}
bool operator > (const Student& el1, const Student& el2){
    if (el1.bal > el2.bal) return true;
    else return false;
}
bool operator ==(const Student& el1, const Student& el2){
    if (el1.bal == el2.bal) return true;
    else return false;
}
Student&Student::operator+(int a){
    this->bal = this->bal + a;
    return *this;
}