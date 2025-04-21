# ifndef CYLINDER_CPP
# define CYLINDER_CPP

#define pi 3.1415926535897932384626433
# include "Cylinder.h"

double Cylinder :: SurfaceArea(){
    double rsl = 0;
    rsl = pi*radius*2*(radius+height);
    return rsl;
}

double Cylinder :: Volume(){
    double rsl;
    rsl = pi*radius*radius*height;
    return rsl;
}

double Cylinder :: Circumference(){
    
    return pi * radius * 2;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << fixed << setprecision(3) << "Circumference: " << cldr.Circumference() << endl << "SurfaceArea: " << cldr.SurfaceArea() << endl << "Volume: " << cldr.Volume() << endl;
    return out;
}

# endif
