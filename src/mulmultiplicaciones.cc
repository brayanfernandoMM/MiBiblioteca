#include "..\include\Multiplicaciones"

/** @brief Calcula la multiplicación de dos multiplicaciones
 * @param a un numero de tipo doble
 * @param b un numero de tipo doble
 * @param c un numero de tipo doble
 * @param d un numero de tipo doble
 *  @param mul1 La primera multiplicacion entre un numero a * b
 *  @param mul2 La segunda multiplicacion entre un numero c * d
 *  @param multiplicacion  hace la operacion entre las dos multiplicaciones
 *  @returns mul1*mul2
 */

double mulMuls(const double& a, const double& b,const double& c, const double& d){
	double multiplicacion;
    double mul1=a*b;
    double mul2=c*d;
	multiplicacion= mul1 * mul2; 
	return multiplicacion;
}