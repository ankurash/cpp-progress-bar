# cpp-progress-bar
Library to add progress bar to c++ modules.

## Usage
Clone/download this repository and include the headerfile "progressbar.h" in your cpp code. 
Create progressbar object using

`ProgressBar bar1; //empty value=0, full value=100, increment=1`

or

`ProgressBar bar2(0, 100, 1); //empty value, full value, increment`

## Functions

* `void reset()` : reset the current value of progress bar to empty value
* `void update()` : increment the progress bar
* `void test()` : show a test run from empty value to full value on terminal
