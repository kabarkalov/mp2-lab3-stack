#pragma once

template <class T>
class TStack
{
private:
	int MaxSize;
	int Size;
	T* pMem;
public:
	TStack(int s=10)
	{
    if(s>0)
    {
    MaxSize = s;
    Size = -1;
    pMem = new T[MaxSize];
    }
    else
    {
      throw s;
    }

	}

	~TStack()
	{
    delete[] pMem;
	}

	T Pop()
  {
    if(Size>=0)
    {
      Size--;
      return pMem[Size + 1];
    }
    else 
    {
      throw -1;
    }
  }

	T Top()
  {
    if(Size>=0 && Size<MaxSize)
    {
      return pMem[Size];
    }
    else 
    {
      throw -1;
    }
  }

	void Push(T elem)
  {
      if(Size < MaxSize - 1)
      {
        Size++;
        pMem[Size]=elem;
      }else
      {
        throw -1;
      }
  }

  bool IsFull()
  {
    return Size == MaxSize - 1;
  }
  bool IsEmpty()
  {
    return Size == -1;
  }
  void Clear()
  {
    Size = -1;
  }

};
