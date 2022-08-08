#include<iostream>
#include<ctime>
using namespace std;
extern void printer(int array[10][10]);

int main()
{
    srand(time(0));
    int array[10][10];
    for (int i=0;i<10;i++)
    {
        for(int j =0;j<01;j++)
        {
            array[i][j]=rand()%100;
        }
    }
    printer(array);
    return 0;
}