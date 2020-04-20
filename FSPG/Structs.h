#pragma once
#include <list>
#include <string>

using namespace std;

/// <summary>
/// Структкра, которая хранит данные о найденном пути.
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
/// Структкра, которая хранит данные о типе хранения данных о графе(matrix/list), размере графа и значениях вершин.
/// </summary>
struct Data
{
	int sizeGraph = 0;
	list<string> values;
	string typeConvert;
};

/// <summary>
/// Структкра, которая хранит данные о вершинах графа (индекс, вес до вершины и указатель на следующую вершину).
/// </summary>
struct Node
{
	int indexVertex;
	int weight;
	Node* next;
};