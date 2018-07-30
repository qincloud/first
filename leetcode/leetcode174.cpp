//
// Created by lzq996298643 on 18-7-28.
//
#include <iostream>

int m = 0, n = 0;

void parsedp(int** a, int m, int n){

    std::cout<<"begin"<<a<<std::endl;
    return;
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            std::cout<<a[i][j]<<",";
        }
        std::cout<<std::endl;
    }

    int dp[m][n];

    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            dp[i][j] = 0;
        }
    }

    dp[m-1][n-1] = a[m-1][n-1];

    for (int i = m - 2 ; i >= 0 ; i--){
        dp[i][n-1] = dp[i+1][n-1] - a[i][n-1];
    }

    for (int j = n - 2 ; j >= 0 ; j--){
        dp[m-1][j] = dp[m-1][j+1] - a[m-1][j];
    }

    for(int i = m-2 ; i >= 0 ;i--){
        for(int j = n-2 ; j >= 0 ; j--){
            int right = dp[i][j+1] - a[i][j];
            int down = dp[i+1][j] - a[i][j];
            dp[i][j] = std::min(right,down);
        }
    }
    std::cout<<"结果="<<dp[0][0]<<std::endl;
}

int main(){
    void parsedp(int **a, int m, int n);
    std::cout<<"请输入行数"<<std::endl;
    std::cin>>m;
    std::cout<<"请输入列数"<<std::endl;
    std::cin>>n;
    int a[m][n];
    for(int i = 0 ; i < m ; i++) {
        for (int j = 0; j < n; j++) {
            std::cin>>a[i][j];
        }
    }

    parsedp((int **)a, m, n);
    return 0;
}




