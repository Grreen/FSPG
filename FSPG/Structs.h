#pragma once
#include <list>
#include <string>

using namespace std;

/// <summary>
/// ���������, ������� ������ ������ � ��������� ����.
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
/// ���������, ������� ������ ������ � ���� �������� ������ � �����(matrix/list), ������� ����� � ��������� ������.
/// </summary>
struct Data
{
	int sizeGraph = 0;
	list<string> values;
	string typeConvert;
};

/// <summary>
/// ���������, ������� ������ ������ � �������� ����� (������, ��� �� ������� � ��������� �� ��������� �������).
/// </summary>
struct Node
{
	int indexVertex;
	int weight;
	Node* next;
};