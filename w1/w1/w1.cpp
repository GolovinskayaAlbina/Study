// w1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"


int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int generated = rand()%10+1;//���������� ���������� ��������� ��� ������� �� 1 �� 10
	train someTrain;//������� ������ ������
	cout <<"������������� ����� - "<< generated<<endl;//���������� ���������� ���������
	someTrain.Add(generated);//������� ��� ������
	for (int i = 0; i < generated; i++)//��� ����������� ����������� ��� ������
	{
		someTrain.testPrint();
	}
	cout << endl;
	cout << endl;
	cout << "��������� �������� - " << someTrain.Count() << endl;//�������� ������� �������� � ������� ��������� ������
	someTrain.Print();//���������� ��������, ��� ��� ��� �������� �� ������ �������� ��������� � ������
	system("pause");
    return 0;
}

