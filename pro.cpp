#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int pos,row,col;
string player1,player2,fPlay;
char tic[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
void sleep(float seconds){
    clock_t startClock = clock();
    float secondsAhead = seconds * CLOCKS_PER_SEC;
    // do nothing until the elapsed time has passed.
    while(clock() < startClock+secondsAhead);
    return;
}
void player_turn()
{
	cin>>pos;
		switch(pos)
		{
			case 1:row=0,col=0;
			break;
			case 2:row=0,col=1;
			break;
			case 3:row=0,col=2;
			break;
			case 4:row=1,col=0;
			break;
			case 5:row=1,col=1;
			break;
			case 6:row=1,col=2;
			break;
			case 7:row=2,col=0;
			break;
			case 8:row=2,col=1;
			break;
			case 9:row=2,col=2;
			break;
			default:;
		}
		if(fPlay==player1 && tic[row][col]!='X' && tic[row][col]!='O' && pos<10)
		{
			tic[row][col]='X';
			fPlay=player2;
		}
		else if(fPlay==player2 && tic[row][col]!='X' && tic[row][col]!='O'&& pos<10)
		{
			tic[row][col]='O';
			fPlay=player1;
		}
		else if(pos<1 || pos>9)
        {
            cout<<"Enter valid position from 1 to 9  \n";
            cout<<"TRY for VALID position\n";
            player_turn();
        }
        else
        {
            cout<<"Position already filled !!!!  \n";
            cout<<"TRY for VALID position\n";
            player_turn();
        }
}
void display()
{
	system("cls");
	cout<<"\n\t\t\t\tTIC-----TAC-----TOE\n\n\n";
	cout<<"\t\t\t\t"<<player1<<" = [X] \n";
	cout<<"\t\t\t\t"<<player2<<" = [O] \n";
	cout<<"\n\n\t\t\t\t        |        |        \n";
	cout<<"\t\t\t\t      "<<tic[0][0]<<" |      "<<tic[0][1]<<" |    "<<tic[0][2]<<"   \n";
	cout<<"\t\t\t\t________|________|_________\n";
	cout<<"\t\t\t\t        |        |        \n";
	cout<<"\t\t\t\t      "<<tic[1][0]<<" |      "<<tic[1][1]<<" |    "<<tic[1][2]<<"   \n";
	cout<<"\t\t\t\t________|________|_________\n";
	cout<<"\t\t\t\t        |        |        \n";
	cout<<"\t\t\t\t      "<<tic[2][0]<<" |      "<<tic[2][1]<<" |    "<<tic[2][2]<<"   \n";
	cout<<"\t\t\t\t        |        |        \n\n\n";
}

int main()
{
	cout<<"Enter name of both players\n";
	cin>>player1;
	cin>>player2;
	cout<<"\n\n\t\t Enter name of the player who wants to play first !\n";
	cin>>fPlay;
	if(fPlay!=player1 && fPlay!=player2)
	{
	  cout<<"Enter VALID player name\n";
	  cout<<"\n\n\t\t Enter name of the player who wants to play first !\n";
      cin>>fPlay;
	}
	if(fPlay==player1)
	{
	cout<<player1<<" plays first and will fill [X] !!\n";
	}
	if(fPlay==player2)
	{
	cout<<player2<<" plays first and will fill [O] !!\n";
	}
	sleep(1.0);
	while(1)
	{
	display();
	if(fPlay==player1)
		cout<<"Keep on entering position from 1 to 9 where you want to put [X]\n";
	if(fPlay==player2)
		cout<<"Keep on entering position from 1 to 9 where you want to put [O]\n";
	player_turn();
	display();
    }
}
