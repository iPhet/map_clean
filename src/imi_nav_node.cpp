#include <imi_nav_v2/imi_nav.h>
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <opencv2/opencv.hpp>


int main(int argc, char** argv)
{
  ros::init(argc, argv, "imi_nav_node_v2");
  CNavigation node;
  node.StartService();
}


