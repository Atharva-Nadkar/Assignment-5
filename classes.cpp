//  Created by Atharva Nadkar on 21/06/20.
//  Copyright © 2020 Atharva_Nadkar. All rights reserved.
//  Reading time into hh:mm:ss format an converting into total seconds

#include<algorithm>
#include<stdio.h>
#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
#include<sstream>

using namespace std;

//class to convert to seconds
class time
{
    public:
    
    // function to convert input integer into string
    void tostring(int i)
    {
        int s[2];
        s[1]=i%10;
        i/=10;
        s[0]=i%10;
        cout<<s[0]<<s[1];
    }
    
    // function to covert hours into seconds
    int hour(int x)
    {
        int i;
        i=60*60*x;
        return i;
    }
    
    // function to covert minutes into seconds
       int min(int x)
       {
           int i;
           i=60*x;
           return i;
       }
};
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    class time obj;
    int s,m,h;
    cout<<"Enter the time:\nHours? ";
    cin>>h;
    cout<<"Minutes? ";
    cin>>m;
    cout<<"Seconds? ";
    cin>>s;
    cout<<"The time is = ";
    obj.tostring(h);
    cout<<":";
    obj.tostring(m);
    cout<<":";
    obj.tostring(s);
    cout<<endl;
    
    cout<<"Time in total seconds: "<<s+obj.hour(h)+obj.min(m)<<endl;
    
    return 0;
}
