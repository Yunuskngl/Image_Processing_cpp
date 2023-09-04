#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(){
	VideoCapture vid("video.mp4");
	namedWindow("Video Penceresi", WINDOW_AUTOSIZE);
	float fps = vid.get(CAP_PROP_FPS);
	printf("%2.f\n", fps);
	
	if (!vid.isOpened()) {
		cout << "!HATA" << endl;
		return -1;
	}

	while (true) {
		Mat video;
		bool frame = vid.read(video);
		if (waitKey(30) == 27 || frame == 0) {
			destroyWindow("Video Penceresi");
			break;
		}
		imshow("Video Penceresi", video);
	}
	return 0;
}