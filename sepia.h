#ifndef _SEPIA_H_
#define _SEPIA_H_
#include "image.h"
#include "transformation.h"
#include <string>

class Sepia: public Transformation{
public:
	Sepia(Image *toTransform);
	void render(PPM &ppm) override;
};
#endif
