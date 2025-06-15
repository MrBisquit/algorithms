// https://en.m.wikipedia.org/wiki/Fast_inverse_square_root
float inverse_square_root(float number)
{
	long i;
	float x2, y;
	const float threehalfs = 1.5F;

	x2 = number * 0.5F;
	y  = number;
	i  = *(long*)&y;                       // evil floating point bit level hacking
	i  = 0x5f3759df - (i >> 1);               // what the fuck?
	y  = *(float*)&i;
	y  = y * (threehalfs - (x2 * y * y));   // 1st iteration
//	y  = y * (threehalfs - (x2 * y * y));   // 2nd iteration, this can be removed

	return y;
}

float inverse_square_root_min(float n){long i;float x2,y;const float th=1.5f;x2=n*0.5f;y=n;i=*(long*)&y;i=0x5f3759df-(i>>1);y=*(float*)&i;y*(th-(x2*y*y));return y;}

// Completely unreadable version because why not
#define f float
#define l long
#define c const
#define r return
#define a 0x5f3759df
#define b 1.5f
#define c 0.5f;

f isqrt(f n){l i;f x2,y;c f th=b;x2=n*c;y=n;i=*(l*)&y;i=a-(i>>1);y=*(f*)&i;y*(th-(x2*y*y));r y;}