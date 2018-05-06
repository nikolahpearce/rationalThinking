#include <iostream>
#include <string>
#include "Integer.h"

/**
 * Integer.cpp for E9 COSC326
 * @author Finn Luxton and Nikolah Pearce
 */

namespace cosc326 {

    // Default constructor 
    Integer::Integer() : num_(0) {}
	//Integer::Integer() : digits_(0), num_(0), positive_(false)  {}

    // Copy constructor that duplicates the provided Integer
    Integer::Integer(const Integer& integ) : num_(integ.num_) {}


    // Constructor that takes a std::String of digits (possibility starts with a + or -)
    Integer::Integer(const std::string& str) : num_(0) {
        //num_ = std::atof(str.c_str());
        // is it positive or negative?
    }

    // Destructor
    Integer::~Integer() {

    }

    // Unary Operator +

    // Unary Operator -

    // Binary arithmetic operator +

    // Binary arithmetic operator -

    // Binary arithmetic operator *

    // Binary arithmetic operator /

    // Binary arithmetic operator %

    // Compound assignment operator +=

    // Compound assignment operator -=

    // Compound assignment operator *=

    // Compound assignment operator /=

    // Compound assignment operator %=

    // Comparison operators ==

    // Comparison operators !=

    // Comparison operators <

    // Comparison operators <=

    // Comparison operators >

    // Comparison operators >=

    // Streaming insertion operator <<
	std::ostream& operator<<(std::ostream& ostr, const Integer& integ) {
        //ostr << integ.getNum();
        std::string numString;
        //for (std::vector<int>::const_iterator i = num_.begin(); i != num_.end(); ++i)
        //    numString += std::to_string(*i);
        ostr << numString;
		return ostr;
	}

    // Streaming extraction operator >>
	std::istream& operator>>(std::istream& istr, Integer& integ) {
		std::string value;
		istr >> value;
		integ = Integer(value);
		return istr;
	}
   

    // gdc(a, b) which returns greatest common divisor of a and b
    /*unsigned int gdc (unsigned int a, unsigned int b){
        unsigned int tmp;
        while(b != 0) {
            tmp = a;
            a = b;
            b = tmp % b;
        }
        return a;
    }*/


   /* int Integer::getNum() const {
		return num_;
    }*/
    
    int Integer::getDigits() const {
        return digits_;
    }

    std::vector<int> Integer::getNum() const {
        return *num_
    }

    bool Integer::isPositive() const {
        return positive_;
    }
}

