// opencvTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main()
{
	VideoCapture video_mp4("C:\\Users\\admin\\Desktop\\C++Test\\opencvTest\\test_video.mp4");
	while (1)
	{
		Mat frame;
		video_mp4 >> frame;
		if (frame.empty())
		{
			return 0;
		}
		imshow("��Ƶ", frame);
		//waitKey(30);
		char c = waitKey(30);
		if (c == 27)
			break;
		if (!cvGetWindowHandle("��Ƶ"))
			break;
	}
	
    return 0;
}

