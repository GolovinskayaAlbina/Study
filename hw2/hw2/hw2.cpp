// hw2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "list1way.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	int yes=0,number=0,choise=1;
	cout << "������� ������? 1 - ��, 0 �����" << endl;
	cin >> yes;
	if (!yes)
		return 0;
	list1way list;
	cout << "������� ������ �������" << endl;
	cin >> number;
	list.Init(number);
	cout << "��� ������?" << endl;
	cout << "1. �������� ������� � ������ ����� ��������" << endl;
	cout << "2. ������� ������� �������" << endl;
	cout << "3. ������ �� ������" << endl;
	cout << "4. ��������� � ������ ������" << endl;
	cout << "5. ����� �������� ��������" << endl;
	cout << "6. ������ ������" << endl;
	cout << "7. ������� 1�� ������� ������" << endl;
	cout << "8. ����� ������" << endl;
	cout << "0. ��������� ������" << endl;
	while (choise!=0)
	{
		cout << endl;
		list.ShowCurrent();
		cout << "������� ����� ����" << endl;
		cin >> choise;
		switch (choise)
		{
		case 1:
			cout << "������� ��������" << endl;
			cin >> number;
			list.Add(number);
			break;
		case 2:
			list.ClearCurrent();
			break;
		case 3:
			list.Move();
			break;
		case 4:
			list.MoveToHead();
			break;
		case 5:
			list.ShowCurrent();
			break;
		case 6:
			list.PrintList();
			break;
		case 7:
			list.DeleteHead();
			break;
		case 8:
			list.ListLenthg();
			break;
		case 0:
		default:
			break;
		}
		
	}

    return 0;
}

