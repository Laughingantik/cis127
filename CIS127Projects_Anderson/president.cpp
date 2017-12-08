#include "president.h"


Presidents::Presidents()
{
  // ...
}

Presidents::Presidents(int presidentNumber, string presidentName, string birthDeathDates,
    string dateTookOffice, string dateLeftOffice,
    string party, string previousOffice, string vicePresident)
{
  ((Presidents*)this)->presidentNumber = presidentNumber;
  ((Presidents*)this)->presidentName = presidentName;
  ((Presidents*)this)->birthDeathDates = birthDeathDates;
  ((Presidents*)this)->dateTookOffice = dateTookOffice;
  ((Presidents*)this)->dateLeftOffice = dateLeftOffice;
  ((Presidents*)this)->party = party;
  ((Presidents*)this)->previousOffice = previousOffice;
  ((Presidents*)this)->vicePresident = vicePresident;
}

string Presidents::getPresidentName() const
{
  return ((Presidents*)this)->presidentName;
}

int Presidents::getPresidentNumber() const
{
  return ((Presidents*)this)->presidentNumber;
}

string Presidents::getDateBornDied() const
{
  return ((Presidents*)this)->birthDeathDates;
}

string Presidents::getVicePresident() const
{
  return ((Presidents*)this)->vicePresident;
}

string Presidents::getDateLeftOffice() const
{
  return ((Presidents*)this)->dateLeftOffice;
}

string Presidents::getDateTookOffice() const
{
  return ((Presidents*)this)->dateTookOffice;
}

string Presidents::getPreviousOffice() const
{
  return ((Presidents*)this)->previousOffice;
}

string Presidents::getParty() const
{
  return ((Presidents*)this)->party;
}

string Presidents::toString() const
{
	string ending = "th";
	if (((presidentNumber % 10) == 1) && (presidentNumber != 11))
		ending = "st";
	else
	{
		if (((presidentNumber % 10 == 2)) && (presidentNumber != 12))
			ending = "nd";
		else
			if (((presidentNumber) % 10 == 3) && (presidentNumber != 13))
				ending = "rd";
	}
	string str = presidentName + " was the " + to_string(getPresidentNumber()) + ending + " President\n\n"
		+ "  He lived from " + getDateBornDied() + '\n'
		+ "  He took office " + getDateTookOffice() + '\n'
		+ "  He left office on " + getDateLeftOffice() + '\n'
		+ "  His party was " + getParty() + '\n'
		+ "  His previous office held was " + getPreviousOffice() + '\n'
		+ "  His vice president was " + getVicePresident() + '\n';
	return str;
}

bool operator < (const Presidents & left, const Presidents & right)
{
  return left.getPresidentName() < right.getPresidentName();
}

bool operator == (const Presidents & left, const Presidents & right)
{
  return left.getPresidentName() == right.getPresidentName();
}

bool operator != (const Presidents & left, const Presidents & right)
{
  return left.getPresidentName() != right.getPresidentName();
}

bool operator > (const Presidents & left, const Presidents & right)
{
  return left.getPresidentName() > right.getPresidentName();
}

bool operator >= (const Presidents & left, const Presidents & right)
{
  return left.getPresidentName() >= right.getPresidentName();
}

bool operator <= (const Presidents & left, const Presidents & right)
{
  return left.getPresidentName() <= right.getPresidentName();
}

ostream& operator<<(ostream& out, const Presidents& x)
{
  out << x.toString();
  return out;
}
