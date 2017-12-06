//Gavin Anderson, CIS 127, Assignment 11.3
#include "set.h"

using namespace std;

set::set()
{
	my_size = 0;
	my_capacity = DEFAULT_INITIAL_SET_CAPACITY;
}

int set::size() const
{
	return my_size;
}

int set::capacity() const
{
	return my_capacity;
}

void set::add(SET_ELEMENT_TYPE newElement)
{
	bool found = false;
	for (first(); !isDone(); next())
	{
		if (currentItem() == newElement)
			found = true;
	}
	if (!found)
	{
		my_element.push_back(newElement);
		my_size++;
	}
}

bool set::remove(SET_ELEMENT_TYPE removalCandidate)
{
	bool found = false;
	for (first(); !isDone(); next())
	{
		if (currentItem() == removalCandidate)
			found = true;
		if (found && my_index + 1 < my_size)
			my_element[my_index] = my_element[my_index + 1];
	}
	if (found)
	{
		my_element.pop_back();
		my_size--;
	}
	return found;
}

SET_ELEMENT_TYPE set::currentItem() const
{
	return my_element[my_index];
}

void set::first() const
{
	((set*)this)->my_index = 0;
}

void set::next() const
{
	((set*)this)->my_index++;
}

bool set::isDone() const
{
	return my_index >= my_size;
}
/*
Gavin Anderson, CIS 127, Assignment 11.3
Element was NOT removed

The empty set:


size: 0
capacity: 16

The aSet size of three elements:


size: 3
capacity: 16

The set: 9, 10, 8
*/