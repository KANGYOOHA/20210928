#include <iostream>
#include <windows.h> //windows 헤더파일 include

using namespace std;

char Input();
void Process(char Key);
void Render();

//개발자가 구현하는 Process
void OnKeyPress(char Key);

//개발자가 구현하는 Render
void PostRender();

bool bGameState = true;

int Gold = 0;

int main()
{

	while (bGameState)
	{
		char Key = Input();
		Process(Key);
		Render();
	}
	return -1;
}

char Input()
{
	char Key;
	cin >> Key;
	return Key;
}

void Process(char Key)
{
	cout << Key << endl; //log

	if (Key == 'Q' || Key == 'q')
	{
		bGameState = false;
	}

	//사용자(개발자)가 구현하는 Process
	OnKeyPress(Key);
}

void Render()
{
	system("cls");
	cout << "그린다." << endl;

	PostRender();
}

void OnKeyPress(char Key)
{
	if (Key == 'G' || Key == 'g')
	{
		Gold++;
	}
}
void PostRender()
{
	cout << "Gold : " << Gold << endl;
}




