#include <iostream>
#include <opencv2/opencv.hpp>

int main()
{
    //Task1 完成图片的读取和显示  图片路径为image/vision.jpg
    cv::Mat img;
    //======================
    
    //Task2 将图片转换为灰度图，再把灰度图转为二值图
    cv::Mat gray_img, binary_img;
    //======================

    //Task3 定义并初始化一个detector类，然后将图片输入进去得到结果
    Detector detector;
    
    //

    cv::waitKey(0);
    return 0;
}