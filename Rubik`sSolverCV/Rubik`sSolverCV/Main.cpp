#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	string imagePath = "/Users/liubk/Downloads/blacky.jpg";


	Mat image = imread(imagePath, IMREAD_COLOR);
	resize(image, image, { 500,500 }, 0, 0, cv::INTER_NEAREST);

	imshow("Image", image);

	waitKey(0);
}
