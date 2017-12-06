#ifndef STATS_H
#define STATS_H
//-----------------------------------------------------------------------
// SPECIFICATION FILE stats.h
//
// Declares: class stats
//-----------------------------------------------------------------------

#include <vector>
using namespace std;

class stats {
public:
  stats();
  stats(int max);     
  // post: set the size to 0 and resizes the capacity to max values

  void add(double newNumber);
  // post: newNumber is part of the the population.
  
  void sort();
  // arrange the numbers in ascending order (lowest to highest)
  
  int size() const;
  // returns the number of elements in the population

  double max() const;
  // returns the largest number in the population

  double min() const;
  // returns the smallest number in the population

  double mean() const;
  // returns the abolute average

  double variance() const;
  // returns the variance

  double standardDeviation() const;

  void display() const;

  double median() const;

private:
  int my_size;
  vector <double> my_data;  
};


#endif
