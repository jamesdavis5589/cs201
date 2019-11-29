// Image3.hpp
// Implementation for Image3 class
// Original Author: Jonathan Metzgar
// CS 201 course
#include "Image3.hpp"
#include <fstream>
#include <string>
#include <sstream>

// Image3 Constructor
Image3::Image3(unsigned width, unsigned height) {
	// TODO: resize the pixels array
	// TODO: initialize the internal w and h members

	w = width;
	h = height;

	pixels.resize(w*h);
}

// Return a pixel from the image
const Color3& Image3::getPixel(unsigned x, unsigned y) const {
	// TODO: Add error handling for unknown pixels
	// TERRIBLE OPTION 1: throw
	// BETTER OPTION 2: return a color
	// Hint: maybe this is already in the class?

	if (( y * w + x ) >= ( y + 1 * w ) || ( y * w + x ) < 0)
	{
		std::cout << "ERROR: Pixel is out of bounds";
	}

	return pixels[y * w + x];
}

void Image3::setPixel(unsigned x, unsigned y, const Color3& color) {
	// TODO: Set the pixel to the new color
	pixels[y * w + x] = color;
}

bool Image3::savePPM(const std::string& path) const {
	// TODO: Save the image to the disk
	// REQUIREMENT: Use the STREAM operators for the file contents
	return false;
}

bool Image3::loadPPM(const std::string& path) {
	// TODO: Load an image from the disk
	// REQUIREMENT: Use the STREAM operators for the file contents

	std::ifstream fstr("parrot.ppm");
	if (!fstr)
	{
		std::cout << "Error in image3: loadPPM";
		return false;
	}

	//resize pixels accordingly
	std::string s;

	//skip first line
	std::getline(fstr, s);
	//we want dimensions from second line
	std::getline(fstr, s);

	std::stringstream ss;
	ss << s;

	int x, y;

	int mark;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ',')
		{
			mark = i;
		}

		break;
	}

	//reading width
	ss >> x;

	//reading height
	ss << s[mark, s.size()];
	ss >> y;

	Image3(x, y);

	//now that dimensions have been read and set accordingly, we set the pixels
	std::string rgb;
	int r2;
	int g2;
	int b2;

	for (int i = 2; i < pixels.size(); i++)
	{
		if (fstr.eof())
		{
			break;
		}

		std::getline(fstr, rgb);

		//finding RGB values
		ss << rgb;
		ss >> r2; //red

		//finding spaces, so we can take other numbers
		int m1 = -32;
		int m2;
		for (int j = 0; j < rgb.size(); j++)
		{
			if (rgb[j] = ' ')
			{
				m1 = i;
			}
			if (rgb[j] = ' ' && m1 != -32)
			{
				m2 = i;
			}
		}

		ss << rgb[m1, m2];
		ss >> g2; //green

		ss << rgb[m2, rgb.size()];
		ss >> b2; //blue


		//set pixel to colors
		Color3 nVal(r2, g2, b2);
		pixels[i] = nVal;
	}

	return true;
}

void Image3::printASCII(std::ostream& ostr) const {
	// TODO: Print an ASCII version of this image
}

// STREAM OPERATORS for IMAGE3 class

std::ostream& operator<<(std::ostream& ostr, const Image3& image) {
	// TODO: Write out PPM image format to stream
	// ASSUME FORMAT WILL BE GOOD
	return ostr;
}

std::istream& operator>>(std::istream& istr, Image3& image) {
	// TODO: Read in PPM image format from stream
	// MAKE SURE FORMAT IS GOOD!!!
	return istr;
}