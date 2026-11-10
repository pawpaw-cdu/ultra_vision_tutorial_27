#ifndef SOLVER_HPP
#define SOLVER_HPP

#include <vector>
#include <opencv2/opencv.hpp>

namespace auto_aim
{

static const double LIGHTBAR_LENGTH = 0.056 //灯条物理长度 单位：米
static const double ARMOR_WIDTH = 0.135 // 装甲板宽带 单位：米

// #### Task 01 ############################################
// object_points 是 物体局部坐标系下 n个点 的坐标。
// 对于我们而言，也就是装甲板坐标系下4个点的坐标。
// 请你填写下面的 object_points:
static const std::vector<cv::Point3f> object_points {
    {   0,   0,   0},         //Point 1   left_top
    {   0,   0,   0},         //Point 2   right_top
    {   0,   0,   0},         //Point 3   right_bottom
    {   0,   0,   0}          //Point 4   left_bottom
 };

class solver
{
private:
    
public:
    solver(/* args */);
    ~solver();
};

solver::solver(/* args */)
{
}

solver::~solver()
{
}



} // namespace Solver


#endif