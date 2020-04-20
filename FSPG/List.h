#pragma once
#include "Structs.h"


/// <summary>
/// Класс, реализующий односвязанный список.
/// </summary>
class List
{
	Node* head = nullptr;
	Node* last = nullptr;
	int count = 0;
public:
/// <summary>
/// Функция, добавляющая новый элемент в список.
/// <param name="indexVertex">Номер вершины.</param>
/// <param name="weight">Вес до вершины.</param>
/// </summary>
	void Add(int indexVertex, int weight);
/// <summary>
/// Функция, которая выводит значение списка.
/// <param name="index">Номер вершины.</param>
/// </summary>
	void Print(int index);
/// <summary>
/// Функция, которая возвращает количество элементов списка.
/// </summary>
/// <returns>Возвращает количество элементов списка.</returns>
	int Count();
/// <summary>
/// Перегруженный оператор [].
/// <param name="i">Индекс выбранного элемента в списке.</param>
/// </summary>
/// <returns>Возвращает выбранный элемент списка (0, если ничего не найдено).</returns>
	int& operator[] (const int i);
};

