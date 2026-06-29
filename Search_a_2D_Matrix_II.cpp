//==========METHOD 1===========
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        int m = matrix.size();
        int n = matrix[0].size();

        int rows = 0;
        int cols = n - 1;

        while(rows < m && cols >=0)
        {
            if(matrix[rows][cols] == target)
            {
                return true;
            }
            else if(matrix[rows][cols] > target)
            {
                cols--;
            }
            else
            {
                rows ++;
            }
        }

        return false;
    }

};

//==========METHOD 2==========

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int rows = matrix.size();
        int columns = matrix[0].size();

        for(int i = 0; i < rows; i++)
        {
            int start = 0;
            int end = columns - 1;

            while(start <= end)
            {
                int mid = (start + end)/2;

                if(matrix[i][mid] == target)
                {
                    return true;
                    break;
                }
                else if(matrix[i][mid] < target)
                {
                    start = mid + 1;
                }
                else 
                {
                    end = mid - 1;
                }
            }
        }

        return false;
    }
};

//=========METHOD 3 ==========

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(matrix[i][j] == target)
                {
                    return true;
                }
            }
        }

    return false;
    }
};