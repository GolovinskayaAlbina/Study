#pragma once
#include "stdafx.h"
#include "node.h"

class list1way
{
private:
	//remove _current point
	node* _current;
	node* head;
	//remove length
	int length;
public:

	list1way()
	{
		cout << "Ðàáîòà êîíñòðóêòîðà" << endl;
		_current = NULL;
		head = NULL;		
	}

	void Init(int value)
	{
		head = new node;
		head->data = value;
		head->next = NULL;
		_current = head;
		length++;
	}

	void Add(int value)
	{
		if (head==NULL)
		{
			Init(value);
		}
		else
		{
			node* temp = new node;
			node* p;
			p = _current->next;
			_current->next = temp;
			temp->data = value;
			temp->next = p;
			cout << "Ýëåìåíò äîáàâëåí" << endl;
			length++;
		}
		
	}

	void ClearCurrent()
	{
		if (_current = head)
		{
			DeleteHead();
		}
		else 
		{
			node* temp;
			temp = head;
			while (temp->next != _current)
			{
				temp = temp->next;
			}
			temp->next = _current->next;
			delete _current;
			_current = temp;
			length--;
		}
	}

	void Move()
	{
		if (_current->next == NULL)
		{
			cout << "Êîíåö ñïèñêà" << endl;
		}
		else
		{
			_current = _current->next;
		}

	}

	void ShowCurrent()
	{
		cout << "Òåêóùåå çíà÷åíèå ýëåìåíòà " << _current->data << endl;
	}

	void MoveToHead()
	{
		_current = head;
	}

	void PrintList()
	{
		node* temp;
		temp = head;
		cout << "Ïîëíûé ñïèñîê ";
		for (int i = 0; i < length; i++)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}

	void DeleteHead()
	{
		node* temp;
		if (head->next==NULL)
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

	void ListLenthg()
	{
		cout << "Äëèíà ñïèñêà " << length << endl;
	}

	~list1way()
	{
		cout << "Ðàáîòà äåñòðóêòîðà" << endl;
		if (head!=NULL)
		{
			for (int i = 0; i < length; i++)
			{
				DeleteHead();
			}
		}

	}
};

