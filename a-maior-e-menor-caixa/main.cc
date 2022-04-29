#include <iostream>
#include <cmath>

double min(double x, double y) {
	if (x < y) return x;
	return y;
}

double V(double l, double w, double x) {
	return 4*pow(x,3) - 2*pow(x,2)*(l+w) + l*w*x;
}

int main() {
	double l,w,x1,x2,minx,maxx;

	while(scanf("%lf %lf", &l, &w) != EOF) {
		x1 = (4*(l+w)+sqrt(pow(-4*(l+w), 2) - 48*l*w))/24;
		x2 = (4*(l+w)-sqrt(pow(-4*(l+w), 2) - 48*l*w))/24;

		minx=x1;
		maxx=x2;

		if (x1 > x2) {
			minx = x2;
			maxx = x1;
		}

		if (V(l, w, maxx) < 0)
			maxx = min(l,w)/2;

		printf("%.3lf 0.000 %.3lf\n", minx, maxx);
	}
}
