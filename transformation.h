#ifndef _TRANSFORMATION_H_
#define _TRANSFORMATION_H_
#include "image.h"

class Transformation: public Image{
 protected:
  Image *toTransform;
 public:
  Transformation(Image *toTransform);
  virtual ~Transformation();
};
#endif
