#include<iostream>
#include<string.h>
#include<cstring>
#include<stdlib.h>
using namespace std;
class Player
{
    private:
        int player_num,number_of_match,number_of_goal;
        string name;
        int *Goal_in_match;
    public:
        Player(int id, string name, int match)
        {
            player_num=id;
            this->name=name;
            number_of_match=match;
            Goal_in_match=new int[match];
        }
        Player(){}
        void SetGoalForEachMatch()
        {
            for(int i=0; i<number_of_match; i++)
            {
                cout<<"Enter number of goal in "<<i+1<<" match"<<endl;
                cin>>Goal_in_match[i];
            }
        }
        void DisplayData()
        {
            for(int i=0; i<number_of_match; i++)
            {
                cout<<"Goal in "<<i+1<<" match"<<endl;
                cout<<Goal_in_match[i]<<endl;
            }
        }
        ~Player()
        {
            delete[]Goal_in_match;
        }
};
int main()
{
    int playerId,number_of_match;
    string name;
    cout<<"Enter player ID: ";
    cin>>playerId;
    cin.ignore();
    cout<<"Enter player name: ";
    getline(cin,name);
    cout<<"Enter number of matches: ";
    cin>>number_of_match;
    Player P(playerId,name,number_of_match);
    P.SetGoalForEachMatch();
    system("cls");
    P.DisplayData();
    return 0;
}
