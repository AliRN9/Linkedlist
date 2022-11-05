#pragma once
#include "Node.h"
#include <string>


class List
{
public:
	Node* head;
	List();
	std::string coutString();
	void AddElement(Node* node);
	void Delete_node(int value);
	
};
