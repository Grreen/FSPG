#pragma once
#include "Structs.h"

class List
{
	Node* head = nullptr;
	Node* last = nullptr;
	int count = 0;
public:

	void Add(int indexVertex, int weight);
	void Print(int index);
	int Count();
	int& operator[] (const int i);
};

