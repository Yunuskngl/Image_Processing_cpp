#include <opencv2/core/core.hpp>   //temel kütüphane
#include <opencv2/highgui/highgui.hpp>  //giriş çıkış işlemleri
#include <iostream>

using namespace std;
using namespace cv;


Mat orgImg;
int main() {
	orgImg = imread("resim.jpg");
	namedWindow("Resim Penceresi", WINDOW_AUTOSIZE);
	if (orgImg.empty()) {
		cout << "resim yuklenmedi." << endl;
		return -1;
	}
	else {
		imshow("Resim Penceresi", orgImg);
		waitKey(0);
		destroyWindow("Resim Penceresi");
	}
	return 0;
}