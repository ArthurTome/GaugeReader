// OpenCV header to use VideoCapture class
#include<opencv2/opencv.hpp>
#include<iostream>

using namespace std;
using namespace cv;
 
int main(){
    // Read an image 
    Mat img_grayscale = imread("../img/color_flower.jpg", 0);
    Mat img_color = imread("../img/color_flower.jpg", 1);
    
    // Display the image.
    imshow("grayscale", img_grayscale);
    imshow("color", img_color);

    // 
    waitKey(0);

    // Destroys all the windows created                         
    destroyAllWindows();
    
    // Write the image in the same directory
    imwrite("../img/gray_flower.jpg", img_grayscale);

    return 0;
}