#include "progressbar.h"

int main()
{
	std::cout<<"ProgressBar test run:\n";
	ProgressBar bar1;
	ProgressBar bar2(50, 100, 1);
	bar1.test();
	bar2.test();
	return 0;
}
