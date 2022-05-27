#include "angle.h"

Angle operator "" _rad(long double x)
{
	return Angle::from_radians(x);
}

Angle operator "" _rad(unsigned long long x)
{
	return Angle::from_radians((long double)x);
}

Angle operator "" _degrees(long double x) {
	return Angle::from_degrees(x);
}

Angle operator "" _degrees(unsigned long long x) {
	return Angle::from_degrees(x);
}

Angle operator +(const Angle& a, const Angle& b) {
	return Angle::from_radians(a.radians() + b.radians());
}