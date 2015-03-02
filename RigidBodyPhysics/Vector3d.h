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

			~Vector3d();

			Vector3d& operator=(const Vector3d vector);


			float X;
			float Y;
			float Z;
		};
	}
}