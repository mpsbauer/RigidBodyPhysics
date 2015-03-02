#pragma once

namespace RBP
{
	namespace Math
	{
		float InvSqrt(float square)
		{
			float half = 0.5f*square;
			long i = *(long *)&square;
			i = 0x5f3759df - (i >> 1);
			square = *(float *)&i;
			square = square * (1.5f - half * square * square);
			return square;
		}

		float FastSqrt(float square)
		{
			return 1.0f / InvSqrt(square);
		}
	}
}