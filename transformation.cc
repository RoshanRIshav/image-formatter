#include "image.h"
#include "transformation.h"

Transformation::Transformation(Image *toTransform): toTransform{toTransform} {}
Transformation::~Transformation() { delete toTransform; }
