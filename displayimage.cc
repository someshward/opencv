
#include <stdio.h>
#include <opencv2/opencv.hpp>


using namespace cv;

int main(int argc, char **argv)
{
	Mat image;

	if (argc != 2 || image.data ) {
		printf("no arguments\n");
		return -1;
	}

	image = imread(argv[1], CV_LOAD_IMAGE_GRAYSCALE);
	if (!image.data) {
		printf("no image\n");
		return -2;
	}

	namedWindow("Window", CV_WINDOW_AUTOSIZE);
	imshow("Window", image);

	waitKey(0);

	return 0;
}

