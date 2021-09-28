#include <iostream>
#include <windows.h> //windows ������� include

using namespace std;

char Input();
void Process(char Key);
void Render();

//�����ڰ� �����ϴ� Process
void OnKeyPress(char Key);

//�����ڰ� �����ϴ� Render
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

	//�����(������)�� �����ϴ� Process
	OnKeyPress(Key);
}

void Render()
{
	system("cls");
	cout << "�׸���." << endl;

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




