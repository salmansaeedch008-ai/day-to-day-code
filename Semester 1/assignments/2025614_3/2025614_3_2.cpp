#include <iostream>
#include <iomanip>

using namespace std;

const int MAX = 3; 

void displaySizeMenu();
void displayOperationMenu();

void inputMatrix(int A[][MAX], int rows, int cols, char name = 'A');
void printIntMatrix(const int A[][MAX], int rows, int cols);
void printDoubleMatrix(const double A[][MAX], int rows, int cols);

void checkMatrixType(int A[][MAX], int rows, int cols);

void checkMatrixOrder(int rows, int cols);

void calculateMatrixTranspose(int A[][MAX], int rows, int cols, int T[][MAX]);

void getCofactor(int A[][MAX], int temp[][MAX], int p, int q, int n);
int  determinant(int A[][MAX], int n);
void calculateMatrixAdjoint(int A[][MAX], int n, int adj[][MAX]);

void calculateMatrixInverse(int A[][MAX], int n, double inv[][MAX]);

void multiplyMatrices(int A[][MAX], int r1, int c1,  int B[][MAX], int r2, int c2, int R[][MAX]);

int main() {
    int A[MAX][MAX];
    int rows = 0, cols = 0;

    bool exitProgram = false;
    bool needNewMatrix = true;

    cout << "===== Matrix Solver (2x2 and 3x3) ====="<<endl<<endl;

    while (!exitProgram) {

        if (needNewMatrix) {
            int sizeChoice;
            do {
                displaySizeMenu();
                cin >> sizeChoice;
            } while (sizeChoice < 1 || sizeChoice > 2);

            if (sizeChoice == 1) {
                rows = cols = 2;
            } else {
                rows = cols = 3;
            }

            inputMatrix(A, rows, cols, 'A');
            needNewMatrix = false;
        }

        int choice;
        do {
            displayOperationMenu();
            cout<<"Please select one option (1-6): ";
            cin>>choice;
            if(choice<1 || choice>6){
                cout<<"Invalid input! Please try again.\n";
            }
        }while(choice<1 || choice>6);

        cout<<endl;

        switch(choice){
        case 1:{
            checkMatrixType(A, rows, cols);
            break;
        }
        case 2:{
            checkMatrixOrder(rows, cols);
            break;
        }
        case 3:{
            int T[MAX][MAX];
            calculateMatrixTranspose(A, rows, cols, T);
            cout<<"Transpose of matrix A : "<<endl;
            printIntMatrix(T, cols, rows);
            break;
        }

        case 4:{
            if(rows != cols){
                cout<<"Adjoint is defined only for square matrices."<<endl;
            }
            else{
                int adj[MAX][MAX];
                calculateMatrixAdjoint(A, rows, adj);
                cout<<"Adjoint of matrix A : "<<endl;
                printIntMatrix(adj, rows, cols);
            }
            break;
        }

        case 5:{
            if(rows != cols){
                cout<<"Inverse is defined only for square matrices."<<endl;
            } 
            else{
                double inv[MAX][MAX];
                calculateMatrixInverse(A, rows, inv);
            }
            break;
        }

        case 6:{ 
            int r2, c2;
            int B[MAX][MAX], R[MAX][MAX];

            int sizeChoice2;
            cout<<"Second matrix B : "<<endl;
            do {
                cout<<"Select order of B : "<<endl;
                cout<<"1- 2x2 "<<endl;
                cout<<"2- 3x3 "<<endl;
                cout<<"Enter your choice : ";
                cin>>sizeChoice2;
            }while(sizeChoice2 < 1 || sizeChoice2 > 2);

            if(sizeChoice2 == 1) {
            r2 = c2 = 2;
            }
            else{ 
                r2 = c2 = 3;
            }

 
            if(cols != r2){
                cout<<"Cannot multiply: columns of A must equal rows of B."<<endl;
            } 
            else{
                inputMatrix(B, r2, c2, 'B');
                multiplyMatrices(A, rows, cols, B, r2, c2, R);
                cout<<"Result of A x B : "<<endl;
                printIntMatrix(R, rows, c2);
            }
            break;
        }

        default:
            break;
        }

        int nextChoice;
        cout<<endl<<"---------------------------------------"<<endl;
        cout<<"What do you want to do now?"<<endl;
        cout<<"1- Perform another operation on the SAME matrix"<<endl;
        cout<<"2- Create a NEW matrix"<<endl;
        cout<<"3- Exit program"<<endl;
        cout<<"Enter choice : ";
        cin>>nextChoice;

        if(nextChoice == 1)
        {
            needNewMatrix = false;
        }
        else if(nextChoice == 2)
        {
            needNewMatrix = true;
        }
        else{
            exitProgram = true;
        }

        cout<<endl;
    }

    cout<<"Thank you for using Matrix Solver!"<<endl;
    return 0;
}

void displaySizeMenu(){
    cout<<"-------------------"<<endl;
    cout<<"Matrix sizes : "<<endl;
    cout<<"1- (2x2)"<<endl;
    cout<<"2- (3x3)"<<endl;
    cout<<"-------------------"<<endl;
    cout<<"Enter the option you want : ";
}

void displayOperationMenu(){
    cout<<"-------------------------------------------"<<endl;
    cout<<"1- Identify the type of matrix"<<endl;
    cout<<"2- Identify the order of the matrix"<<endl;
    cout<<"3- Find the transpose of the matrix"<<endl;
    cout<<"4- Find the adjoint of the matrix"<<endl;
    cout<<"5- Find the inverse of the matrix"<<endl;
    cout<<"6- Multiply two matrices"<<endl;
    cout<<"-------------------------------------------"<<endl;
}

void inputMatrix(int A[][MAX], int rows, int cols, char name) {
    cout<<endl<<"Enter elements of matrix "<<name<<" ("<<rows<<"x"<<cols<<") : "<<endl;
    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<cols ; j++) {
            cout<<name<<"["<<i<<"]["<<j<<"] = ";
            cin>>A[i][j];
        }
    }
    cout<<endl<<"Matrix "<<name<<" is : "<<endl;
    printIntMatrix(A, rows, cols);
}                                               //fixed till here

void printIntMatrix(const int A[][MAX], int rows, int cols){
    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j < cols ; j++){
            cout<<setw(8)<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}

void printDoubleMatrix(const double A[][MAX], int rows, int cols){
    cout<<fixed<<setprecision(3);
    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<cols ; j++){
            cout<<setw(10)<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}

void checkMatrixType(int A[][MAX], int rows, int cols){
    bool isSquare = (rows == cols);
    bool isZero = true;
    bool offDiagZero = true;
    bool diagAllEqual = true;
    bool diagAllOne = true;

    int diagVal = A[0][0];

    for(int i=0 ; i<rows ; i++){
        for (int j=0 ; j<cols ; j++){
            if (A[i][j] != 0){
                isZero = false;
            }
            if (i != j && A[i][j] != 0){
            offDiagZero = false;
            }
            if (i == j && A[i][j] != diagVal){
                diagAllEqual = false;
            }
            if (i == j && A[i][j] != 1){
                diagAllOne = false;
            } 
        }
    }

    cout<<"Matrix type : ";

    if(isZero){
        cout<<"Zero Matrix"<<endl;
        return;
    }

    if(!isSquare){
        cout<<"Rectangular Matrix ("<<rows<<"x"<<cols<< ")"<<endl;
        return;
    }

    if(offDiagZero && diagAllOne){
        cout<<"Identity Matrix"<<endl;
    } 
    else if(offDiagZero && diagAllEqual){
        cout << "Scalar Matrix"<<endl;
    }
    else if(offDiagZero){
        cout<<"Diagonal Matrix"<<endl;
    } 
    else{
        cout<<"Square Matrix"<<endl;
    }
}

void checkMatrixOrder(int rows, int cols){
    cout<<"Order of the matrix is: "<<rows<<" x "<<cols<<endl;
}

void calculateMatrixTranspose(int A[][MAX], int rows, int cols,  int T[][MAX]) {
    for (int i=0 ; i<rows ; i++) {
        for(int j=0 ; j<cols; j++){
            T[j][i] = A[i][j];
        }
    }
}

void getCofactor(int A[][MAX], int temp[][MAX], int p, int q, int n) {
    int i=0, j=0;
    for (int row=0 ; row<n ; row++) {
        for (int col=0 ; col<n ; col++) {
            if (row != p && col != q) {
                temp[i][j++] = A[row][col];
                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

int determinant(int A[][MAX], int n){
    if (n == 1) return A[0][0];

    int temp[MAX][MAX];
    int sign = 1;
    int det = 0;

    for (int f=0 ; f<n ; f++) {
        getCofactor(A, temp, 0, f, n);
        det += sign * A[0][f] * determinant(temp, n - 1);
        sign = -sign;
    }
    return det;
}

void calculateMatrixAdjoint(int A[][MAX], int n, int adj[][MAX]) {
    if (n == 1) {
        adj[0][0] = 1;
        return;
    }

    int sign;
    int temp[MAX][MAX];

    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<n ; j++){
            getCofactor(A, temp, i, j, n);
            sign = ((i + j) % 2 == 0) ? 1 : -1;
            adj[j][i] = sign * determinant(temp, n - 1);
        }
    }
}

void calculateMatrixInverse(int A[][MAX], int n, double inv[][MAX]) {
    int det = determinant(A, n);
    if (det == 0) {
        cout << "Determinant is 0, inverse does NOT exist."<<endl;
        return;
    }

    int adj[MAX][MAX];
    calculateMatrixAdjoint(A, n, adj);

    cout<<"Determinant = "<<det<<endl;
    cout << "Inverse of matrix A is : "<<endl;

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            inv[i][j] = adj[i][j] / (double)det;
        }
    }

    printDoubleMatrix(inv, n, n);
}

void multiplyMatrices(int A[][MAX], int r1, int c1,  int B[][MAX], int r2, int c2,  int R[][MAX]) {
    if (c1 != r2) {
        cout << "Matrix multiplication rule not satisfied."<<endl;
        return;
    }

    for(int i=0 ; i<r1 ; i++){
        for (int j=0 ; j<c2 ; j++){
            R[i][j] = 0;
            for(int k=0 ; k<c1 ; k++){
                R[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
