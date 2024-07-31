#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define cyr cout<<"YES"<<endl; return ;
#define cnr cout<<"NO"<<endl; return ;
#define vll vector<ll>
#define srt(x) sort(begin(x),end(x))
#define vi vector<int>
#define rev(x) reverse(begin(x),end(x))
#define printarr(arr) for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";
#define sortr(x) sort(rbegin(x),rend(x))
#define vpll vector<pair<ll,ll>>

using namespace std;

bool isValid(vector<string>& matrix, int x1, int y1, int x2, int y2) {
    char color = matrix[x1][y1];
    for (int i = x1; i <= x2; ++i) {
        for (int j = y1; j <= y2; ++j) {
            if (matrix[i][j] != color) {
                return false;
            }
        }
    }
    return true;
}

void makeSquare(vector<string>& matrix, int x1, int y1, int x2, int y2, char color) {
    for (int i = min(x1, x2); i <= max(x1, x2); ++i) {
        for (int j = min(y1, y2); j <= max(y1, y2); ++j) {
            matrix[i][j] = color;
        }
    }
}

bool canMakeAllSame(vector<string>& matrix, char color) {
    int n = matrix.size();

    // Find the first occurrence of the given color
    int x1 = -1, y1 = -1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == color) {
                x1 = i;
                y1 = j;
                break;
            }
        }
        if (x1 != -1) break;
    }

    if (x1 == -1) return true; // If the matrix already has the desired color

    // Find the adjacent occurrence of the given color
    int x2 = -1, y2 = -1;
    for (int j = 0; j < n; ++j) {
        if (matrix[x1 + 1][j] == color) {
            x2 = x1 + 1;
            y2 = j;
            break;
        }
    }

    if (x2 == -1) return false; // If there's no adjacent occurrence of the color

    // Make all cells between (x1, y1) and (x2, y2) the given color
    makeSquare(matrix, x1, y1, x2, y2, color);

    // Check if the matrix has become all of the same color
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] != color) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int n = 6; // Size of the matrix
    vector<string> matrix = {"WWWWBW",
                             "WBWWWW",
                             "BBBWWW",
                             "BWWWBB",
                             "WWBWBB",
                             "BBBWBW"};

    // Try to make all cells white
    if (canMakeAllSame(matrix, 'W')) {
        cy; 
    } else {
        // If all cells couldn't be made white, try making them all black
        if (canMakeAllSame(matrix, 'B')) {
            cy;
        } else {
            cn;
            // cout << "It's not possible to make all cells white or all cells black.\n";
        }
    }

    return 0;
}
