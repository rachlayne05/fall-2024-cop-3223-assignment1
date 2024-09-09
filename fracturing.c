/*
 * Rachel Heise
 * UCFID: 5620715
 */

#include <stdio.h>
#include <math.h>

//defining pi
#define PI 3.14159

//asking the user for an x1 value
double askForX1() {
    double value;
    printf("Enter a value for x1: ");
    scanf("%lf", &value);
    return value;
}

//asking the user for an x2 value
double askForX2() {
    double value;
    printf("Enter a value for x2: ");
    scanf("%lf", &value);
    return value;
}

//asking the user for a y1 value
double askForY1() {
    double value;
    printf("Enter a value for y1: ");
    scanf("%lf", &value);
    return value;
}

//asking the user for a y2 value
double askForY2() {
    double value;
    printf("Enter a value for y2: ");
    scanf("%lf", &value);
    return value;
}

//output to the user for points entered
void outputPointsEntered (double x1, double y1, double x2, double y2) {
    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);
}

//calculate the distance between points
double calculateBetweenPoints(double x1, double y1, double x2, double y2) {
    double distance;
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return distance;
}

//calculating distance
double calculateDistance() {
    
    double x1, x2, y1, y2, distance;

    x1 = askForX1();
    y1 = askForY1();
    x2 = askForX2();
    y2 = askForY2();
    
    distance = calculateBetweenPoints(x1, y1, x2, y2);

    outputPointsEntered (x1, y1, x2, y2);
    printf("The distance between the two points is %lf\n", distance);

    return distance;
}

//calculating perimeter
double calculatePerimeter() {
    
    double x1, x2, y1, y2, perimeter;

    x1 = askForX1();
    y1 = askForY1();
    x2 = askForX2();
    y2 = askForY2();
    
    //formula for calculating perimeter
    perimeter = 2 * PI * (calculateBetweenPoints(x1, y1, x2, y2) / 2);

    outputPointsEntered (x1, y1, x2, y2);
    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);

    return 4.8;
}

//calculating area
double calculateArea() {
    
    double x1, x2, y1, y2, area;

    x1 = askForX1();
    y1 = askForY1();
    x2 = askForX2();
    y2 = askForY2();
    
    //formula for calculating area
    area = PI * (calculateBetweenPoints(x1, y1, x2, y2) / 2) * (calculateBetweenPoints(x1, y1, x2, y2) / 2);

    outputPointsEntered (x1, y1, x2, y2);
    printf("The area of the city encompassed by your request is %lf\n", area);

    return 4.8;
}

//calculating width
double calculateWidth() {
    
    double x1, x2, y1, y2, width;

    x1 = askForX1();
    y1 = askForY1();
    x2 = askForX2();
    y2 = askForY2();
    
    //formula for calculating width
    width = calculateBetweenPoints(x1, y1, x2, y2);

    outputPointsEntered (x1, y1, x2, y2);
    printf("The width of the city encompassed by your request is %lf\n", width);

    return 3.5;
}

//calculating height
double calculateHeight() {
    
    double x1, x2, y1, y2, height;

    x1 = askForX1();
    y1 = askForY1();
    x2 = askForX2();
    y2 = askForY2();
    
    //formula for calculating height
    height = calculateBetweenPoints(x1, y1, x2, y2);

    outputPointsEntered (x1, y1, x2, y2);
    printf("The width of the city encompassed by your request is %lf\n", height);

    return 3.5;
}

//main function running all the previously defined functions
int main(int argc, char **argv) {

    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;

}