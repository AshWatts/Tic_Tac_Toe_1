#include<bits/stdc++.h>
using namespace std;


char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int choice;
int row,col;
char turn='x';
bool state=false;


void display_data()
{
    cout<<"\t"<<board[0][0]<<"\t|\t"<<board[0][1]<<"\t|\t"<<board[0][2]<<"\n";
    cout<<"\t---------------------------------\n";
    cout<<"\t"<<board[1][0]<<"\t|\t"<<board[1][1]<<"\t|\t"<<board[1][2]<<"\n";
    cout<<"\t---------------------------------\n";
    cout<<"\t"<<board[2][0]<<"\t|\t"<<board[2][1]<<"\t|\t"<<board[2][2]<<"\n\n";
}


void get_data()
{
    if(turn=='x')
    {
        cout<<"Player 1 turn : ";
    }
    else if(turn=='o')
    {
        cout<<"Player 2 turn : ";
    }

    cin>>choice;

    switch(choice)
    {
        case 1 : row=0; col=0; break;
        case 2 : row=0; col=1; break;
        case 3 : row=0; col=2; break;
        case 4 : row=1; col=0; break;
        case 5 : row=1; col=1; break;
        case 6 : row=1; col=2; break;
        case 7 : row=2; col=0; break;
        case 8 : row=2; col=1; break;
        case 9 : row=2; col=2; break;
        default:
        cout<<"Enter a Valid Position!";
    }

    if(turn=='x' && board[row][col]!='x' && board[row][col]!='o')
    {
        board[row][col]='x';
        turn='o';
    }

    if(turn=='o' && board[row][col]!='x' && board[row][col]!='o')
    {
        board[row][col]='o';
        turn='x';
    }

    else
    {
        cout<<"Box Already Filled!\n";
        get_data();
    }
}



bool game_over()
{
    
}



int main()
{
    cout<<"TIC TAC TOE GAME : \n\n";
    cout<<"Player 1 - [x]\t\t";
    cout<<"Player 2 - [o]\n\n";

    while(game_over())
    {
        display_data();
        get_data();
        game_over();
    }
}