#include <iostream>
#include <opencv2/opencv.hpp>
#include <vector>

#include "../include/detector.hpp"

int main()
{
    //Task1 完成图片的读取和显示  图片路径为vision/picture.jpg
    cv::Mat img;
    //img = cv::imread("vision/picture.jpg");
    cv::VideoCapture cap("vision/video.mov");
    //======================
    
    //Task2 将图片转换为灰度图，再把灰度图转为二值图
    cv::Mat gray_img, binary_img;
    //======================

    //Task3 定义并初始化一个detector类，然后将图片输入进去得到结果
    task::Detector detector;
    while(true){
        cap >> img;
        if(img.empty())break;
        std::vector<task::Armor> armors = detector.detect(img);
        // if(armors.empty() != 0){
        //     std::cout << "not found armor" <<std::endl;
        // }else{
        //     std::cout << "found armor" <<"\n"
        //               << "armor size:"<<armors.size()
        //               <<std::endl;
        // }

        for(const auto& armor: armors){
            detector.show_result(img, armor.points);
        }

        cv::resize(img, img, cv::Size(0, 0), 0.5, 0.5);
        cv::imshow("Armor", img);
        if(cv::waitKey(15) == 'q'){
            break;
        }
    }
    
    
    //
    return 0;
}