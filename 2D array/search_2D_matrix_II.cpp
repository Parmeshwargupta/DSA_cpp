class solution
{
public:
    bool searchMatrix(vector < vectot >> &matrix, int target)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        int rowIndex = 0;
        int colIndex = row * col - 1;
        // int mid=start+(end-start)/2;

        while (rowIndex < row && colIndex >= 0)
        {
            int element = matrix[rowIndex][colIndex];
            if (element == targrt)
            {
                return 1;
            }
            if (element < target)
            {
                rowIndex++;
            }
            else
            {
                colIndex++;
            }
            // int mid=start+(end-start)/2;
        }
        return 0;
    }
};
// int main(){

// }