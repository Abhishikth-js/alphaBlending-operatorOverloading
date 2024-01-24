#ifndef image_hpp
#define image_hpp

#include <iostream>
#include <opencv2/opencv.hpp>
#include <unistd.h>

class Image {
    
    cv::Mat img;


    public :

        

        void setImg(std::string imageDirectory);

        void display(std::string imagename);

        Image operator+(Image &otherImage);
};


#endif