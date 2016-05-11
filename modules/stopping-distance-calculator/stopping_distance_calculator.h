#pragma once

#include <opencv2\opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

class StoppingDistanceCalculator
{
public:
	static bool IsSafe(Mat image);

private:
	static Mat GetRedMask(Mat image);

	// Returns a binary mask for asphalt color
	static Mat GetGreyMask(Mat image);

	// Safety treshold for stopping distance
	const static double kSafetyTresh;
};