#pragma once
template <class t>
class Frac
{
public:
	//data members
	t a, b;
	// a is numorator 
	// b is denominator
	// a/b

	//constructors
	Frac();
	Frac(t);
	Frac(t, t);

	//functional members
	Frac<t> operator *(Frac<t>&);
	Frac<t> operator /(Frac<t>&);

};

template<class t>
inline Frac<t>::Frac()
{
	a = 1, b = 1;
}

template<class t>
inline Frac<t>::Frac(t x)
{
	a = x; b = 1;
}

template<class t>
inline Frac<t>::Frac(t x, t y)
{
	a = x; b = y;
}

template<class t>
inline Frac<t> Frac<t>::operator*(Frac<t>& otherF)
{
	Frac<t> tempF;

	tempF.a = this->a * otherF.a;
	tempF.b = this->b * otherF.b;
	return tempF;



}

template<class t>
inline Frac<t> Frac<t>::operator/(Frac<t>& otherF)
{
	Frac<t> tempF;

	tempF.a = this->a * otherF.b;
	tempF.b = this->b * otherF.a;
	return tempF;

}
