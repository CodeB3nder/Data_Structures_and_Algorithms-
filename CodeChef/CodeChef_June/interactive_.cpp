# include <iostream>
# include <cstring>
# include <cstdio>

using namespace std;

int main(){
    int l=1;
    int r=1000000;
    while (l!=r)
    {
        int mid = (l+r+1)/2;
        cout << mid << endl;
        fflush(stdout);

        char response[3];
        cin >> response;

        if(strcmp(response, "<") == 0)
            r = mid-1;
        else 
            l = mid;
    }
    cout << "! " << l << endl;
    fflush(stdout);
    
}