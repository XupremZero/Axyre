#include "Array.h"

template<class T, size_t Size>
Axyre::Array<T, Size>::Array(const T[] values)
{
	Axyre::Array<T, Size>::Values = values;
}

template<class T, size_t Size>
Axyre::Array<T, Size>::GetElement(const UInt ID)
{
	if (ID <= Size)
		return Axyre::Array<T, Size>::Values[ID];
}
