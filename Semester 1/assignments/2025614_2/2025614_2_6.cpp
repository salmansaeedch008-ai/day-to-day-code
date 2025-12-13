#include <iostream>
using namespace std;
int findTileSize(int length , int width){
    while(width !=0){
        int r = length % width;     // finding graetest common divisor that should be the size of tile
        length = width;
        width = r;
    }
    return length;
}

int findNumberOfTiles(int roomLength , int roomWidth , int sizeOfTile){
    int h = (roomLength/sizeOfTile)*(roomWidth/sizeOfTile);       // finding number of tiles
    return h;
}

int main(){

    int length , width;
    do{
        cout<<"enter length = ";
        cin>>length;
        if(length<=0){
            cout<<"invalid length, please again";
        }
    }while(length<=0);

    do{
        cout<<"enter width = ";
        cin>>width;
        if(width<=0){
            cout<<"invalid input, please again";
        }
    }while(width<=0);

    int g = findTileSize(length,width);
    int f = findNumberOfTiles(length , width , g);

    cout<<"side length of the largest possible square tile = "<<g<<endl;
    cout<<"number of tiles = "<<f<<endl;
    return 0;
}