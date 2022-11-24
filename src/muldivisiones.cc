#include "..\include\Multiplicaciones"

/** @brief Calcula la multiplicación de dos divisiones
 * @param a un numero de tipo doble
 * @param b un numero de tipo doble
 * @param c un numero de tipo doble
 * @param d un numero de tipo doble
 *  @param div1 La primera division entre un numero a / b
 *  @param div2 La segunda division entre un numero c / d
 *  @param multiplicacion  hace la operacion entre las dos divisiones
 *  @returns div1*div2
 */

double mulDivs(const double& a, const double& b,const double& c, const double& d){
	double multiplicacion;
    double div1=a/b;
    double div2=c/d;
	multiplicacion= div1 * div2; 
	return multiplicacion;
}