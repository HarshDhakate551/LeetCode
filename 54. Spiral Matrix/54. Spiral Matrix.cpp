class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int left = 0;
        int right = matrix[0].size() - 1;
        int top = 0;
        int bottom = matrix.size() - 1;
        vector<int> ans;
        if (matrix.size() == 0)
            return ans;

        while (top <= bottom && left <= right)
        {
            // right  -->
            for (int i = left; i <= right; i++)
            {
                ans.push_back(matrix[top][i]);
                cout << matrix[top][i] << "R ";
            }
            top++;

            // bottom  |
            for (int i = top; i <= bottom; i++)
            {
                ans.push_back(matrix[i][right]);
                cout << matrix[i][right] << "B ";
            }
            right--;

            if (top <= bottom)
            {
                // left
                for (int i = right; i >= left; i--)
                {
                    ans.push_back(matrix[bottom][i]);
                    cout << matrix[bottom][i] << "L ";
                }
                bottom--;
            }

            // up
            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                {
                    ans.push_back(matrix[i][left]);
                    cout << matrix[i][left] << "U ";
                }
                left++;
            }
        }

        return ans;
    }
};