#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
	float re;
	float im;
public:
	Complex() : re(1.0), im(1.0) {}
	Complex(float _re, float _im);

	Complex operator+(const Complex& c1)const {
		return Complex(re + c1.re, im + c1.im);
	}

	Complex operator-(const Complex& c1)const {
		return Complex(re - c1.re, im - c1.im);
	}

	Complex operator*(const Complex& c1)const {
		return Complex(re * c1.re, im * c1.im);
	}

	Complex operator/(const Complex& c1)const {
		return Complex(re / c1.re, im / c1.im);
	}

	friend std::ostream& operator<<(std::ostream& out, const Complex& ccc) {
		out << "RE: " << ccc.re << "  IM: " << ccc.im;
		return out;
	};
};
#endif