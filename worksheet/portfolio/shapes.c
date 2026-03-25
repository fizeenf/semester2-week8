
#include <stdbool.h>
#include <math.h>

#include "shapes.h"

Point makePoint( float x, float y ) {
    Point pnt;
    pnt.x = x, pnt.y = y;
    return pnt;
}

Line makeLine(Point pnt1, Point pnt2){
    Line ln;
    ln.p[0] = pnt1, ln.p[1] = pnt2;
    return ln;
    
}

Triangle makeTriangle(Point pnt1, Point pnt2, Point pnt3){
    Triangle Trn;
    Trn.p[0] = pnt1, Trn.p[1] = pnt2, Trn.p[2] = pnt3;
    return Trn;
}

float lineLength(Line ln) {
    //distance formula using two points for a line
    float first = ln.p[0].x - ln.p[1].x, second = ln.p[0].y - ln.p[1].y;
    float len = sqrt((first * first) + (second * second));
    return len;
}

float triangleArea (Triangle Trn){
    //area using three points 
    float x0 = Trn.p[0].x,  y0 = Trn.p[0].y, x1= Trn.p[1].x, y1 = Trn.p[1].y, x2 = Trn.p[2].x, y2 = Trn.p[2].y;
    float area = 0.5f * ((x0 * (y1-y2)) + (x1 * (y2-y0)) + (x2 * (y0-y1)));
    return -area; //for some reason, was returning the negative value so i switched it so it would work
}

bool samePoint(Point pnt1, Point pnt2){
    return (fabsf(pnt1.x - pnt2.x) < 1.0e-6) && (fabsf(pnt1.y - pnt2.y) < 1.0e-6); //used adivsed method here
}
bool pointInLine(Point pnt, Line ln){
    return samePoint(pnt, ln.p[0]) || samePoint(pnt, ln.p[1]);
}

bool pointInTriangle(Point pnt, Triangle Trn){
    return samePoint(pnt, Trn.p[0]) || samePoint(pnt, Trn.p[1]) || samePoint(pnt, Trn.p[2]);
}
// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()
