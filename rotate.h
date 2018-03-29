#ifndef _ROTATE_H_
#define _ROTATE_H_
#include "image.h"
#include "transformation.h"
#include <string>

class Rotate: public Transformation{
public:
	Rotate(Image *toTransform);
	void render(PPM &ppm) override;
};
#endif
