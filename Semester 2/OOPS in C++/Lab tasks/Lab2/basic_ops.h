#ifndef BASIC_OPS_H
#define BASIC_OPS_H

inline double add(double a , double b){            //functions of a calculator
    return a + b;
}

inline double subtract(double a, double b){
    return a - b;
}

inline double multiply(double a , double b){
    return a * b;
}

inline double divide(double a , double b){
    if(b==0){
        return 0;
    }
    return a / b;
}

#endif