
#include <iostream>
#include <string>
using namespace std;

class Exercise
{
    string exercise;
    int sets;
    int reps;

public:
    Exercise ()
    {
        sets = 0;
        reps = 0;
    }

    void get_data()
    {
        cout<<"Enter the name of the Exercise:"<<endl;
        getline(cin, exercise);
        cout<<"\nEnter number of sets:"<<endl;
        cin>>sets;
        cout<<"\nEnter number of reps per set:"<<endl;
        cin>>reps;
        cout<<endl;
    }

    void display()
    {
        cout<<"Exercise: "<<exercise<<endl;
        cout<<sets<<"x"<<reps<<endl;
    }
};

int main()
{
    Exercise E1;
    E1.get_data();
    E1.display();
}
