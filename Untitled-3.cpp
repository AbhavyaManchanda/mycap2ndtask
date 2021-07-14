#include <iostream>
using namespace std;
int main (){
    int age;
    cout<<"enter your age:";
    cin>>age;
    if(age>=18)
    {
        cout<<"you are eligible for voting:";

    }
    else{
        cout<<"you are not eligible for voting:";
        cout<<"wait for"<<18-age<<"years:";

    }
    



    return 0;
}