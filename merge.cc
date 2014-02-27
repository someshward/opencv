#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;


int main(int argc, char** argv)
{
	double alpha = 0.5, beta, input;
	Mat src1, src2, dst;

	if (argc != 3) {
		cout << "Input two same sized images" << endl;
		return -1;
	}

	cout << "Enter alpha[0-1]" << endl;
	cin >> input;

	if (input >= 0.0 && input <= 1.0) {
		alpha = input;
	}
	else {
		cout << "Invalid alpha value. Using default value of 0.5" << endl;
	}
	beta = 1.0 - alpha;

	src1 = imread(argv[1]);
	src2 = imread(argv[2]);

	namedWindow("Linear Blender", 1);

	addWeighted(src1, alpha, src2, beta, 0.0, dst);
	imshow("Linear Blender", dst);

	waitKey(0);

	return 0;
}
