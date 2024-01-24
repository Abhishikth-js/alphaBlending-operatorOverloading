#include <iostream>
#include "include/image.hpp"


using namespace cv;


int main() {

    std::string path;
    Image Image1, Image2, result;
    char *str;

    std::cout << "Enter the path for image1 : ";
    std::cin >> path; 
    // path = "images/image1.jpeg";
    Image1.setImg(path);

    std::cout << "Enter the path for image2 : ";
    std::cin >> path;
    path = "images/image2.jpeg";
    Image2.setImg(path);
   
    // perform alpha blending
    result = Image1+Image2;

    result.display("Blended image");

    cv::destroyAllWindows();

    return 0;
}