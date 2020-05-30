#include <stdio.h>
#define PI 3.141592

int main()
{
  //initialize answer by zero
  char answer = 0;
  float size = 0;
  int width = 0, height = 0, base = 0, radius = 0;

  //repeat until the user types 'q'
  while (answer != 'q'){
    //let the user choose a shape from triangle, rectangle, and circle
    printf("Select shape from triangle, rectangle, circlt (t, r, or c): ");

    //read the choice of the user in answer
    scanf("%c", &answer);
    
    //if answer is 't' compute the size of the triangle
    if (answer=='t'){
      // read the base and height of the triangle
      printf("Input base and height: ");
      scanf("%d %d", &base, &height);
       
      //compute the size
      size = (float) base * height / 2;
       
      //print the size of the triangle
      printf("The size of the triangle = %f.\n", size);
    }
     
    //if answer ir 'r' compute the size of the rectangle
    if (answer=='r'){
      //read the width and height of the rectangle
      printf("Input width and height: ");
      scanf("%d %d", &width, &height);
       
      //compute the size
      size=(float) width *height ;
       
      //print the size of the rectangle
      printf("The size of rectangle = %f.\n", size);
    }
     
    //if answer is 'c' compute the size of the circle
    if (answer=='c'){
      //read the radius of the circle
      printf("Input radius:");
      scanf("%d", &radius);
       
      //compute the size
      size = PI * radius * radius ;
       
      //print the size of the circle
      printf("The size of circle = %f.\n", size);
    }

  }
  //print a good-bye message
  printf("good-bye");
  
  return 0;
}