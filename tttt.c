#include <iostream>
#include <string>
#include <ctime>
#include<cstring>
#include<cctype>
#include<cstdio>
using namespace std;
int pos,row,col;
int i,j;
bool draw=false;
char result;
string player1,player2,fPlay;
char tic[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
bool gameover()
{
	for(i=0;i<3;i++)
	{
		if(tic[i][0]==tic[i][1] && tic[i][1]==tic[i][2])
		{
		result=tic[i][0];
		return false;
		}
	}
	for(i=0;i<3;i++)
	{
		if(tic[0][i]==tic[1][i] && tic[1][i]==tic[2][i])
		{
		result=tic[0][i];
		return false;
		}
	}
	if(tic[0][0]==tic[1][1] && tic[1][1]==tic[2][2])
	{
	result=tic[0][0];
	return false;
	}
	if(tic[0][2]==tic[1][1] && tic[1][1]==tic[2][0])
	{
	result=tic[0][2];
	return false;
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		if(tic[i][j]!='X' && tic[i][j]!='O')
		return true;
     	}
	}
	draw=true;
	return false;
}
void sleep(float seconds){
    clock_t startClock = clock();
    float secondsAhead = seconds * CLOCKS_PER_SEC;
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
string caps(string st)
{
    string uSt="";
   for(i=0;i<st.size();i++)
    uSt=uSt + (char)toupper(st[i]);
   return uSt;
}
int main()
{
	cout<<"Enter name of a player\n";
	cin>>player1;
	player1=caps(player1);
	cout<<"Enter name of another player\n";
	cin>>player2;
	player2=caps(player2);
	cout<<"\n\n\t\t Enter name of the player who wants to play first !\n";
	cin>>fPlay;
	fPlay=caps(fPlay);
	if(fPlay!=player1 && fPlay!=player2)
	{
	  cout<<"Enter VALID player name\n";
	  cout<<"\n\n\t\t Enter name of the player who wants to play first !\n";
      cin>>fPlay;
     fPlay=caps(fPlay);
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
	while(gameover())
	{
	display();
	if(fPlay==player1)
		cout<<"Keep on entering position from 1 to 9 where you want to put [X]\n";
	if(fPlay==player2)
		cout<<"Keep on entering position from 1 to 9 where you want to put [O]\n";
	player_turn();
	display();
    }
    if(result=='X')
    cout<<"\t\t\t  CONGRATULATIONS....!! "<<player1<<" has WON the game.\n\n\n";
    if(result=='O')
    cout<<"\t\t\t  CONGRATULATIONS....!! "<<player2<<" has WON the game.\n\n\n";
    if(draw==true)
    cout<<"\t\t\t\t   GAME ends in a DRAW...!!\n\n\n";
}
