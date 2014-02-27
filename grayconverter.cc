
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(int argc, char **argv)
{
	Mat img;

	if (argc != 2) {
		cout << "no arguments" << endl;
		return -1;
	}

	img = imread(argv[1], 1);
	if (!img.data) {
		cout << "image not readable" << endl;
		return -2;
	}

	Mat gray_img;
	cvtColor(img, gray_img, CV_BGR2GRAY);

	imwrite("gray_logo.jpg", gray_img);

	namedWindow(argv[1], CV_WINDOW_AUTOSIZE);
	namedWindow("Gray Window", CV_WINDOW_AUTOSIZE);

	imshow(argv[1], img);
	imshow("Gray Window", gray_img);

	waitKey(0);

	return 0;
}

