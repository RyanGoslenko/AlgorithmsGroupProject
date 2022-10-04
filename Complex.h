#ifndef ALGORITHMSGROUPPROJECT_COMPLEX_H
#define ALGORITHMSGROUPPROJECT_COMPLEX_H

#include <vector>
#include <iostream>

using std::cout;
using std::endl;

template <typename T> class Complex
{
public:
    T real;
    T imaginary;

    explicit Complex(T tempReal = 0, T tempImaginary = 0)
    {
        real = tempReal;
        imaginary = tempImaginary;
    }

    Complex<T> operator + (const Complex<T>& C1)
    {
        // creating temporary variable
        Complex temp;

        // adding real part of complex numbers
        temp.real = this->real + C1.real;

        // adding imaginary part of complex numbers
        temp.imaginary = this->imaginary + C1.imaginary;

        // returning the result
        return temp;
    }

    Complex<T> operator + (T number)
    {
        // creating temporary variable
        Complex temp;

        // adding real part of complex numbers
        temp.real = this->real + number;

        // adding imaginary part of complex numbers
        temp.imaginary = this->imaginary;

        // returning the result
        return temp;
    }

    void operator += (const Complex<T>& C1)
    {
        // adding real part of complex numbers
        this->real = this->real + C1.real;

        // adding imaginary part of complex numbers
        this->imaginary = this->imaginary + C1.imaginary;
    }

    Complex<T> operator - (const Complex<T>& C1)
    {
        // creating temporary variable
        Complex temp;

        // adding real part of complex numbers
        temp.real = this->real - C1.real;

        // adding imaginary part of complex numbers
        temp.imaginary = this->imaginary - C1.imaginary;

        // returning the result
        return temp;
    }

    Complex<T> operator - (T number)
    {
        // creating temporary variable
        Complex temp;

        // adding real part of complex numbers
        temp.real = this->real - number;

        // adding imaginary part of complex numbers
        temp.imaginary = this->imaginary;

        // returning the result
        return temp;
    }

    void operator -= (const Complex<T>& C1)
    {
        // adding real part of complex numbers
        this->real = this->real - C1.real;

        // adding imaginary part of complex numbers
        this->imaginary = this->imaginary - C1.imaginary;
    }

    Complex<T> operator * (const Complex<T>& C1)
    {
        // creating temporary variable
        Complex temp;

        // multiplying real part of complex numbers
        temp.real = ((this->real) * (C1.real)) - ((this->imaginary) * (C1.imaginary));

        // multiplying imaginary part of complex numbers
        temp.imaginary = ((this->real) * (C1.imaginary)) + ((C1.real) * (this->imaginary));

        // returning the result
        return temp;
    }

    Complex<T> operator * (T number)
    {
        // creating temporary variable
        Complex temp;

        // adding real part of complex numbers
        temp.real = this->real * number;

        // adding imaginary part of complex numbers
        temp.imaginary = this->imaginary * number;

        // returning the result
        return temp;
    }

    void operator *= (const Complex<T>& C1)
    {
        // multiplying real part of complex numbers
        this->real = ((this->real) * (C1.real)) - ((this->imaginary) * (C1.imaginary));

        // multiplying imaginary part of complex numbers
        this->imaginary = ((this->real) * (C1.imaginary)) + ((C1.real) * (this->imaginary));
    }

    Complex<T> operator / (const Complex<T>& C1)
    {
        // creating temporary variable
        Complex temp;

        // dividing real part of complex numbers
        temp.real = ( (this->real * C1.real) + (this->imaginary * C1.imaginary) )
                    / ( (C1.real * C1.real) + (C1.imaginary * C1.imaginary) );

        // dividing imaginary part of complex numbers
        temp.imaginary = ( (this->imaginary + C1.real) - (this->real + C1.imaginary) )
                         / ( (C1.real * C1.real) + (C1.imaginary * C1.imaginary) );

        // returning the sum
        return temp;
    }

    Complex<T> operator / (T number)
    {
        // creating temporary variable
        Complex temp;

        // adding real part of complex numbers
        temp.real = this->real / number;

        // adding imaginary part of complex numbers
        temp.imaginary = this->imaginary / number;

        // returning the result
        return temp;
    }

    void operator /= (const Complex<T>& C1)
    {
        // dividing real part of complex numbers
        this->real = ( (this->real * C1.real) + (this->imaginary * C1.imaginary) )
                    / ( (C1.real * C1.real) + (C1.imaginary * C1.imaginary) );

        // dividing imaginary part of complex numbers
        this->imaginary = ( (this->imaginary + C1.real) - (this->real + C1.imaginary) )
                         / ( (C1.real * C1.real) + (C1.imaginary * C1.imaginary) );
    }

    bool operator < (const Complex<T>& C1)
    {
        if (this->real < C1.real or ((this->real = C1.real) and this->imaginary < C1.imaginary))
        {
            return true;
        }
        return false;
    }

    bool operator <= (const Complex<T>& C1)
    {
        if ((this->real < C1.real or ((this->real = C1.real) and this->imaginary < C1.imaginary))
            or ((this->real = C1.real) and (this->imaginary = C1.imaginary)))
        {
            return true;
        }
        return false;
    }

    bool operator > (const Complex<T>& C1)
    {
        if (this->real > C1.real or ((this->real = C1.real) and this->imaginary > C1.imaginary))
        {
            return true;
        }
        return false;
    }

    bool operator >= (const Complex<T>& C1)
    {
        if ((this->real > C1.real or ((this->real = C1.real) and this->imaginary > C1.imaginary))
            or ((this->real = C1.real) and (this->imaginary = C1.imaginary)))
        {
            return true;
        }
        return false;
    }

    void print()
    {
        if (this->imaginary > 0)
        {
            cout << this->real << " + " << this->imaginary << "i ";
        }
        cout << this->real << " - " << this->imaginary << "i ";
    }
};

#endif //ALGORITHMSGROUPPROJECT_COMPLEX_H