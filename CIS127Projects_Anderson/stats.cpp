
//Gavin Anderson, CIS 127, Assignment 10.2
#include "stats.h"
#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

stats::stats()
{
	my_data.resize(16);
	my_size = 0;
}

stats::stats(int initCapacity)
{
	my_data.resize(initCapacity);
	my_size = 0;
}

void stats::add(double newElement)
{
	my_data[my_size] = newElement;
	my_size++;
}

void stats::sort()
{
	double temp = 0;
	for (int i = 0; i < my_size - 1; i++)
	{
		for (int j = i + 1; j < my_size; j++)
		{
			if (my_data[j] < my_data[i])
			{
				temp = my_data[i];
				my_data[i] = my_data[j];
				my_data[j] = temp;
			}
		}
	}
}

int stats::size() const
{
	return my_size;
}

double stats::max() const
{
	double max = my_data.front();
	for (int i = 0; i < my_size; i++)
	{
		if (my_data[i] > max)
		{
			max = my_data[i];
		}
	}
	return max;
}

double stats::min() const
{
	double min = my_data.front();
	for (int i = 0; i < my_size; i++)
	{
		if (my_data[i] < min)
		{
			min = my_data[i];
		}
	}
	return min;
}

void stats::display()  const
{
	cout << "Tests: ";
	for (int i = 0; i < my_size; i++)
	{
		cout << my_data[i] << " ";
	}
	cout << endl;
}

double stats::mean() const
{
	double sum = 0;
	for (int i = 0; i < my_size; i++)
	{
		sum += my_data[i];
	}
	return sum / my_size;
}

double stats::variance()  const
{
	double sum_squares = 0;
	for (int i = 0; i < my_size; i++)
	{
		sum_squares += pow(my_data[i], 2);
	}
	return (sum_squares / my_size) - pow(stats::mean(), 2);
}

double stats::standardDeviation()  const
{
	return sqrt(stats::variance());
}

double stats::median() const
{
	return my_data[(my_size / 2) - 1];
}



