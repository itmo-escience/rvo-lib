#include "../include/RvoVector2.h"

using namespace RVO2D;

RvoVector2::RvoVector2(float x, float y)
{
	X = x;
	Y = y;
}

RvoVector2 RvoVector2::operator + (RvoVector2 other)
{
	return RvoVector2(this->X + other.X, this->Y + other.Y);
}

RvoVector2 RvoVector2::operator * (float num)
{
	return RvoVector2(this->X * num, this->Y * num);
}

RvoVector2 RvoVector2::operator +(float num)
{
	return RvoVector2(this->X + num, this->Y + num);
}