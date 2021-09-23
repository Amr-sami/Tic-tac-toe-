#include <iostream>
#include <iomanip>
using namespace std;
class game {
    char a[3][3] = {
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'}
    };
    char player = 'X';
public:
    void draw();
    void getInput();
    void changePlayer();
    char winner();

};
void game::draw()
{
    system("cls");                // clear screen 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << setw(5) << a[i][j];  // make a space
        }
        cout << endl;
    }
}

void game::getInput()     // function to get input from user 
{
    int choise;
    cout << "it's turn " <<  "[" << player << "] " << "press number of the field : \n";
    cin >> choise;
    if (choise == 1)
    {
        if (a[0][0] == '1')             // the value of index not changed yet
        {
            a[0][0] = player;
        }
        else                             // if the index has a value X or O
        {
            cout << "Already reserved !"; 
            getInput();

        }
    }
    else if (choise == 2)
    {
        if (a[0][1] == '2')
            a[0][1] = player;
        else
        {
            cout << "Already reserved !";
            getInput();

        }
    }
    else if (choise == 3)
    {
        if (a[0][2] == '3')
              a[0][2] = player;
        else
        {
            cout << "Already reserved !";
            getInput();
        }
        
    }
    else if (choise == 4)
    {
        if (a[1][0] == '4')
            a[1][0] = player;
        else
        {
            cout << "Already reserved !";
            getInput();
        }
    }
    else if (choise == 5)
    {
        if (a[1][1] == '5')
            a[1][1] = player;
        else
        {
            cout << "Already reserved !";
            getInput();
        }
    }
    else if (choise == 6)
    {
        if (a[1][2] == '6')
            a[1][2] = player;
        else
        {
            cout << "Already reserved !";
            getInput();
        }
    }
    else if (choise == 7)
    {
        if (a[2][0] == '7')
            a[2][0] = player;
        else
        {
            cout << "Already reserved !";
            getInput();
        }
    }
    else if (choise == 8)
    {
        if (a[2][1] == '8')
            a[2][1] = player;
        else
        {
            cout << "Already reserved !";
            getInput();
        }
    }
    else if (choise == 9)
    {
        if (a[2][2] == '9')
            a[2][2] = player;
        else
        {
            cout << "Already reserved !";
            getInput();
        }
    }
    else
    {
        cout << "invalid choise!" << endl;
        getInput();
    }

    
}


 void game :: changePlayer()
    {
        if (player == 'X')
            player = 'O';
        else
            player = 'X';
    }
 char game::winner()
 {         
     // first player
     if (a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'X')
         return 'X';
     if (a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'X')
         return 'X';
     if (a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == 'X')
         return 'X';
     if (a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X')
         return 'X';
     if (a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X')
         return 'X';
     if (a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'X')
         return 'X';
     if (a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X')
         return 'X';
     if (a[2][0] == 'X' && a[1][1] == 'X' && a[0][2] == 'X')
         return 'X';
     //second player
     if (a[0][0] == 'O' && a[0][1] == 'O' && a[0][2] == 'O')
         return 'O';
     if (a[1][0] == 'O' && a[1][1] == 'O' && a[1][2] == 'O')
         return 'O';
     if (a[2][0] == 'O' && a[2][1] == 'O' && a[2][2] == 'O')
         return 'O';
     if (a[0][0] == 'O' && a[1][0] == 'O' && a[2][0] == 'O')
         return 'O';
     if (a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == 'O')
         return 'O';
     if (a[0][2] == 'O' && a[1][2] == 'O' && a[2][2] == 'O')
         return 'O';
     if (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O')
         return 'O';
     if (a[2][0] == 'O' && a[1][1] == 'O' && a[0][2] == 'O')
         return 'O';
     return '/';

 }


int main()
{
    int n = 0;           // number of elemnts can we insert
    game g_stock;
    g_stock.draw();
    while (true)
    {
        n++;
        g_stock.getInput();  
        g_stock.draw();
        if (g_stock.winner() == 'X')
        {
            cout << "Player X wins" << endl;
            break;
        }
        else if (g_stock.winner() == 'O')
        {
            cout << "Player O wins " << endl;
            break;
        }
        else if (g_stock.winner() == '/' && n == 9)
        {
            cout << "Draw ! " << endl;
            break;
        }
        g_stock.changePlayer();


     }
    return 0;
}