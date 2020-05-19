#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
        bool checkStraightLine(vector<vector<int>>& coordinates) {
            if(coordinates.size()==1)   return false;
            long A1,B1,C1;
            A1 = coordinates[1][1] - coordinates[0][1];
            B1 = coordinates[1][0] - coordinates[0][0];
            C1 = coordinates[0][1]*coordinates[1][0] - coordinates[0][0]*coordinates[1][1];
            if(coordinates.size()==2) {
                cout<<"The equation of straight line is  : "<<A1<<"x + "<<B1<<"y + "<<C1<<" = 0"<<"."<<endl;
                if((A1/B1)>0)
                    cout<<"And slop of straight line is  : -"<<A1<<"/"<<B1<<"."<<endl;
                else
                    cout<<"And slop of straight line is  : "<<A1<<"/"<<B1<<"."<<endl;
                return true;
            } else {
                bool result;
                for(int i=1; i<coordinates.size()-1; i++) {
                    long x1,x2,y1,y2,A2,B2,C2;
                    x1 = coordinates[i][0];
                    x2 = coordinates[i+1][0];
                    y1 = coordinates[i][1];
                    y2 = coordinates[i + 1][1];
                    A2 = y2 - y1;
                    B2 = x2 - x1;
                    C2 = (y1 * x2) - (x1 * y2);
                    //cout<<((((A1*B2)-(A2*B1))==0) && (((A1*C2)-(A2*C1))==0) && (((B1*C2)-(B2*C1))==0))<<endl;
                    result = ((((A1*B2)-(A2*B1))==0) && (((A1*C2)-(A2*C1))==0) && (((B1*C2)-(B2*C1))==0));
                }
                if(result)  {
                    cout<<"The equation of straight line is  : "<<A1<<"x + "<<B1<<"y + "<<C1<<" = 0"<<"."<<endl;
                    if((A1/B1)>0)
                        cout<<"And slop of straight line is  : -"<<A1<<"/"<<B1<<"."<<endl;
                    else
                        cout<<"And slop of straight line is  : "<<A1<<"/"<<B1<<"."<<endl;
                }
                return result;
            }
        }
};
int main() {
    int N,x,y;
    vector<vector<int>> coordinates;
    cout<<"Please enter the no of points : ";
    cin>>N;
    cout<<"Please Enter the X coordinate followed by Y coordinate separated by space "<<endl;
    for(int i=0; i<N; i++) {
        if(i==0) {
            cout<<"Enter first coordinate : ";
        }else if(i==1) {
            cout<<"Enter second coordinate : ";
        } else if(i==2) {
            cout<<"Enter 3rd coordinate : ";
        } else {
            cout<<"Enter "<<i+1<<"th coordinate : ";
        }
        vector<int> v;
        cin>>x;cin>>y;
        v.push_back(x);v.push_back(y);
        coordinates.push_back(v);
    }
    Solution solution;
    if(solution.checkStraightLine(coordinates)) {
        cout<<"Yes, It is straight line with above equation and slop. "<<endl;
    } else {
        cout<<"No, These coordinates not represent straight line. "<<endl;
    }


}
