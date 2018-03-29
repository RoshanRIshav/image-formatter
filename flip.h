#ifndef _FLIP_H_
#define _FLIP_H_
#include "image.h"
#include "transformation.h"
#include <string>

class Flip: public Transformation{
 public:
  Flip(Image *toTransform);
  void render(PPM &ppm) override;
};
#endif

