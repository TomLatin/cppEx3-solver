//
// Created by תם לטין on 25/04/2020.
//

#define EPSILON 0.0001
#include "doctest.h"
#include "solver.hpp"
#include <stdexcept>
using namespace std;
using namespace solver;

TEST_CASE("Test the function with RealVariable")
{
    RealVariable x;

            CHECK(solve(2*x-2 == 10)==8);
            CHECK(solve(15*x-5*x == 10)==1);
            CHECK(solve(2*x-3*x == 10)==-10);
            CHECK(solve(1000*x-2900 == 100)==3);
            CHECK(solve(6*x-2+3*x+x+42 == 10)==-3);
            CHECK(solve(9*x == 18)==2);
            CHECK(solve(7*x+11-x== 10+7)==1);
            CHECK(solve(49*x == 343)==7);
            CHECK(solve(x-15 == 8)==-23);
            CHECK(solve(-3*(-1*x-7)==8*x)==4.5);
            CHECK(solve(3*x/0.5*x)==6);
            CHECK(solve(6*x/0.5*x)==12);
            CHECK(solve(8*x/2*x)==4);
            CHECK(solve(27*x/3*x)==9);
            CHECK(solve( (7*x^2)  == 7)==1 );
            CHECK(solve( (11*x^2)+121 == 121)==0);
            CHECK(solve( (20*x^2)+100 ==420)==4);
            CHECK(solve( (x^2)  == 9)==3);
            CHECK(solve( (x^2) ==64)==8);

            CHECK(solve( (x^2) == 4)==2);
            CHECK(solve( (x^2)  == 16)==4);
            CHECK(solve(( x^2)  == 9)==3);
            CHECK(solve( (x^2) == 100)==10);
            CHECK(solve( (x^2)  == 81)==9);
            CHECK(solve( (x^2)  == 25)==5);
            CHECK(solve( (x^2) == 36)==6);
            CHECK(solve( (x^2)  == 196)==14);
            CHECK(solve( (x^2)  == 121)==11);
            CHECK(solve( (x^2) ==144)==12);
            CHECK(solve( (x^2) == 6241)==79);
            CHECK(solve( (x^2)  == 2401)==49);
            CHECK(solve(( x^2)  == 4356)==66);
            CHECK(solve( (x^2) == 10000)==100);
            CHECK(solve( (x^2)  == 9801)==99);
            CHECK(solve( (x^2) == 3136)==56);
            CHECK(solve( (x^2)  == 0)==0);

            CHECK(( solve ( 6*(x^2)+6*x+4==4*(x^2)+2*x+4) == -2  ||  solve (6*(x^2)+6*x+4==4*(x^2)+2*x+4) == 0 ));
            CHECK(( solve ( 3*(x^2)+22*x+57==(x^2)-3) == -5  ||  solve (3*(x^2)+22*x+57==(x^2)-3) == -6 ));
            CHECK(( solve ( (-1*x^2)+6*x-4==-2*(x^2)-4) == -9  ||  solve ( (-1*x^2)+6*x-4==-2*(x^2)-4) == 0 ));
            CHECK(( solve ((-1*x^2)+22*x+56==-3*(x^2)-4) == -6  ||  solve ( (-1*x^2)+22*x+56==-3*(x^2)-4 ) == -5));
            CHECK(( solve ( 2*(x^2)+4*x-21==-4*x+3 ) == -6  ||  solve ( 2*(x^2)+4*x-21==-4*x+3 ) == 2 ));
            CHECK(( solve ( 2*(x^2)+14*x+15==3 ) == -6  ||  solve (  2*(x^2)+14*x+15==3 ) == -1 ));
            CHECK(( solve ( (x^2)+5*x+7==-1*x-1 ) == -2  ||  solve ((x^2)+5*x+7==-1*x-1) == -4 ));
            CHECK(( solve ( (x^2)+6*x+9==1 ) == -2  ||  solve ((x^2)+6*x+9==1) == -4 ));
            CHECK(( solve ( 2*(x^2)-15*x+34==x+4) == 5  ||  solve (2*(x^2)-15*x+34==x+4) == 3 ));
            CHECK(( solve ( (x^2)-1*x-5==1 ) == -2  ||  solve ((x^2)-1*x-5==14) ==3 ));

    CHECK_THROWS( solve (0*x==1)  );
    CHECK_THROWS( solve (0*x==2346789)  );
    CHECK_THROWS( solve (0*x==686868)  );
    CHECK_THROWS( solve (0*x==9)  );
    CHECK_THROWS( solve (0*x==166)  );
    CHECK_THROWS( solve (0*x==15)  );

    CHECK_THROWS( solve (3*x-3*x==1)  );
    CHECK_THROWS( solve (376*x-376*x==2346789)  );
    CHECK_THROWS( solve (36*x-36*x==686868)  );
    CHECK_THROWS( solve (8883*x-8883*x==9)  );
    CHECK_THROWS( solve (37*x-37*x==166)  );
    CHECK_THROWS( solve (9*x-9*x==15)  );

    CHECK_THROWS( solve ((x^2)==-1)  );
    CHECK_THROWS( solve ((x^2)==-2346789)  );
    CHECK_THROWS( solve ((x^2)==-686868)  );
    CHECK_THROWS( solve ((x^2)==-9)  );
    CHECK_THROWS( solve ((x^2)==-166)  );
    CHECK_THROWS( solve ((x^2)==-15)  );

    CHECK_THROWS( solve ((x^2)+4==(x^2)+4-166)  );
    CHECK_THROWS( solve ((x^2)==(x^2)-15)  );
    CHECK_THROWS( solve (8883*x==8883*x+9)  );
    CHECK_THROWS( solve (37*x==37*x+166)  );
    CHECK_THROWS( solve (9*x==9*x-15)  );
}

TEST_CASE("Test the function with RealVariable")
{
    ComplexVariable y;
            CHECK(( solve((y^2)==-4)==complex<double> (0,2) || solve((y^2)==-4)==complex<double> (0,-2) ));
            CHECK((solve((y^2)+100==0)==complex<double> (0,10) ||solve((y^2)+100==0)==complex<double> (0,-10) ));
            CHECK((solve((y^2)+4*y+5==0)==complex<double> (-2,1) || solve((y^2)+4*y+5==0)==complex<double> (-2,-1) ));
            CHECK((solve((2*y^2)-6*y+5==0)==complex<double> (1.5,0.5) || solve((2*y^2)-6*y+5==0)==complex<double> (1.5,-0.5) ));
            CHECK( solve(7*y-complex<double>(13,1)==47+complex<double>(3,1)*y)==complex<double> (5,-4) );
}