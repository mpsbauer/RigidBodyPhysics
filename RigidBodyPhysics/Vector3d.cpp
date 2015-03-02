#include "Vector3d.h"
#include "CommonMath.h"

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

		Vector3d& Vector3d::operator=(const Vector3d vector)
		{
			X = vector.X;
			Y = vector.Y;
			Z = vector.Z;
			return *this;
		}

		Vector3d& Vector3d::Normalize()
		{
			auto lengthSquared = (X * X) + (Y * Y) + (Z * Z);
			if (lengthSquared == 0)
			{
				X = Y = Z = 0.0f;
				return *this;
			}

			float recip = InvSqrt(lengthSquared);
			X *= recip;
			Y *= recip;
			Z *= recip;
			return *this;
		}

		float Vector3d::Length() const
		{
			return FastSqrt((X * X) + (Y * Y) + (Z * Z));
		}

		float Vector3d::LengthSquared() const
		{
			return (X * X) + (Y * Y) + (Z * Z);
		}


		Vector3d operator+(const Vector3d& v0, const Vector3d& v1)
		{
			return Vector3d(v0.X + v1.X, v0.Y + v1.Y, v0.Z + v1.Z);
		}

		Vector3d operator*(const Vector3d& vector, float scaler)
		{
			return Vector3d(vector.X * scaler, vector.Y * scaler, vector.Z * scaler);
		}

		Vector3d operator/(const Vector3d& vector, float scaler)
		{
			return Vector3d(vector.X / scaler, vector.Y / scaler, vector.Z / scaler);
		}

		Vector3d& operator*=(Vector3d& vector, float scaler)
		{
			vector.X = vector.X * scaler;
			vector.Y = vector.Y * scaler;
			vector.Z = vector.Z * scaler;
			return vector;
		}

		Vector3d& operator/=(Vector3d& vector, float scaler)
		{
			vector.X = vector.X / scaler;
			vector.Y = vector.Y / scaler;
			vector.Z = vector.Z / scaler;
			return vector;
		}

	}
}