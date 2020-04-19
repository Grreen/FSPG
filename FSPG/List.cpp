#include "List.h"
#include <iostream>
#include <assert.h>

using namespace std;

void List::Add(int indexVertex, int weight)
{
	count++;
	if (head)
	{
		Node* temp = new Node();
		temp->indexVertex = indexVertex;
		temp->weight = weight;
		last->next = temp;
		last = temp;
	}
	else
	{
		head = new Node();
		head->indexVertex = indexVertex;
		head->weight = weight;
		last = head;
	}
}

void List::Print(int index = -1)
{
	Node* temp = head;
	if (index >= 0)
		cout << "Vertex " << index + 1 << ": ";
	while (temp)
	{
		cout << temp->indexVertex + 1;
		if (temp->next)
			cout << " -> ";
		temp = temp->next;
	}
	cout << endl;
}

int List::Count()
{
	return count;
}

int& List::operator[](const int i)
{
	assert(i >= 0);
	int notFind = 0;

	if (i == 0)
		return notFind;

	Node* node = head;
	while (node)
	{
		if (node->indexVertex == i)
			return node->weight;
		node = node->next;
	}

	return notFind;

}
