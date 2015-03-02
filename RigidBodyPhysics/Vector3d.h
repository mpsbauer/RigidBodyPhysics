#pragma once
namespace RBP
{
	namespace Math
	{
		class Vector3d
		{
		public:
			Vector3d();
			Vector3d(const Vector3d& other);
			Vector3d(float x, float y, float z);

			Vector3d& operator=(const Vector3d vector);

			Vector3d& Normalize();
			float Length() const;
			float LengthSquared() const;

			float X;
			float Y;
			float Z;
		};

		Vector3d operator+(const Vector3d& v0, const Vector3d& v1);
		Vector3d operator*(float scaler, const Vector3d& vector);		
		Vector3d operator/(const Vector3d& v0, const Vector3d& v1);
		Vector3d& operator*=(float scaler, const Vector3d& vector);
		Vector3d& operator/=(float scaler, const Vector3d& vector);
	}
}