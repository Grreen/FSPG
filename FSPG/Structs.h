#pragma once
#include <list>
#include <string>

using namespace std;

/// <summary>
/// —трукткра, котора€ хранит данные о найденном пути.
/// </summary>
struct Way
{
	int length = 0;
	int* way = nullptr;
	int count = 0;
	int start = 0;
	int finish = 0;
};

/// <summary>
/// —трукткра, котора€ хранит данные о типе хранени€ данных о графе(matrix/list), размере графа и значени€х вершин.
/// </summary>
struct Data
{
	int sizeGraph = 0;
	list<string> values;
	string typeConvert;
};

/// <summary>
/// —трукткра, котора€ хранит данные о вершинах графа (индекс, вес до вершины и указатель на следующую вершину).
/// </summary>
struct Node
{
	int indexVertex;
	int weight;
	Node* next;
};