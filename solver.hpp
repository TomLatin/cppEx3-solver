#pragma once
#include <iostream>
#include <complex>
using namespace std;

namespace solver
{
    class RealVariable
    {
    private:
        double num; //field
    public:
        //Default constructor
        RealVariable();
        //Parameters constructor
        RealVariable(double num);

        /**All the operators of RealVariable**/
        //multiplication
        friend RealVariable& operator*(const double number,RealVariable& x); // For arguments like: number*x
        friend RealVariable& operator*(RealVariable& x, const double number); // For arguments like: x*number
        friend RealVariable& operator*(RealVariable& x1, RealVariable& x2); // For arguments like: x1*x2

        //division
        friend RealVariable& operator/(const double number,RealVariable& x); // For arguments like: number/x
        friend RealVariable& operator/(RealVariable& x, const double number); // For arguments like: x/number
        friend RealVariable& operator/(RealVariable& x1, RealVariable& x2); // For arguments like: x1/x2

        //plus
        friend RealVariable& operator+(const double number,RealVariable& x); // For arguments like: number+x
        friend RealVariable& operator+(RealVariable& x, const double number); // For arguments like: x+number
        friend RealVariable& operator+(RealVariable& x1, RealVariable& x2); // For arguments like: x1+x2

        //Subtraction
        friend RealVariable& operator-(const double number,RealVariable& x); // For arguments like: number-x
        friend RealVariable& operator-(RealVariable& x, const double number); // For arguments like: x-number
        friend RealVariable& operator-(RealVariable& x1, RealVariable& x2); // For arguments like: x1-x2

        //Equality
        friend RealVariable& operator==(const double number,RealVariable& x); // For arguments like: number==x
        friend RealVariable& operator==(RealVariable& x, const double number); // For arguments like: x==number
        friend RealVariable& operator==(RealVariable& x1, RealVariable& x2); // For arguments like: x1==x2

        //power
        friend RealVariable& operator^(RealVariable& x, const double number); // For arguments like: x^number
    }; //end RealVariable

    class ComplexVariable
    {
    private:
        //Fields
        double realNum,imaginaryNum;
    public:
        //Default constructor
        ComplexVariable();
        //Parameters constructor
        ComplexVariable(double realNum,double imaginaryNum);


        /**All the operators of ComplexVariable**/
        //multiplication
        friend ComplexVariable& operator*(const double number,ComplexVariable& y); // For arguments like: number*y
        friend ComplexVariable& operator*(ComplexVariable& y, const double number); // For arguments like: y*number
        friend ComplexVariable& operator*(ComplexVariable& y1, ComplexVariable& y2); // For arguments like: y1*y2
        friend ComplexVariable& operator*(complex<double> number,ComplexVariable& y); // For arguments like: doubleComplex*y
        friend ComplexVariable& operator*(ComplexVariable& y ,complex<double> number); // For arguments like: y*doubleComplex

        //division
        friend ComplexVariable& operator/(const double number,ComplexVariable& y); // For arguments like: number/y
        friend ComplexVariable& operator/(ComplexVariable& y, const double number); // For arguments like: y/number
        friend ComplexVariable& operator/(ComplexVariable& y1, ComplexVariable& y2); // For arguments like: y1/y2
        friend ComplexVariable& operator/(complex<double> number,ComplexVariable& y); // For arguments like: doubleComplex/y
        friend ComplexVariable& operator/(ComplexVariable& y ,complex<double> number); // For arguments like: y/doubleComplex

        //plus
        friend ComplexVariable& operator+(const double number,ComplexVariable& y); // For arguments like: number+y
        friend ComplexVariable& operator+(ComplexVariable& y, const double number); // For arguments like: y+number
        friend ComplexVariable& operator+(ComplexVariable& y1, ComplexVariable& y2); // For arguments like: y1+y2
        friend ComplexVariable& operator+(complex<double> number,ComplexVariable& y); // For arguments like: doubleComplex+y
        friend ComplexVariable& operator+(ComplexVariable& y ,complex<double> number); // For arguments like: y+doubleComplex

        //Subtraction
        friend ComplexVariable& operator-(const double number,ComplexVariable& y); // For arguments like: number-y
        friend ComplexVariable& operator-(ComplexVariable& y, const double number); // For arguments like: y-number
        friend ComplexVariable& operator-(ComplexVariable& y1, ComplexVariable& y2); // For arguments like: y1-y2
        friend ComplexVariable& operator-(complex<double> number,ComplexVariable& y); // For arguments like: doubleComplex-y
        friend ComplexVariable& operator-(ComplexVariable& y ,complex<double> number); // For arguments like:  y-doubleComplex

        //Equality
        friend ComplexVariable& operator==(const double number,ComplexVariable& y); // For arguments like: number==y
        friend ComplexVariable& operator==(ComplexVariable& y, const double number); // For arguments like: y==number
        friend ComplexVariable& operator==(ComplexVariable& y1, ComplexVariable& y2); // For arguments like: y1==y2
        friend ComplexVariable& operator==(complex<double> number,ComplexVariable& y); // For arguments like:doubleComplex==y
        friend ComplexVariable& operator==(ComplexVariable& y ,complex<double> number); // For arguments like: y==doubleComplex

        //power
        friend ComplexVariable& operator^(ComplexVariable& y, const double number); // For arguments like: x^number
    }; //end class ComplexVariable

    double solve(RealVariable &exercise);

    std::complex<double> solve(ComplexVariable &exercise);
}; //end namespace solver