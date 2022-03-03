//using inline functions
#include<iostream>
using namespace std;
inline void add(int x, int y); //function declaration: to intialize the data to variables
int main()
{
    add(10,20); //function call: taking input to store the data in variables 
    return 0;
}
inline void add(int x, int y) //function defination 
{
    cout<<"Addition of "<<"x+y = "<<(x+y); // to display the result
}