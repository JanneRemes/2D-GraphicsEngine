/*
#pragma once

namespace CML
{
	class CMVector2
	{
		friend CMVector2 operator+(const CMVector2 &vec1, const CMVector2 &vec2);
		//friend CMVector2 operator -(const CMVector2& vec1, const CMVector2& vec2);
	public:
		CMVector2();
		//CMVector2(T X, T Y);
		CMVector2(int x, int y);
		//CMVector2(float x, float y);
		~CMVector2();

		//CMVector2 operator +(const CMVector2& vec1, const CMVector2& vec2);
		//CMVector2 operator -(const CMVector2& vec1, const CMVector2& vec2);

		//template<typename U>
		//explicit CMVector2(const Vector2<U>& vector2);

		//T x;
		//T y;


		int xi;
		int yi;

		//float xf;
		//float yf;

	};

	//CMVector2 operator +(const CMVector2& vector1, const CMVector2& vector2);

	//CMVector2 operator -(const CMVector2& vector1, const CMVector2& vector2);
}*/

#pragma once

namespace CML
{
	template <typename T>
	class CMVector2
	{
		//friend CMVector2<T> operator+(const CMVector2<T> &vec1, const CMVector2<T> &vec2);
		//friend CMVector2 operator -(const CMVector2& vec1, const CMVector2& vec2);
	public:
		CMVector2();
		CMVector2(T X, T Y);
		//CMVector2(int x, int y);
		//CMVector2(float x, float y);
		~CMVector2();

		//CMVector2 operator +(const CMVector2& vec1, const CMVector2& vec2);
		//CMVector2 operator -(const CMVector2& vec1, const CMVector2& vec2);

		//template<typename U>
		//explicit CMVector2(const Vector2<U>& vector2);

		T x;
		T y;


		//int xi;
		//int yi;

		//float xf;
		//float yf;
	};


	template <typename T>
	CMVector2<T>::CMVector2(T X, T Y)
	{
		x = X;
		y = Y;
	}

	template <typename T>
	CMVector2<T>::~CMVector2()
	{

	}


	template <typename T>
	CMVector2<T> operator+(const CMVector2<T> &vec1, const CMVector2<T> &vec2)
	{
		CMVector2<T> result;
		result.x = vec1.x + vec2.x;
		result.y = vec1.y + vec2.y;
		return result;
	}
};