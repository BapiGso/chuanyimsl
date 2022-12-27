#include <iostream>
#include<opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int main()
{
    int i,j;
    int cols;
    int rows;
    char *p;
    Mat pic;
    Mat blurpic;
    pic = imread("C:\\Users\\lishunsheng\\Pictures\\ff17450c9853535ed4283b253fea90f4.png");
    rows=pic.rows;
    cols=pic.cols;
    /*for(int i=0;i<rows;i++)
    {
        p=(char*)pic.data[i];
        for(int j=0;j<cols;j++)
        {
             p[j]=p[j]-25;
        }
    }*/
    blur(pic,blurpic,Size(50,50));
    imshow("picture",pic);
    imshow("blurpic",blurpic);
    waitKey(0);
    cout << "Hello World!" << endl;
    return 0;
}
