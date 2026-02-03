#ifndef SCIENTIFIC_OPS_H
#define SCIENTIFIC_OPS_H

#include<cmath>

inline double power(double base , double exp){           //scientific functions
    return pow(base , exp);
}

inline double squareroot(double n){
    if(n<0){
        return 0;
        return sqrt(n);
    }
}

inline double naturallog(double n){
    if(n<=0){
        return n;
        return log(n);
    }
}

#endif