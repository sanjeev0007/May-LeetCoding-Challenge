/*

Problem Statement!!!

You are given an array coordinates, coordinates[i] = [x, y], where [x, y] represents the coordinate of a point. Check if these points make a straight line in the XY plane.


Input: coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
Output: true

Input: coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
Output: false
 

Constraints:

2 <= coordinates.length <= 1000
coordinates[i].length == 2
-10^4 <= coordinates[i][0], coordinates[i][1] <= 10^4
coordinates contains no duplicate point.

*/

class Solution {
public:
    
    //      here have to find the slope of any two line then check it with others y/x=(y2-y1)/(x2-x1) 
    bool checkStraightLine( vector<vector<int>>& coordinates ) {        
	int y = coordinates[1][1] - coordinates[0][1];
	int x = coordinates[1][0] - coordinates[0][0];     
	for( int i=2; i < coordinates.size(); i++ ) {
		auto p = coordinates[i];
		if( x*(p[1] - coordinates[0][1]) != y*(p[0] - coordinates[0][0]) )
			return false;
	}
	return true;

    }
};