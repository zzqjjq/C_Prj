# define PI 3.14159
#include<stdio.h>
#include<math.h>
int main() {
	//Declaration variable
	float r1, r2, r3, r4, r5, r6;//radius
	const float h = 1.5;// height
	float Vs1, Vc1, Vs2, Vc2, Vs3, Vc3, Vs4, Vc4, Vs5, Vc5, Vs6, Vc6;//Volume of sphere and Cylinder
	float D1, D2, D3, D4, D5, D6; //percentage difference between cylinder and sphere
	//input value r
	printf("Key in radius value:");
	scanf_s("%f", &r1);
	printf("Key in radius value:");
	scanf_s("%f", &r2);
	printf("Key in radius value:");
	scanf_s("%f", &r3);
	printf("Key in radius value:");
	scanf_s("%f", &r4);
	printf("Key in radius value:");
	scanf_s("%f", &r5);
	printf("Key in radius value:");
	scanf_s("%f", &r6);

	//Volumne caculation
	Vs1 = (4 / 3) * pow(r1, 3) * PI; // sphere 1
	Vc1 = pow(r1, 2) * h * PI; // cylinder 1

	Vs2 = (4 / 3) * pow(r2, 3) * PI; // sphere 2
	Vc2 = pow(r2, 2) * h * PI; // cylinder 2

	Vs3 = (4 / 3) * pow(r3, 3) * PI; // sphere 3
	Vc3 = pow(r3, 2) * h * PI; // cylinder 3

	Vs4 = (4 / 3) * pow(r4, 3) * PI; // sphere 4
	Vc4 = pow(r4, 2) * h * PI; // cylinder 4

	Vs5 = (4 / 3) * pow(r5, 3) * PI; // sphere 5
	Vc5 = pow(r5, 2) * h * PI; // cylinder 5

	Vs6 = (4 / 3) * pow(r6, 3) * PI; // sphere 6
	Vc6 = pow(r6, 2) * h * PI; // cylinder 6

	//difference percentage caculation
	D1 = (Vs1 - Vc1) * 100 / Vs1;
	printf(" The percentage difference with 0.1 radius is %0.4f %%\n", D1);
	D2 = (Vs2 - Vc2) * 100 / Vs2;
	printf(" The percentage difference with 0.4 radius is %0.4f %%\n", D2);
	D3 = (Vs3 - Vc3) * 100 / Vs3;
	printf(" The percentage difference  with 0.8 radius is %0.4f %%\n", D3);
	D4 = (Vs4 - Vc4) * 100 / Vs4;
	printf(" The percentage difference with 1.2 radius is %0.4f %%\n", D4);
	D5 = (Vs5 - Vc5) * 100 / Vs5;
	printf(" The percentage difference with 1.6 radius is %0.4f %%\n", D5);
	D6 = (Vs6 - Vc6) * 100 / Vs6;
	printf(" The percentage difference is with 2.0 radius %0.4f %%\n", D6);

	return 0;
}