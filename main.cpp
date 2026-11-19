#include <iostream>

using namespace std;
string name;
int lives = 20;
int options;

void left()
{
    cout<<"You have entered in a lake of fire kingdom "<<endl;
    cout<<"You are burning losing 5 lives"<<endl;
    lives = lives -5;
    cout<<"You have "<<lives<<" left"<<endl;
    cout<<"A dangerous Demon appears in front of you"<<endl;
    cout<<"You must defeat the Demon to continue the journey"<<endl;
    cout<<"Warrior choose yr weapon"<<endl;
    cout<<"Enter 1 for normal sword"<<endl;
    cout<<"Enter 2 for magical water sword"<<endl;
    cout<<"Choose any choice"<<endl;
    cin>>options;
    if(options ==1)
    {
        cout<<"You attacked the demon with a normal sword"<<endl;
        cout<<"The sword melted"<<endl;
        cout<<"The demon is too powerful and he laughs"<<endl;
        cout<<"The demon Kills you!"<<endl;
        lives = 0;
        cout<<"K.O! YOU ARE DEAD"<<endl;
    }
    else if(options == 2)
    {
        cout<<"You attacke the Demon with a magical water sword"<<endl;
        cout<<"The water swords is weakening the Demon"<<endl;
        cout<<"YOU have successfull killed the Demon! Well done warrior"<<endl;
        lives = lives + 1;
        cout<<"You have "<<lives<<" lives left."<<endl;
    }
    cout<<"you continued yr journey!"<<endl;
    cout<<"The road splits in to 2 ways"<<endl;
    cout<<"Where do u desire to go"<<endl;
    cout<<"Enter 1 to go left"<,endl;
    cout<<"Enter 2 to go right"<<endl;
    cin>>options;
    if(options ==1)
    {
        cout<<"You went left"<<endl;
        cout<<"There's no road"<<endl;
        cout<<"Yr journey ends here warrior"<<name<<endl;
    else if(options ==2)
    {
        cout<<"You have went right"<,endl;
        cout<<"You have continued yr journey"<<endl;
        cout<<"You reach to the bridge of Lost souls"<,endl;
        cout<<"and there's no more road"<<endl;
    }
    else
    {
        cout<<"Invalid Direction"<<endl;
    }
    cout<<"You have "<<lives<<" lives left"<<endl;
void middle()
{
    cout<<"You have entered in the city of Cairo"<<endl;
    cout<<"You are been stopped by Roman empire guards on the gates of Cairo"<<endl;
    cout<<"The solider says: Nobody enters the city without permission"<<endl;
    cout<<"What will you do"<<endl;
    cout<<"Enter 1 to fight the Roman soliders"<<endl;
    cout<<"Enter 2 to surrender"<<endl;
    cout<<"Enter 3 to bribe the soliders"<<endl;
    cin>>options;
    if(options == 1)
    {
        cout<<"You fighting with Roman soliders"<<endl;
        cout<<"You killed the 1 solider"<<endl;
        cout<<"More soliders come to assist "<<endl;
        cout<<"You are been captured and drown to prison"<<endl;
        cout<<"You are been judged! and you are been sentenced to death"<<endl;
        cout<<"You are DEAD"<<endl;
        lives = 0;
    }
    else if(option == 2)
    {
        cout<<"The solider captured you"<<endl;
        cout<<"You are taken to Roman prison"<<endl;
        cout<<"GAME OVER"<<endl;
        lives = 0;
    }
    else if(options == 3)
    {
        cout<<"You give the soliders 20 cins of gold"<<endl;
        cout<<"THe soliders accepts and let's you go through"<<endl;
        cout<<"-----------Warning------------"<<endl;
        cout<<"The General has know you are around the city"<<endl;
        cout<<"General: soliders! The crinimal"<<name<<" Is around the city! And i want him captured and alive"<<endl;
        cout<<"You must hide before they find you"<<endl;
        cout<<"Where will you hide warrior"<<endl;
        cout<<"Enter 1 to stay in the city"<<endl;
        cout<<"Enter 2 to escape to the village"<<endl;
        cin>>options;
        if(options == 1)
        {
            cout<<"You stayed in the city"<<endl;
            cout<<"You tried to find a palce hide for the night"<<endl;
            cout<<"But Roman soliders see and surrond you"<<endl;
            cout<<"Roman solider capture you and drow you to prision"<<endl;
            cout<<"The Roman general mets you in Prison and decides your sentence"<<endl;
            cout<<"You are sentenced to life in prison! and do hard labour"<<endl;
            lives = 0;
            cout<<"GAME OVER"<<endl;
        }
        else if(options == 2)
        {
            cout<<"YOU decided to run away to the village"<<endl;
            cout<<"You found a place to hide and rest for the night"<<endl;
            cout<<"Roman Soliders  can't find you "<<endl;
            cout<<"You are safe  until the next day"<<endl;
            cout<<"You regained 5 lives"<<endl;
            lives = + 5;
            cout<<"The Next Morning"<<endl;
            cout<<"You wake up in the village"<<endl;
            cout<<"YOu are now close to home warrior"<<endl;
            cout<<"You have 2 choices:"<<endl;
            cout<<"Enter 1 to wait for a while"<<endl;
            cout<<"Enter 2 to leave early in the morning to get to final destination"<<endl;
            cin>>options;
            if(options == 1)
            {
                cout<<"You have decide to wait for a while"<<endl;
                cout<<"Roman soliders and General have arrived to the village"<<endl;
                cout<<"They search the whole entire village! and you hear that they close"<<endl;
                cout<<"You tried to run but the soliders caught  and captured you"<<endl;
                cout<<"You have been captured and drown to prison"<<endl;
                cout<<"You are taken infront of everyone and slaugthered"<<endl;
                cout<<"You ARE DEAD"<<endl;
                lives = 0;
            }
            else if(options == 2)
            {
                cout<<"You have decide to leave the village early"<<endl;
                cout<<"You traveled toward the river of Cairo"<<endl;
                cout<<"There's 2 boats waiting by the river"<<endl;
                cout<<"Enter 1 to first boat"<<endl;
                cout<<"Enter 2 to second boat"<<endl;
                cin>>options
                if(options == 1)
                {
                    cout<<"You have entered the first boat"<<endl;
                    cout<<"You are going to the city of Alexandria"<<endl;
                    cout<<"You ahve arrived to the city"<<endl;
                    cout<<"The journey continues"<<endl;
                }
                else if(options == 2)
                {
                    cout<<"You entered the second boat"<<endl;
                    cout<<"You are heading to UTOPIA"<<endl;
                    cout<<"After a long journey, You have finally arrived at UTOPIA"<<endl;
                    cout<<"WELCOME HOME! KING"<<name<<" Yr people ahve been waiting"<<endl;
                    cout<<"You have successfully reached UTOPIA"<<endl;
                }
                else
                {
                    cout<<"Invalid boat choice"<<endl;
                }
                
void right()
{
    cout<<"You have entered in the kingdom of snow valley "<<endl;
    cout<<"You are freezing losing 5 lives"<<endl;
    lives = lives -5;
    cout<<"You have "<<lives<<" left"<<endl;
    cout<<"There's a Long mountain and graves of Old Generals and Kings of aLL Kingdoms"<<endl;
    cout<<"There are guards coming after you "<<endl;
    cout<<"Enter 1 to surrender to becaome a prisoner"<<endl;
    cout<<"Enter 2 to Kill the Guards"<<endl;
    cin>>options;
    if(options ==1)
    {
        cout<<"You have chosen to surrender"<<endl;
        cout<<"They capture you and take you to prison"<<endl;
        cout<<"You are sentenced to death"<<endl;
        cout<<"You are killed"<<endl;
        cout<<"GAME OVER"<<endl;
        lives = 0;
    }
    else if(options == 2)
    {
        cout<<"You attack the guard"<<endl;
        cout<<"There's too may guard "<<endl;
        cout<<"You are killed by guards"<<endl;
        cout<<"GAME OVER"<<endl;
    }
    else
    {
        cout<<"Invalid choice"<<endl;
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
