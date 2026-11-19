#include <iostream>

#include "../include/detector.hpp"
#include "../include/solver.hpp"
#include "../include/img_tools.hpp"
#include "fmt/core.h"

int main()
{
    cv::Mat img;

    cv::VideoCapture cap("vision/video.avi");

    while(true){
        cap >> img;
        if(img.empty())break;
        
        task::Detector detector;
        auto armors = detector.detect(img);

        if(!armors.empty()){
            auto armor = armors.front();

            //  从这里开始就是你要完成的部分，详见solver.cpp和solver.hpp
            //  简述：
            //  1.你需要先定义一个Solver。
            //  2.然后按照pnp解算、向量变换为矩阵、反三角函数得到欧拉角。
            //  3.得到含两个Vec3d的6自由度数据结构体。
            //  4.可视化x, y, z, yaw, pitch, roll和识别出的armor

            //  示例
            tool::draw_gui(img,
                        fmt::format("Euler:  yaw{: .2f} pitch{: .2f} roll{: .2f}", 
                        dofs.euler[0], dofs.euler[1], dofs.euler[2]), 
                        cv::Point2f(10, 50));
            if(cv::waitKey(15) == 'q')
            {
                break;
            }
        }
        //
        
    }
    
    
    //
    return 0;
}