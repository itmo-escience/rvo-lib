namespace RVO2D 
{
	public value class RvoVector2
	{
	public:
		float X;
		float Y;

		RvoVector2(float x, float y);

		RvoVector2 operator +(RvoVector2 other);
		RvoVector2 operator * (float num);
		RvoVector2 operator +(float num);		
	};
}