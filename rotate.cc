#include "rotate.h"

using namespace std;

Rotate::Rotate(Image *toTransform): Transformation(toTransform){}

void Rotate::render(PPM &ppm){
	vector<Pixel> &pixels = ppm.getPixels();
	vector<Pixel> newPixel;

	int &height=ppm.getHeight();
	int &width=ppm.getWidth();
	int newWidth = height;
	int newHieght = width;
	int size = pixels.size();

	//Initializing the pixels
	int i = 0;
	while(i < size){
		Pixel template_pixels;
		newPixel.push_back(template_pixels);
		i++;
	}
	//Roatating the image
	for(int i = 0;i < width; i++){
	 	for(int j = 0;j < height; j++){
	 		int toChange = i * height + j;
	 		int changeWith = width*(height-j-1)+i;
	 		newPixel.at(toChange) = pixels.at(changeWith);
	 	}
	}
	//Assigning the new dimensions
	pixels=newPixel;
	height=newHieght;
	width=newWidth;

}
