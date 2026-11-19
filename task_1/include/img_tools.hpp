#ifndef IMG_TOOLS_HPP
#define IMG_TOOLS_HPP

#include <opencv2/opencv.hpp>

namespace tool
{
    inline void draw_armor(cv::Mat & bgr_img, const std::vector<cv::Point2f> &points)
    {
            std::vector<cv::Point> int_points(points.begin(), points.end());
            for(int j = 0 ; j < 4; j++){
            cv::circle(bgr_img, int_points[j], 5, cv::Scalar(0, 255, 255), -1);
            cv::line(bgr_img, int_points[j], int_points[(j+1) % 4], cv::Scalar(0 ,255, 0), 2);
            }
    }
    inline void draw_text(
        cv::Mat &img, const std::string &text, const cv::Point &point, double font_scale = 1.0,
        const cv::Scalar &color = cv::Scalar(0, 255, 255), int thickness = 2)
    {
        cv::putText(img, text, point, cv::FONT_HERSHEY_SIMPLEX, font_scale, color, thickness);
    }
    inline void draw_gui(cv::Mat &img, const std::vector<cv::Point2f> &armor_points,
                         const std::string &text, const cv::Point &point   )
    {
        draw_armor(img, armor_points);
        draw_text(img, text, point);
        cv::resize(img, img, cv::Size(0, 0), 0.5, 0.5);
        cv::imshow("Result", img);
    }
    inline void draw_gui(cv::Mat &img, const std::vector<cv::Point2f> &armor_points)
    {
        draw_armor(img, armor_points);
        cv::resize(img, img, cv::Size(0, 0), 0.5, 0.5);
        cv::imshow("Result", img);
    }
    inline void draw_gui(cv::Mat &img, const std::string &text, const cv::Point &point   )
    {
        draw_text(img, text, point);
    }
}

#endif