// stack.cpp --Stack member functions
#include"10.10 stack.h"
Stack::Stack()		// creaate an empty stcak
{
	top = 0;
}

bool Stack::isempty()const
{
	return top == 0;
}

bool Stack::isfull()const
{
	return top == MAX;
}

bool Stack::push(const Item &item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else return false;
}

bool Stack::pop(Item&item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else return false;
}