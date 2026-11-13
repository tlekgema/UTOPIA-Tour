#include <iostream>

using namespace std;
string name;
int lives = 20;
int option;

void left()
{
    cout<<"You have entered in a lake of fire kingdom "<<endl;
    cout<<"You are burning losing 5 lives"<<endl;
    lives = lives -5;
    cout<<"You have "<<lives<<" left"<<endl;
    cout<<"You have closed up by big Roman empire army"<<endl;
}
void middle()
{
    cout<<"You have entered in a lake of fire kingdom "<<endl;
    cout<<"You are burning losing 5 lives"<<endl;
    lives = lives -5;
    cout<<"You have "<<lives<<" left"<<endl;
}
void right()
{
    cout<<"You have entered in a lake of fire kingdom "<<endl;
    cout<<"You are burning losing 5 lives"<<endl;
    lives = lives -5;
    cout<<"You have "<<lives<<" left"<<endl;
}
}
void menu()
{
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"Welcome to UTOPIA Tour"<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"Warrior what is yr name"<<endl;
    getline(cin, name);
    cout<<"Hey there, "<<name<<endl;
    cout<<""<<endl;

    cout<<"In a jungle in the woods and have a big family and you notice you are a target in yr area and need to mve to UTOPIA to be saved"<<endl;
    cout<<""<<endl;

    cout<<"Yr Data : "<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<"NAME: "<<name<<endl;
    cout<<"Location : Egypt jungle"<<endl;
    cout<<"Lives :"<<lives<<endl;
    cout<<"*******************************************************"<<endl;


    cout<<"Enter 1 to go Left"<<endl;
    cout<<"Enter 2 to go Middle"<<endl;
    cout<<"Enter 3 to go Right"<<endl;
    cin>>option;
    switch(option)
    {
        case 1:
            left();
            break;
        case 2:
            middle();
            break;
        case 3:
            right();
            break;
        default:
            cout<<"Invalid option"<<endl;
            break;

    }
}
int main()
{
    do{
        menu();
    }
    while(option != 4);
    return 0;
}
