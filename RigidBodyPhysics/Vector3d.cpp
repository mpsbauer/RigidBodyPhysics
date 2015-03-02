#include "Vector3d.h"

namespace RBP
{
	namespace Math
	{
		Vector3d::Vector3d()
		{

		}

		Vector3d::Vector3d(const Vector3d& other)
		{
			X = other.X;
			Y = other.Y;
			Z = other.Z;
		}

		Vector3d::Vector3d(float x, float y, float z)
		{
			X = x;
			Y = y;
			Z = z;
		}

		Vector3d::~Vector3d()
		{

		}

		Vector3d& Vector3d::operator=(const Vector3d vector)
		{
			X = vector.X;
			Y = vector.Y;
			Z = vector.Z;
			return *this;
		}
	}
}