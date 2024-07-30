//Name:Siddhant Kiran Bhosale
//PRN:23070123038
//Aim:Implemention of Decision Making Statements to check the Quadrants

#include <iostream>
using namespace std;

int main(){
    int x ,y;
    cout<<"Enter the value for x :"<<endl;
    cin>>x;
    cout<<"Enter the value for y:"<<endl;
    cin>>y;
    if (x > 0 && y>0) {
            cout<<"it is in first quadrant"<<endl;
    }
    else if (x<0 && y>0) {
         cout<<"it is in second quadrant"<<endl;
    }
    else if (x<0 && y<0) {
        cout<<"it is in third quadrant"<<endl;
    }
    else if (x>0 && y<0) {
        cout<<"it is in fourth quadrant"<<endl;
    }
    else{
        cout<<"it is on origin"<<endl;
    }
    
    return 0;
}


/*Output:
For First Quadrant-
Enter the value for x :
1
Enter the value for y:
1
it is in first quadrant

For Second Quadrant-
Enter the value for x :
-1
Enter the value for y:
1
it is in second quadrant

For Third Quadrant-
Enter the value for x :
-1
Enter the valu for y:
-1
it is in third quadrant

For Fourth Quadrant-
Enter the value for x :
1
Enter the valu for y:
-1
it is in fourth quadrant

For Origin-
Enter the value for x :
0
Enter the valu for y:
0
it is on origin

For Point On Y-Axis-
Enter the value for x :
0
Enter the value for y:
3
the point is on axis

For Point On X-Axis-
Enter the value for x :
1
Enter the value for y:
0
the point is on axis
*/