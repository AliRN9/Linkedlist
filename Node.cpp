#pragma once
#include "Node.h"
#include "List.h"


Node::Node(int data)
{

	Data = data;
	Next = nullptr;
}

std::string Node::ToString()
{
	std::string result = "";
	result +=std:: to_string(Data);
	return result;
}