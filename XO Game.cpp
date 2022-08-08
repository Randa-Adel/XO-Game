#include<iostream>
#include<string>
using namespace std;
struct point 
{
	string symbole;
}arr[3][3];

void print();
int playerX();
int playerY();
int checkX();
int checkY();
int invalidcheck(string x);
int main()
{
	char count = '1';
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			
			arr[i][j].symbole = count;
			count++;
		}
	}
	print();
	if (playerX())
		cout << "bye" << endl;
	  return 0;

}



void print()
{
	cout << "\t Tic Tac Toe " << endl;
	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	for (size_t i = 0; i < 3; i++)
	{
		cout << endl;
		for (size_t j = 0; j < 3; j++)
		{			
			cout << "  " << arr[i][j].symbole << "  ";
			if (j == 1 || j == 0)
				cout << "|";	
		}
		cout << endl;
		if (i!=2)
		    cout << "________________";
		cout << endl;
	}
}
int playerX()
{
	string x;	
	string g;
	
	cout << "Player 1, enter a number:" << endl;
	cin >> x;
	if (!invalidcheck(x))
	{
		getline(cin, g);
		getline(cin, g);
		system("cls");
		print();
		playerX();
	}
	
	for (size_t i = 0; i < 4; i++)
	{	
			for (size_t i = 0; i < 3; i++)
			{
				for (size_t j = 0; j < 3; j++)
				{
					if (arr[i][j].symbole != "X"&&arr[i][j].symbole != "O")
					{
						if (arr[i][j].symbole == x)
						{
							arr[i][j].symbole = "X";
						
							system("cls");
							print();
							
						}
					}
				}
			}
		}

		while (checkX())
		{
			system("cls");
			print();
			cout << "Player 1 is the winner !!" << endl;
			return 0;
		}
		playerY();
	
}
int playerY()
{ 
	string x;	
	string g;
     cout << "Player 2, enter a number:" << endl;
		cin >> x;
		if (!invalidcheck(x))
		{
			getline(cin, g);
			getline(cin, g);
			system("cls");
			print();
			playerY();
		}
		
		for (size_t i = 0; i < 3; i++)
		{
			
			for (size_t i = 0; i < 3; i++)
			{
				for (size_t j = 0; j < 3; j++)
				{
					if (arr[i][j].symbole != "X"&&arr[i][j].symbole != "O")
					{
						if (arr[i][j].symbole == x)
						{
							arr[i][j].symbole = 'O';
							
							system("cls");
							print();
							
						}
					}
				}
			}
		}
		while (checkY())
		{
			system("cls");
			print();
			cout << "Player 2 is the winner !!" << endl;
			return 0;

		}
		playerX();
}
int checkX()
{
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (arr[0][0].symbole == "X"&&arr[1][1].symbole == "X"&&arr[2][2].symbole == "X")
			{
				
				return 1;
			}
			else if (arr[0][2].symbole == "X"&&arr[1][1].symbole == "X"&&arr[2][0].symbole == "X")
			{
				
				return 2;
			}
			else if (arr[0][0].symbole == "X"&&arr[1][0].symbole == "X"&&arr[2][0].symbole == "X")
			{
				
				return 3;
			}
			else if (arr[0][1].symbole == "X"&&arr[1][1].symbole == "X"&&arr[2][1].symbole == "X")
			{
		
				return 4;
			}
			else if (arr[0][2].symbole == "X"&&arr[1][2].symbole == "X"&&arr[2][2].symbole == "X")
			{
				
				return 5;
			}
			else if (arr[0][0].symbole == "X"&&arr[0][1].symbole == "X"&&arr[0][2].symbole == "X")
			{
				
				return 6;
			}
			else if (arr[1][0].symbole == "X"&&arr[1][1].symbole == "X"&&arr[1][2].symbole == "X")
			{
				
				return 7;
			}
			else if (arr[2][0].symbole == "X"&&arr[2][1].symbole == "X"&&arr[2][2].symbole == "X")
			{
				
				return 8;
			}
			else
			{
				return 0;
			}
		}
	}
}
int checkY()
{
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (arr[0][0].symbole == "Y"&&arr[1][1].symbole == "Y"&&arr[2][2].symbole == "Y")
			{

				return 1;
			}
			else if (arr[0][2].symbole == "Y"&&arr[1][1].symbole == "Y"&&arr[2][0].symbole == "Y")
			{

				return 2;
			}
			else if (arr[0][0].symbole == "Y"&&arr[1][0].symbole == "Y"&&arr[2][0].symbole == "Y")
			{

				return 3;
			}
			else if (arr[0][1].symbole == "Y"&&arr[1][1].symbole == "Y"&&arr[2][1].symbole == "Y")
			{

				return 4;
			}
			else if (arr[0][2].symbole == "Y"&&arr[1][2].symbole == "Y"&&arr[2][2].symbole == "Y")
			{

				return 5;
			}
			else if (arr[0][0].symbole == "Y"&&arr[0][1].symbole == "Y"&&arr[0][2].symbole == "Y")
			{

				return 6;
			}
			else if (arr[1][0].symbole == "Y"&&arr[1][1].symbole == "Y"&&arr[1][2].symbole == "Y")
			{

				return 7;
			}
			else if (arr[2][0].symbole == "Y"&&arr[2][1].symbole == "Y"&&arr[2][2].symbole == "Y")
			{

				return 8;
			}
			else
			{
				return 0;
			}
		}
	}
}
int invalidchecks(string x)
{
	if (x > "9"|| x < "1")
	{
		cout << "Invalid Move" << endl;
		return 0;
	}
}