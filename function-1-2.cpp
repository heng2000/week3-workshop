#include<iostream>
#include<string>
using namespace std;
//grade--report_card;course_name--courses;name--students
void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents);
void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents)
{
    //initialize coutse_name
    for (int i =0;i<4;i++)
    {
        //cout<<"enter the name of the course: ";
        cin>>courses[i];
    }

    //initialize student names
    for (int j =0;j<nstudents;j++)
    {
        //cout<<"enter student's name: ";
        cin>>students[j];
    }

    //initialize grades
    for (int q =0;q<nstudents;q++)
    {
        for (int w =0;w<4;w++)
        {
            //cout<<"your grades;";
            cin>>report_card[q][w];
        }
    }

    //output course's names
    cout<<"Report Card ";

    //students' name
    /*students[1]={"average"};
    students[2] ={'smart'};
    students[3] ={"genius"};*/


    for (int e =0;e<4;e++)
    {
        cout<<courses[e];
        if (e!=3)
        {
            cout<<" ";
        }
    }
    cout<<endl;

    //output each students'gardes
    for (int m =0;m<nstudents;m++)
    {
        cout<<students[m]<<" ";
        for (int n =0;n<4;n++)
        {
            cout<<report_card[m][n];
            if(n!=3)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}