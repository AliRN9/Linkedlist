#pragma once
#include <string>
#include<iostream>

class Node
{
public:
	int Data;
	Node* Next = nullptr;
	Node(int data);
	std::string ToString();
};
