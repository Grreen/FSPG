#pragma once
#include <string>
#include <iostream>
#include <list>
#include "List.h"
#include "Structs.h"

using namespace std;

/// <summary>
/// Класс, который представляет основной функционал.
/// </summary>
static class  Algorithms
{
/// <summary>
/// Функция, которая парсит входные данные и преобразует их в числовую матрицу.
/// <param name="edges">Строки, содержащие данные о ребрах и вершинах графа.</param>
/// <param name="sizeMatrix">Количество вершин графа.</param>
/// </summary>
	static int** ConvertToMatrix(list<string> edges, int sizeMatrix);
/// <summary>
/// Функция, которая парсит входные данные и преобразует их в односвязанный список.
/// <param name="edges">Строки, содержащие данные о ребрах и вершинах графа.</param>
/// <param name="sizeMatrix">Количество вершин графа.</param>
/// </summary>
	static List* ConvertToList(list<string> edges, int sizeMatrix);
/// <summary>
/// Функция, которая считывает данные из файла и на их основании решает как хранить граф в памяти (matrix / link).
/// <param name="filename">Содержит название файла, в котором хранятся данные.</param>
/// </summary>
	static Data ReadFile(string filename);

/// <summary>
/// Функция, которая находит кратчайший путь от начальной вершины до конечной.
/// <param name="matrix">Содержит данные о вершинах.</param>
/// <param name="sizeMatrix">Количество вершин графа.</param>
/// <param name="start">Номер вершины, от которой будет построен путь.</param>
/// <param name="finish">Номер вершины, до которой будет построен путь.</param>
/// </summary>
	template <class T>
	static Way FindingWay(T matrix, const int sizeMatrix, int start, int finish);

public:
/// <summary>
/// Основная функция, которая находит кратчайший путь от начальной вершины до конечной.
/// <param name="argc">Количество элементов командной строки.</param>
/// <param name="argv">Аргументы командной строки.</param>
/// </summary>
	static void FindWay(int argc, char* argv[]);
};

//----------------------------------------------------------------------------------------------------------//
template <class T>
Way Algorithms::FindingWay(T matrix, const int sizeMatrix, int start, int finish)
{
	Way way;

	if (start <= 0 || start > sizeMatrix)
	{
		cout << "Error. The start point was entered incorrectly." << endl;
		return way;
	}

	if (finish <= 0 || finish > sizeMatrix)
	{
		cout << "Error. The finish point was entered incorrectly." << endl;
		return way;
	}

	int beg = start - 1;
	int* distMin = new int[sizeMatrix];
	int* vertex = new int[sizeMatrix];
	int minIndex, min;

	for (int i = 0; i < sizeMatrix; i++)
	{
		distMin[i] = INT_MAX;
		vertex[i] = 1;
	}
	distMin[beg] = 0;

	do
	{
		min = minIndex = INT_MAX;
		for (int i = 0; i < sizeMatrix; i++)
		{
			if ((vertex[i] == 1) && (distMin[i] < min))
			{
				min = distMin[i];
				minIndex = i;
			}
		}

		if (minIndex != INT_MAX)
		{
			for (int i = 0; i < sizeMatrix; i++)
			{
				if (matrix[minIndex][i] > 0)
				{
					int temp = min + matrix[minIndex][i];
					if (temp < distMin[i])
						distMin[i] = temp;
				}
			}
			vertex[minIndex] = 0;
		}
	} while (minIndex < INT_MAX);

	int* ver = new int[sizeMatrix];
	int end = finish - 1;
	ver[0] = finish;
	int ind = 1;
	int weight = distMin[end];

	way.length = distMin[end];

	while (end != beg)
	{
		for (int i = 0; i < sizeMatrix; i++)
			if (matrix[i][end] != 0)
			{
				int temp = weight - matrix[i][end];
				if (temp == distMin[i])
				{
					weight = temp;
					end = i;
					ver[ind++] = i + 1;
				}
			}
	}

	way.count = ind;
	way.way = ver;
	way.start = start;
	way.finish = finish;

	return way;
}

