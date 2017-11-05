#pragma once
#include "node.h"
#include "stdafx.h"
#include "rndarray.h"
//����� ���-�������
class hashtable
{
//��������� �� ������ �������, ������� ������� � ����� ������� 
private:
	node* head;
	node* _current;
	int length;
	void DeleteHead();//������������ � �����������
public:
	hashtable();//����������� ����������� �������� ��������� ���������� � ����� �������
	void Add(int key_value, int array_index);//������� � ��������� ������ � �������
	void Find(int key_value);//����� �������� �� ��������, ����� �������������� �������� � �������
	void PrintList();//����� ������� �� �����
	~hashtable();//����������� ������
};

hashtable::hashtable()
{
	head = NULL;
	_current = NULL;
	length = 0;
}

void hashtable::Add(int key_value, int array_index)
{
	if(head==NULL)
	{
		head = new node;
		head->index = array_index;
		head->value = key_value;
		head->next = NULL;
		_current = head;
		length++;
	}
	else
	{
		node* temp = new node;
		_current->next = temp;
		temp->index = array_index;
		temp->value = key_value;
		temp->next = NULL;
		_current = temp;
		length++;
	}
}

void hashtable::Find(int key_value)
{
	_current = head;
	for (int i = 0; i < length; i++)
	{
		if (_current->value == key_value)
		{
			cout << "������� �� ��������� " << key_value << " ��������� ��� �������� " << _current->index<<endl;
		}
		_current = _current->next;
	}
}

void hashtable::PrintList()
{
	node* temp;
	temp = head;
	cout << "������ ������ " << length << ": ";
	for (int i = 0; i < length; i++)
	{
		cout << temp->value << " ";
		temp = temp->next;
	}
	cout << endl;
}

void hashtable::DeleteHead()
{
	node* temp;
	if (head->next == NULL)
	{
		delete head;
		length--;
		head = NULL;
	}
	else
	{
		temp = head->next;
		delete head;
		head = temp;;
		length--;
	}
}

hashtable::~hashtable()
{
	if (head != NULL)
	{
		for (int i = 0; i < length; i++)
		{
			DeleteHead();
		}
	}
}