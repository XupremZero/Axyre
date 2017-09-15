#pragma once

#include "Types.h"

namespace Axyre
{
	namespace Container{
		template<class T, const UInt Size>
		class Array
		{
		private:
			T Values[Size];
		public:
			Array(const T[]);
		
			T operator[](const UInt ID)
			{
				if(ID <= Size)
					return Values[ID];
			}

			T Front();

			T Back();

			void Reset();

			T GetElement(const UInt);

			void SetElement(const UInt, const T);
		};
	}
}
