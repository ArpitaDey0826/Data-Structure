#include <iostream>
#include <vector>

using namespace std;


int matrixChainMultiplication(vector<int>& dimensions) {
    int n = dimensions.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));


    for (int i = 1; i < n; ++i) {
        dp[i][i] = 0;
    }


    for (int chainLength = 2; chainLength < n; ++chainLength) {
        for (int i = 1; i < n - chainLength + 1; ++i) {
            int j = i + chainLength - 1;
            dp[i][j] = INT_MAX;
            for (int k = i; k <= j - 1; ++k) {
                int cost = dp[i][k] + dp[k + 1][j] + dimensions[i - 1] * dimensions[k] * dimensions[j];
                if (cost < dp[i][j]) {
                    dp[i][j] = cost;
                }
            }
        }
    }
    return dp[1][n - 1];
}

int main() {

    vector<int> dimensions = {10, 30, 5, 60};


    cout << "Dimensions of matrices: ";
    for (int dim : dimensions) {
        cout << dim << " ";
    }
    cout << endl;

    int minCost = matrixChainMultiplication(dimensions);
    cout << "Minimum cost of matrix chain multiplication: " << minCost << endl;

    return 0;
}
