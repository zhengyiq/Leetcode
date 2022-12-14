/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 * 在一个二维数组array中（每个一维数组的长度相同），每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
 *
 * @param target int整型
 * @param array int整型二维数组
 * @param arrayRowLen int array数组行数
 * @param arrayColLen int* array数组列数
 * @return bool布尔型
 */
//bool Find(int target, int** array, int arrayRowLen, int* arrayColLen) {
//    // write code here
//    int i = 0;
//    int j = *arrayColLen - 1;
//    while (i <= arrayRowLen - 1 && j >= 0)
//    {
//        if (array[i][j] == target)
//        {
//            return true;
//        }
//        else if (array[i][j] > target)
//        {
//            j--;
//        }
//        else //array[i][j] < target
//        {
//            i++;
//        }
//    }
//
//    return false;
//}