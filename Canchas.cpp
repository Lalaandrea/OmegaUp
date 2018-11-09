#include <iostream>
#include <tgmath.h> 
#include <stdlib.h>
#include <vector> 

typedef long long int lli;
typedef unsigned char byte;
using namespace std;

int main() {
	vector<vector<int>> RectangleA (4,vector<int>(2));
	vector<vector<int>> RectangleB (4,vector<int>(2));
	std::vector<vector<int>> PointsInside;
	//Point x_1 y_1 y x_2 y_2 of the Rectangle A
	cin >> RectangleA[0][0] >> RectangleA[0][1] >> RectangleA[1][0] >> RectangleA[1][1];
	
	//Point x_3 and y_3 given by x_1 and y_2
	RectangleA[2][0] = RectangleA[0][0];
	RectangleA[2][1] = RectangleA[1][1];
	//Point x_4 and y_4 given by x_2 and y_1
	RectangleA[3][0] = RectangleA[1][0];
	RectangleA[3][1] = RectangleA[0][1];
	//Then we have the matrix with the 4 ponits en pos [0] is the x cordinates and in the position [1] teh y cordinates

	//Point x_1 y_1 y x_2 y_2 of the Rectangle B
	cin >> RectangleB[0][0] >> RectangleB[0][1] >> RectangleB[1][0] >> RectangleB[1][1];
	//Point x_3 and y_3 given by x_1 and y_2
	RectangleB[2][0] = RectangleB[0][0];
	RectangleB[2][1] = RectangleB[1][1];
	//Point x_4 and y_4 given by x_2 and y_1
	RectangleB[3][0] = RectangleB[1][0];
	RectangleB[3][1] = RectangleB[0][1];
	//Then we have the matrix with the 4 ponits en pos [0] is the x cordinates and in the position [1] teh y cordinates
	for(char i=0; i<4; i++){
		for (char j = 0; j < 1; j++)
		{
			cout << RectangleB[i][j] << " " << RectangleB[i][j+1] << endl;
		}
	}

	byte NPointsInside = 0;


	//Obteniendo el area de ambos
	lli AreaA= abs(RectangleA[0][0] - RectangleA[1][0]) * abs(RectangleA[0][1] - RectangleA[1][1]);
	lli AreaB= abs(RectangleB[0][0] - RectangleB[1][0]) * abs(RectangleB[0][1] - RectangleB[1][1]);
	cout << AreaA << " " << AreaB << endl; 
	// Our rectanlge base is the Rectangle A
	if(AreaA >=  AreaB){
		//Look for points in B inside the rectangleA
		//For point x_1 y_1
		if (RectangleB[0][0] <= RectangleA[1][0] && RectangleB[0][0] >= RectangleA[0][0])
		{
			if (RectangleB[0][1] <= RectangleA[1][1] && RectangleB[0][1] >= RectangleA[0][1])
			{
				NPointsInside++;

				cout << "Is inside the position x_1 y_1" << endl;
			/* code */
			}
			
		}
		//For point x_2 y_2
		if (RectangleB[1][0] <= RectangleA[1][0] && RectangleB[1][0] >= RectangleA[0][0])
		{
			if (RectangleB[1][1] <= RectangleA[1][1] && RectangleB[1][1] >= RectangleA[0][1])
			{
				NPointsInside++;

				cout << "Is inside the position x_2 y_2" << endl;
			/* code */
			}
			
		}
		//For point x_3 y_3
		if (RectangleB[2][0] <= RectangleA[1][0] && RectangleB[2][0] >= RectangleA[0][0])
		{
			if (RectangleB[2][1] <= RectangleA[1][1] && RectangleB[2][1] >= RectangleA[0][1])
			{
				NPointsInside++;

				cout << "Is inside the position x_3 y_3" << endl;
			/* code */
			}
			
		}
		//For point x_4 y_4
		if (RectangleB[3][0] <= RectangleA[1][0] && RectangleB[3][0] >= RectangleA[0][0])
		{
			if (RectangleB[3][1] <= RectangleA[1][1] && RectangleB[3][1] >= RectangleA[0][1])
			{
				NPointsInside++;

				cout << "Is inside the position x_4 y_4" << endl;
			/* code */
			}
			
		}
	}
	// Our rectanlge base is the Rectangle B
	else{
		//Look for points in A inside the rectangleB
		//For x_1 y_1
		if (RectangleA[0][0] <= RectangleB[1][0] && RectangleA[0][0] >= RectangleB[0][0])
		{
			if (RectangleA[0][1] <= RectangleB[1][1] && RectangleA[0][1] >= RectangleB[0][1])
			{
				NPointsInside++;
				cout << "Is inside the position x_1 y_1" << endl;
			/* code */
			}
			
		}
		//For x_2 y_2
		if (RectangleA[1][0] <= RectangleB[1][0] && RectangleA[1][0] >= RectangleB[0][0])
		{
			if (RectangleA[1][1] <= RectangleB[1][1] && RectangleA[1][1] >= RectangleB[0][1])
			{
				NPointsInside++;
				cout << "Is inside the position x_2 y_2" << endl;
			/* code */
			}
			
		}
		//For x_3 y_3
		if (RectangleA[2][0] <= RectangleB[1][0] && RectangleA[2][0] >= RectangleB[0][0])
		{
			if (RectangleA[2][1] <= RectangleB[1][1] && RectangleA[2][1] >= RectangleB[0][1])
			{
				NPointsInside++;
				cout << "Is inside the position x_3 y_3" << endl;
			/* code */
			}
			
		}
		//For x_4 y_4
		if (RectangleA[3][0] <= RectangleB[1][0] && RectangleA[3][0] >= RectangleB[0][0])
		{
			if (RectangleA[3][1] <= RectangleB[1][1] && RectangleA[3][1] >= RectangleB[0][1])
			{
				NPointsInside++;
				cout << "Is inside the position x_4 y_4" << endl;
			/* code */
			}
			
		}


	}
	
	
	return 0;
}
