#pragma once

struct Container
{
	int* storage;
	size_t size;
	size_t count;

	Container();
	Container(size_t n);
	~Container();
};

bool addElement(int elem, Container& C);
void print(const Container& C);

int sumelement(const Container& C);
int maxelement(const Container& C);
