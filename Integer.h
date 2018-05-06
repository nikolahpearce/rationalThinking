#pragma once

#include <iostream>
#include <string>

/**
 * Integer.h for E9 COSC326
 * @author Finn Luxton and Nikolah Pearce
 */

namespace e9 {

    class Integer {

    public:
        // Constructors
        Integer();
        Integer(const Integer& integ)
        Integer(const std::string& str);

        // Destructor
        ~Integer();

        // Assignment operator =
        Integer& operator=(const Integer& integ);

        // The unary operators: + and -
            //WHAT?!

        // The inequal binary arithmetic operators /, and %
        Integer& operator/(const Integer& integ);
        Integer& operator%(const Integer& integ);

        // The compound assignment operators: +=, -=, *=, /=, and %=
        Integer& operator+=(const Integer& integ);
        Integer& operator-=(const Integer& integ);
        Integer& operator*=(const Integer& integ);
        Integer& operator/=(const Integer& integ);
        Integer& operator%=(const Integer& integ);

        // The comparison operators: ==, !=,<,<=,>, and >=
        Integer& operator==(const Integer& integ);
        Integer& operator!=(const Integer& integ);
        Integer& operator<(const Integer& integ);
        Integer& operator<=(const Integer& integ);
        Integer& operator>(const Integer& integ);
        Integer& operator>=(const Integer& integ);

        // Afunction,gcd(a,b),thatreturnsthegreatestcommondivisoroftwoIntegers
        
        int getNum() const;

    private:
        int num_;
    }

    // The equal-either-way binary arithmetic operators: +, -, *
    Integer operator+(const Integer& i1, const Integer& i2);
    Integer operator-(const Integer& i1, const Integer& i2);
    Integer operator*(const Integer& i1, const Integer& i2);

    // The streaming insertion and extraction operators: << and >>
    std::ostream& operator<<(std::ostream& ostr, const Integer& integ);
	std::istream& operator>>(std::istream& istr, Integer& integ);

}