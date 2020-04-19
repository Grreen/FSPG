#pragma once
#include <list>
#include <string>

using namespace std;

struct Way
{
	int length = 0;
	int* way = nullptr;
	int count = 0;
	int start = 0;
	int finish = 0;
};

struct Data
{
	int sizeGraph = 0;
	list<string> values;
	string typeConvert;
};

struct Node
{
	int indexVertex;
	int weight;
	Node* next;
};