#include "sepia.h"
#include <string>
#include <iostream>
using namespace std;

Sepia::Sepia(Image *toTransform): Transformation(toTransform){}

//The render function to filp the image
bool isGreaterThan(int col){
	return(col > 255);
}
void Sepia::render(PPM &ppm){
	vector<Pixel> &pixels = ppm.getPixels();
	int sizeVector = pixels.size();
	//Now fliping the pixels by swaping the pixels accordingly
	for(int i = 0; i < sizeVector; i++){
		int r,g,b;
		Pixel np;
		Pixel p = pixels[i];
		r = p.r * .393 + p.g * .769 + p.b * .189;
		g = p.r * .349 + p.g * .686 + p.b * .168;
		b = p.r * .272 + p.g * .534 + p.b * .131;
		if(isGreaterThan(r)){
			r = 255;
		}
		if(isGreaterThan(g)){
			g = 255;
		}
		if(isGreaterThan(b)){
			b = 255;
		}
		np.r = r;
		np.g = g;
		np.b = b;
		pixels[i].r = np.r;
		pixels[i].g = np.g;
		pixels[i].b = np.b;
	}
}
