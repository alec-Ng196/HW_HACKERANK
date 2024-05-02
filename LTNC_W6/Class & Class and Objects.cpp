//
// Created by Admin on 2/5/2024.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

class student
{
private:
    int age;
    string first_name;
    string last_name;
    int standard;

public:
    int a,s;
    string f,l;
    void set(int a,string f,string l,int s)
    {
        age=a;
        first_name=f;
        last_name=l;
        standard=s;
    }

    int get_age(){
        return age;
    }

    string get_first_name(){
        return first_name;
    }
    string get_last_name(){
        return last_name;
    }
    int get_standard(){
        return standard;
    }
    string addall(){
        stringstream ss;
        ss<<age<<","<<first_name<<","<<last_name<<","<<standard;
        string addedstring;
        ss>>addedstring;
        return addedstring;

    }
};


int main()
{
    student student1;
    cin>>student1.a;
    cin>>student1.f;
    cin>>student1.l;
    cin>>student1.s;
    student1.set( student1.a,student1.f,student1.l,student1.s);
    cout<<student1.get_age()<<endl;
    cout<<student1.get_last_name()<<", "<<student1.get_first_name()<<endl;
    cout<<student1.get_standard()<<endl;
    cout<<endl;
    cout<<student1.addall();

    return 0;
}
/*
 #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class student
{
    public:
        int score[5];
        void input()
        {
            for (int i = 0; i < 5; i++)
            {
                cin >> score[i];
            }
        }

        int calculateTotalScore()
        {
            int sum = 0;
            for (int i = 0; i < 5; i++)
            {
                sum+= score[i];
            }
            return sum;
        }

};

int main() {
    int n;
    cin >> n;

    student *st = new student[n];

    for (int i = 0; i < n; i++)
    {
        st[i].input();
    }

    int spscore = st[0].calculateTotalScore();

    int nscore = 0;
    int result;
    for (int i = 0; i < n; i++)
    {
        result = st[i].calculateTotalScore();
        if (result > spscore) nscore+= 1;
    }

    cout << nscore;

    return 0;
}
 */