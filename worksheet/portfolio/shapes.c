
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




// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()
