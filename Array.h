#pragma once

#include "Types.h"
#include <initializer_list>

namespace Axyre
{
	template<class T, const UInt Size>
	class Array
	{
	private:
		T Values[Size];
	public:
		Array(const T[]);
		
		T operator[](const UInt ID)
		{
			return Values[ID];
		}

		T Front();

		T Back();

		void Reset();

		T GetElement(const UInt);

		void SetElement(const UInt, const T);
	};
}
