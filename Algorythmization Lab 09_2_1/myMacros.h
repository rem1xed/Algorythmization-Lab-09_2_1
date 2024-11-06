#pragma once
#define Z 2
#define MAX(y,z) ((y)>(z))?(y):(z)
#define MIN(y,z) ((y)<(z))?(y):(z) 
#define SQR(x) \
	(x)* (x)
#define PRINTR(w) printf (#w"=%d\n",(int)w)
 
#define FIRST(x, y) \
	MIN(SQR((x) - (Z)), (x) - (y))
#define SECOND(x, y)\
	( MAX((x)*(y),(y)*(Z)) + MIN((Z)*(x), (y)*(Z)) )