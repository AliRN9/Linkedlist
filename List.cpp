#pragma once
#include"Node.h"
#include"List.h"


void List::AddElement(Node* node)
{
	if (head == nullptr)
	{
		head = node;
		return;
	}
	else {
		Node* p = head;
		while (p->Next != nullptr)
		{
			p = p->Next;
		}
		p->Next = node;
	}
}


void List:: Delete_node(int value)
{
	if (head == nullptr)
	{
		return;
	}
	Node* p = head;
	while (p->Data == value)
	{
		head = p->Next;
		delete p;
		p = head;
		if (p == nullptr)
		{
			return;
		}
	}
	Node* prev = head;
	while (p != nullptr)
	{
		if (p->Data == value)
		{
			prev->Next = p->Next;
			delete p;
			p = prev->Next;
		}
		else
		{
			prev = p;
			p = p->Next;
		}
	}
}


std::string List::coutString()
{
	std::string result;
	if (head == nullptr)
	{
		result = "list empty";
		return result;
	}
	Node* p = head;
	while (p->Next != nullptr)
	{
		result += std::to_string(p->Data);
		result += " ";
			p = p->Next;
	}
	result += std::to_string(p->Data);
	return result;
}





List::~List()
{
	Node* current = head;
	while (current)
	{
		Node* Next = current->Next;
		delete current;
		current = Next;
	}
}
