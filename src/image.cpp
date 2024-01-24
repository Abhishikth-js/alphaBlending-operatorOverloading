#include "../include/image.hpp"


void Image::setImg(std::string imageDirectory) {
    img = cv::imread(imageDirectory.c_str());

     if(img.empty()) {
        std::cout << "\n Error loading the images \n";
        exit(1);
    }
    
}

void Image::display(std::string imageName) {
    const char *str = imageName.c_str();
    cv::namedWindow(str, cv::WINDOW_NORMAL);
    // Set the window size (width, height) in pixels
    cv::resizeWindow(str, 400, 300);
    // moveWindow(str, 800, 300); 
    cv::imshow(str, img);
    cv::waitKey(0); // waits until a key is pressed
}

Image Image::operator+(Image &otherImage) {
    Image blendedImage;
    // Resize images to the same dimensions (optional)
    cv::resize(img, img, otherImage.img.size());

    // Define alpha value (transparency)
    double alpha;
    std::cout << "Enter alpha value : ";
    std::cin >> alpha;        

    // addWeighted(image1, alpha, image2, 1.0 - alpha, 0.0, blendedImage);
    cv::addWeighted(img, alpha, otherImage.img, 1.0 - alpha, -20, blendedImage.img);
    //cv::imwrite("result/result.jpeg", blendedImage.img);

            return blendedImage;

}