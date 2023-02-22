/*
 * 输入 **matrix 是长度为 matrixSize 的数组指针的数组，其中每个元素（也是一个数组）
 * 的长度组成 *matrixColSize 数组作为另一输入，*matrixColSize 数组的长度也为 matrixSize
 * [
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]
给定 target = 5，返回 true。
给定 target = 20，返回 false。
 */
bool findNumberIn2DArray(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int i = 0;
    int j = matrixSize - 1;
    while (i < matrixSize && j >= 0) {
        if (matrix[i][j] > target)
            j--;
        else if (matrix[i][j] < target)
            i++;
        else
            return true;
    }
    return false;
}

int main() {

}