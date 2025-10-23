#include <stdio.h>

\\Write a program to calculate the area and perimeter of a rectangle given its length and breadth

int main() 
 {
	int length, breadth, area , perimeter;
	    length = 5 , breadth = 10;
	    
	 area = length * breadth;
	 perimeter = 2*(length + breadth);
	 
	     printf("Length = %d\n",length);
	     printf("Breadth = %d\n",breadth);
	     printf("Area = %d\n",area);
	     printf("Perimeter = %d\n",perimeter);
	     
	return 0;
}
