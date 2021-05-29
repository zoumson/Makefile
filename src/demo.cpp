// Using Kali linux g++ compiler
// Created  by Zouma Adama on 2021/4/18.
// Copyright  2021 Zouma Adama. All rights reserved.

#include <iostream>
//#include <opencv2/core/core.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#define w 400

using namespace cv;
using namespace std;
int main(void){

	Mat img(Size(200, 200),CV_8UC3, Scalar(255,255,255));
	imshow("Zouma", img);
	waitKey(0);
	return 0;
}
