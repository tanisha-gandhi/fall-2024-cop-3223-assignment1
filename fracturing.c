#include <stdio.h>
#include <math.h>
#define PI 3.14159

double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
//BONUS (Optional): double askForUserInput();

//main to call all other functions and return 0
int main(int argc, char **argv){

    // call functions
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();   

    return 0;
}

//helper function to calculate distance between 2 user-input pts
double distanceFormula(){
    //initiate variables
    double x1, y1, x2, y2;
    double distance;
    
    //gather x points
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter x2: ");
    scanf("%lf", &x2);

    //gather y points
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    //print points
    printf("Point #1 entered: x1 = %.3f; y1 = %.3f", x1, y1);
    printf("\nPoint #2 entered: x2 = %.3f; y2 = %.3f", x2, y2);

    //calculate and return distance
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return distance;
}

//returns a double representing the distance btwn two points
double calculateDistance(){
    double distance = distanceFormula();
    printf("\nThe distance between the two points is %.3f\n", distance);
    return distance;
}

//returns a double indicating difficulty level, prints perimeter of the user-input circle
double calculatePerimeter(){
    double radius = distanceFormula() / 2;
    double perimeter = 2 * PI * radius;
    printf("\nThe perimeter of the city encompassed by your request is %.3f\n", perimeter);
    return 3.0;
}

//returns a double indicating difficulty level, prints area of the user-input circle
double calculateArea(){
    double radius = distanceFormula() / 2;
    double area  = pow(radius, 2) * PI;
    printf("\nThe area of the city encompassed by your request is %.3f\n", area);
    return 2.0;
}

//returns a double indicating difficulty level, prints width of the user-input circle
double calculateWidth(){
    double width = distanceFormula();
    printf("\nThe width of the city encompassed by your request is %.3f\n", width);
    return 1.0;
}

//returns a double indicating difficulty level, prints height of the user-input circle
double calculateHeight(){
    double height = distanceFormula();
    printf("\nThe height of the city encompassed by your request is %.3f\n", height);
    return 1.0;
}