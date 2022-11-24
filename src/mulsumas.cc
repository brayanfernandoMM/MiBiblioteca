#include "..\include\Multiplicaciones"

/** @brief Calcula la multiplicación de dos sumas
 * @param a un numero de tipo doble
 * @param b un numero de tipo doble
 * @param c un numero de tipo doble
 * @param d un numero de tipo doble
 *  @param sum1 La primera suma entre un numero a + b
 *  @param sum2 La segunda suma entre un numero c + d
 *  @param multiplicacion  hace la operacion entre las dos sumas
 *  @returns sum1*sum2
 */

double mulSums(const double& a, const double& b,const double& c, const double& d){
	double multiplicacion;
    double sum1=a+b;
    double sum2=c+d;
	multiplicacion= sum1 * sum2; 
	return multiplicacion;
}