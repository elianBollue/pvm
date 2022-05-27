#ifndef ANGLE_H
#define ANGLE_H

class Angle
{
private:
	double _radians;
	Angle(double radians) : _radians(radians){}

public:
	static Angle from_degrees(double degrees) {
		return Angle(degrees / 180 * 3.141592);
	}

	static Angle from_radians(double radians) {
		return Angle(radians);
	}

	double radians() const{
		return _radians;
	}
	double degrees() const {
		return _radians / 3.141592 * 180;
	}
};

Angle operator"" _rad(long double x);
Angle operator"" _rad(long long unsigned x);
Angle operator "" _degrees(long double x);
Angle operator "" _degrees(long long unsigned);

Angle operator +(const Angle&, const Angle&);

#endif // !ANGLE_H
