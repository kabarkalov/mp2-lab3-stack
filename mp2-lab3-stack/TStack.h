#pragma once

/*
Реализация класса TStack
*/

template <class T>
class TStack
{
	T* pMem;
	int size;
public:
	TStack(int _size=10)
	{
		size = _size;
	}
	int GetSize()
	{
		return size;
	}
	
};

