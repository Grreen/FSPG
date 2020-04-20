#include <iostream>

#include "Algorithms.h"

/// <summary>
/// Входная точка программы
/// <param name="argc">Количество элементов командной строки.</param>
/// <param name="argv">Аргументы командной строки.</param>
/// </summary>
int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "rus");
    Algorithms::FindWay(argc, argv);
}
