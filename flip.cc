#include "flip.h"
#include <string>
#include <iostream>
using namespace std;

Flip::Flip(Image *toTransform): Transformation(toTransform){}

//The render function to filp the image
void Flip::render(PPM &ppm){
	int width, height;
	width = ppm.getWidth();
	height = ppm.getHeight();
	vector<Pixel> & pixels = ppm.getPixels();
	//Now fliping the pixels by swaping the pixels accordingly
	
	for(int i = 0; i < height; i++){
		for(int j = 0; j < width/2; j++){
			int currentPixelIndex = i * width + j;
			int toSwapWith = (i * width) + width - 1 -j;
			// cout << "Current Index: " << currentPixelIndex << endl;
			// cout << "ToSwap Index: " << toSwapWith << endl;
			Pixel tempPixel = pixels[currentPixelIndex];
			pixels[currentPixelIndex] = pixels[toSwapWith];
			pixels[toSwapWith] = tempPixel;
		}
	}
}
