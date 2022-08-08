#include<iostream>
#include<string>
using namespace std;

extern void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents);

int main ()
{
    string courses[4];
    int number =2;
    string student[number];
    int array[number][4];
    print_class(courses,student, array,number);
    return 0;
}