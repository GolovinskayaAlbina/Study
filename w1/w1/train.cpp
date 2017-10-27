#include "stdafx.h"
#include "train.h"


train::train()
{
	_current = NULL;
}

train::~train()
{
}

void train::Add(int value)//�������� ��������� ����� ��� �������� ������
{
	node* temp;//��������������� ��������� ��� ��������
	node* p;
	_current = (node*)malloc(sizeof(node));//�������� ������ ��� 1�� ������
	_current->light = rand() % 2;//��������� �������� 0 �� 1
	_current->next = _current;//� ��� ����������� ������ ������� ��������� ��� �� ����
	_current->prev = _current;
	for (int i = 1; i < value; i++)//������ ������� ������, ��������� ����������
	{
		temp = (node*)malloc(sizeof(node));//������ ��� ��������� �������
		p = _current->next;//���������� ��������� �� ��������� �������
		_current->next = temp;//������� ������� ������ ��������� �� �����
		temp->light = rand() % 2;//������������� ��������
		temp->next = p;//����� ������� ������ ��������� �� ���������
		temp->prev = _current;//����� ������� ����� ��������� �� �������
		p->prev = temp;//��������� ������ ����� ��������� �� �����
		_current = temp;//����� ������� ���������� �������
	}
}

void train::Print()
{
	int count = Count();
	while (count-- > 0)
	{
		cout << _current->light << ",";
		_current = _current->next;
	}
	cout << endl;
}

void train::testPrint()
{
	cout << _current->light << ",";
	_current = _current->next;
}

int train::Count()
{
	if (_current == NULL)
	{
		return 0;
	}
	int counter = 0,steps=0;
	_current->light = !_current->light; 
	bool startLight = _current->light;
	while(true)
	{
		_current = _current->next;
		steps++;
		if (_current->light==startLight)
		{
			_current->light = !startLight;
			for (int j = 0; j < steps; j++)
			{
				_current=_current->prev;
				counter++;
			}
			if (_current->light!=startLight)
			{
				return counter;
			}
			else
			{
				steps = 0; counter = 0;
			}
		}
	}
}
