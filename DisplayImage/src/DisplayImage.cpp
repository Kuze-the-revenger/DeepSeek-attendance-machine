/*
 * DisplayImage.cpp
 *
 *  Created on: Aug 17, 2026
 *      Author: book
 */

#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;

int main()
{
    // 创建一张黑色图像并画个圆
    Mat img(300, 300, CV_8UC3, Scalar(0, 0, 0));
    circle(img, Point(150, 150), 80, Scalar(0, 0, 255), 3);
    imshow("OpenCV Test", img);
    waitKey(0);
    return 0;
}


