#include <stdio.h>
#include "MuSoenMath.h"

void main() {

	vec3 v(3,2,1);
	v.print();

	mat3 Translate(
		1, 0, 3,
		0, 1, 2,
		0, 0, 1);
	mat3 Rotate(
		cos(30), sin(30), 0,
		-sin(30), cos(30), 0,
		0, 0, 1);
	mat3 Scale(
		2, 0, 0,
		0, 2, 0,
		0, 0, 1);

	vec3 p;
	p = v.calculate(Scale);
	p = p.calculate(Rotate);
	p = p.calculate(Translate);
	p.print();

}