#pragma once
#include "Structs.h"


/// <summary>
/// �����, ����������� ������������� ������.
/// </summary>
class List
{
	Node* head = nullptr;
	Node* last = nullptr;
	int count = 0;
public:
/// <summary>
/// �������, ����������� ����� ������� � ������.
/// <param name="indexVertex">����� �������.</param>
/// <param name="weight">��� �� �������.</param>
/// </summary>
	void Add(int indexVertex, int weight);
/// <summary>
/// �������, ������� ������� �������� ������.
/// <param name="index">����� �������.</param>
/// </summary>
	void Print(int index);
/// <summary>
/// �������, ������� ���������� ���������� ��������� ������.
/// </summary>
/// <returns>���������� ���������� ��������� ������.</returns>
	int Count();
/// <summary>
/// ������������� �������� [].
/// <param name="i">������ ���������� �������� � ������.</param>
/// </summary>
/// <returns>���������� ��������� ������� ������ (0, ���� ������ �� �������).</returns>
	int& operator[] (const int i);
};

