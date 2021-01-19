#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}
void updateImage(bool image[][M], int s, int y, int z){
    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
                if(pow(pow(i-y,2)+pow(j-z,2),0.5) <= s-1) image[i][j] = 1;

        }
    }

}
void showImage(const bool image[][M]){
    for(int i = 0; i<N ; ++i){
        if(i == 0){
            for(int k = 1; k <= M+2; k++){
            cout << "-";
            }
            cout << endl;
            
        }
        for(int j = 0; j < M; j++){
            if(j == 0) cout << "|";
            if(image[i][j]) cout << "*";
            else cout << " ";
            if(j == M-1) cout << "|" << endl;
        }
        if(i == N-1){
            for(int k = 1; k <= M+2; k++){
            cout << "-";
            }
            cout << endl;
            
        }
    }

}
