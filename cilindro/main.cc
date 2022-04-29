#include <iostream>
#include <cmath>

double min(double x, double y) {
	if (x < y) return x;
	return y;
}

double max(double x, double y) {
	if (x > y) return x;
	return y;
}

double V(double r, double h) {
	return M_PI*pow(r,2)*h;
}

int main() {
	double w,l,r1,x,r2,maxx;
	scanf("%lf %lf", &w, &l);

	while (w+l != 0) {
		r1 = w/(2*M_PI);
		x = l/(2*(1+M_PI));
		r2 = min(w/2, x);
		maxx = max(V(r1, l-2*r1), V(r2, w));
		printf("%.3lf\n", maxx);
		scanf("%lf %lf", &w, &l);
	}
}
