#include "..\include\Multiplicaciones"

/** @brief Calcula la multiplicación de dos restas
 * @param a un numero de tipo doble
 * @param b un numero de tipo doble
 * @param c un numero de tipo doble
 * @param d un numero de tipo doble
 *  @param resta La primera resta entre un numero a - b
 *  @param resta La segunda resta entre un numero c - d
 *  @param multiplicacion  hace la operacion entre las dos restas
 *  @returns res1-res2
 */

double mulRes(const double& a, const double& b,const double& c, const double& d){
	double multiplicacion;
    double res1=a-b;
    double res2=c-d;
	multiplicacion= res1 * res2; 
	return multiplicacion;
}