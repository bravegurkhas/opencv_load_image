/*

  I don't remember when did I write this code but .. I wrote it :p
  Email:srestaswrnm@gmail.com
*/

#include<iostream> //Including iostream

//Including opencv2 header files
#include"opencv2/highgui/highgui.hpp"
#include"opencv2/opencv.hpp"

using namespace std; //std namespace
using namespace cv; //opencv namespace

int main(){
  Mat image; //Creating a image matrix
  image = imread("images/chadani.jpg"); //Reading image
  /*
  ->> To change the window name yo can change the namedWindow(<Window name>,CV_WINDOW_FULLSCREEN)
  ->> To change the image file you can add files to images folder and then update the imread("images/<image file name> ")


  */
  namedWindow("Chadani",CV_WINDOW_FULLSCREEN); //Creatign a window named Chandani
  imshow("Chadani",image); //Showing the image.
  waitKey(0); //Waiting for a keyboard interrupt
}
