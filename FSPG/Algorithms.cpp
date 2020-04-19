#include "Algorithms.h"
#include <fstream>
#include <iostream>

using namespace std;

void DeleteSpaces(string& str)
{
	size_t strBegin = str.find_first_not_of(' ');
	size_t strEnd = str.find_last_not_of(' ');
	str.erase(strEnd + 1, str.size() - strEnd);
	str.erase(0, strBegin);
}


int** Algorithms::ConvertToMatrix(list<string> edges,const int sizeMatrix)
{

	if (edges.size() <= 0)
	{
		cout << "Error. Missing values." << endl;
		return nullptr;
	}

	int** matrix = new int*[sizeMatrix];
	for (int i = 0; i < sizeMatrix; i++)
	{
		matrix[i] = new int[sizeMatrix];
		for (int j = 0; j < sizeMatrix; j++)
			matrix[i][j] = 0;
		
		if (edges.size() == 0)
			break;

		string temp = edges.front();
		edges.pop_front();
		while (temp.find('(') != string::npos)
		{
			temp.erase(0, temp.find('('));
			int vertex = atoi(temp.substr(1, temp.find(',')).c_str());
			temp.erase(0, temp.find(','));
			int weight = atoi(temp.substr(1, temp.find(')')).c_str());
			temp.erase(0, temp.find(')'));

			if (vertex <= sizeMatrix)
				matrix[i][vertex - 1] = weight;
		}
	}

	for (int i = 0; i < sizeMatrix; i++)
	{
		for (int j = 0; j < sizeMatrix; j++)
			cout << " " << matrix[i][j];
		cout << endl;
	}

	return matrix;
}

List* Algorithms::ConvertToList(list<string> edges, int sizeMatrix)
{
	List* listVertex = new List[sizeMatrix];

	for (int i = 0; i < sizeMatrix; i++)
	{
		if (edges.size() == 0)
			break;

		string temp = edges.front();
		edges.pop_front();
		while (temp.find('(') != string::npos)
		{
			temp.erase(0, temp.find('('));
			int vertex = atoi(temp.substr(1, temp.find(',')).c_str());
			temp.erase(0, temp.find(','));
			int weight = atoi(temp.substr(1, temp.find(')')).c_str());
			temp.erase(0, temp.find(')'));

			if (vertex <= sizeMatrix)
				listVertex[i].Add((vertex - 1), weight);
		}
	}

	for (int i = 0; i < sizeMatrix; i++)
		listVertex[i].Print(i);

	return listVertex;
}


void Algorithms::FindWay(int argc, char* argv[])
{
	string filename;
	int start = 0, 
		finish = 0;

	for (int i = 0; i < argc; i++)
	{
		string temp = argv[i];
		if (temp.find("--file=") != string::npos)
			filename = temp.substr(temp.find('=') + 1, temp.length() - 1);
		else if (temp == "--file" && ++i < argc)
			filename = string(argv[i]);

		if (temp.find("--filename=") != string::npos)
			filename = temp.substr(temp.find('=') + 1, temp.length() - 1);
		else if (temp == "--filename" && ++i < argc)
			filename = string(argv[i]);

		if (temp.find("--start_vertex=") != string::npos)
			start = atoi(temp.substr(temp.find('=') + 1, temp.length() - 1).c_str());
		else if (temp.find("--start_vertex") != string::npos && ++i < argc)
			start = atoi(string(argv[i]).c_str());

		if (temp.find("--end_vertex=") != string::npos)
			finish = atoi(temp.substr(temp.find('=') + 1, temp.length() - 1).c_str());
		else if (temp.find("--end_vertex") != string::npos && ++i < argc)
			finish = atoi(string(argv[i]).c_str());
	}

	Data data = ReadFile(filename);
	Way way;

	if (data.typeConvert == "matrix")
		way = FindingWay(ConvertToMatrix(data.values, data.sizeGraph), data.sizeGraph, start, finish);
	else if (data.typeConvert == "link")
		way = FindingWay(ConvertToList(data.values, data.sizeGraph), data.sizeGraph, start, finish);
	else
		cout << " Error. " << data.typeConvert << " is an unknown type." << endl;

	cout << endl;
	cout << "Type of graph representation in memory: " << data.typeConvert << "." << endl;
	cout << "Start: " << way.start << "   Finish: " << way.finish << endl;
	cout << "Way length: " << way.length << "." << endl;
	cout << "Count of steps: " << way.count << "." << endl;
	cout << "Way: ";
	for (int i = way.count - 1; i >= 0; i--)
	{
		cout << way.way[i];
		if (i != 0)
			cout << " -> ";
	}
	cout << endl;
}


Data Algorithms::ReadFile(string filename)
{
	ifstream fin(filename);
	Data data;
	bool fl = true;


	if (fin.is_open())
	{
		string str;
		getline(fin, str);

		string temp;

		data.sizeGraph = atoi(str.substr(0, str.find(' ')).c_str());
		str.erase(0, str.find(' '));

		DeleteSpaces(str);

		data.typeConvert = str.substr(0, str.find(' '));
		if (data.typeConvert.empty())
			data.typeConvert = str.substr(0, str.length());
		str.erase(0, data.typeConvert.length());

		DeleteSpaces(str);

		data.values.push_back(str);

		while (getline(fin, str))
			if (!str.empty())
				data.values.push_back(str);

		fin.close();
	}
	else
		cout << "File '"<< filename <<"' reading error." << endl;

	return data;
}

