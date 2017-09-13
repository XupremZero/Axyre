#include "Array.h"

template<class T, Axyre::UInt Size>
Axyre::Array<T, Size>::Array(const T[] values)
{
	Axyre::Array<T, Size>::Values = values;
}

template<class T, Axyre::UInt Size>
T Axyre::Array<T, Size>::Back()
{
	return Axyre::Array<T, Size>::Values[Size - 1];
}

template<class T, Axyre::UInt Size>
T Axyre::Array<T, Size>::Front ()
{
	return Axyre::Array<T, Size>::Values[0];
}

template<class T, Axyre::UInt Size>
void Axyre::Array<T, Size>::Reset()
{
	for (UInt aux = 0; aux < Size; aux++)
		Axyre::Array<T, Size>::Values[aux] = 0;
}

template<class T, Axyre::UInt Size>
T Axyre::Array<T, Size>::GetElement(const UInt ID)
{
	if (ID <= Size)
		return Axyre::Array<T, Size>::Values[ID];
	else
		return 0;
}

template<class T, Axyre::UInt Size>
void Axyre::Array<T, Size>::SetElement(const UInt ID, const T NewValue)
{
	if(ID <= Size)
		Axyre::Array<T, Size>::Values[ID] = NewValue;
}
