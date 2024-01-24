# alphaBlending via operator overloading
This is a simple implementation that intends to merge two images throught the process known as Alpha blending.The outcome is achieved here by
overloading the '+' operator which takes two image objects on either of
its side.


## requirements
Make sure you  have a g++ compiler and the opencv library installed in your system.

## usage
Type make in your terminal. This will run the makefile and create the executable by the name "alpha_blender". In order to run the executable, 
type "./alpha_blender" in the terminal which will run the executable.

Type "make clean" to perform cleanup.

## references
The process of alpha blending is implemented using the openCV library.
Visit this link to know more about [openCV](https://docs.opencv.org/4.x/d9/df8/tutorial_root.html).

Use this link to get to know more about [alpha blending](https://www.geeksforgeeks.org/opencv-alpha-blending-and-masking-of-images/).