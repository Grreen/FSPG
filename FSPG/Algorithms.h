#pragma once
#include <string>
#include <iostream>
#include <list>
#include "List.h"
#include "Structs.h"

using namespace std;

static class  Algorithms
{
	static int** ConvertToMatrix(list<string> edges, int sizeMatrix);
	static List* ConvertToList(list<string> edges, int sizeMatrix);
	static Data ReadFile(string filename);

	template <class T>
	static Way FindingWay(T matrix, const int sizeMatrix, int start, int finish);

public:
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

