#pragma once

#include "Types.h"

namespace Axyre
{
	template<class T, size_t Size>
	class Array
	{
	private:
		T* Values;
	public:
		Array(const T[]);

		T GetElement(const UInt);
	};
}
