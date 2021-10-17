#include <math.h>
#define PI 3.14
double f(const double* x, double* result)
{
	*result = pow(cos((3 / 8) * PI - (*x / 4)), 2) - pow(cos((11 / 8) * PI - (*x / 4)), 2);
}