// 请实现一个函数，将一个字符串中的每个空格替换成“%20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。


//class Solution {
//public:
//    void replaceSpace(char* str, int length) { // 这里的length显示的是字符串的长度
//        int count = 0;
//        char* cur = str;
//        while (*cur != '\0') {
//            if (*cur == ' ') {
//                count++;
//            }
//            cur++;
//        }
//
//        int end = length; // 包括'\0'的位置
//        int begin = 0;
//        int new_end = length + count * 2;
//
//        while (end >= begin) {
//            if (str[end] == ' ') {
//                str[new_end--] = '0';
//                str[new_end--] = '2';
//                str[new_end--] = '%';
//                end--;
//            }
//            else {
//                str[new_end--] = str[end];
//                end--;
//                cout << 1 << endl;
//            }
//        }
//    }
//};
// class Solution {
//   public:
//     void replaceSpace(char* str, int length) {
//         int count = 0;
//         char* start = str;
//         while (*start) {
//             if (isspace(*start)) {
//                 count++;
//             }
//          start++;
//         }
//      char* old_end = str + length; //C++要考虑'\0'
//         char* new_end = str + length + 2 * count;
//         while (old_end >= str && new_end >= str) {
//             if (!isspace(*old_end)) {
//                 *new_end = *old_end;
//                 new_end--; old_end--;
//             }
//          else{
//                 *new_end-- = '0';
//                 * new_end-- = '2';
//                 * new_end-- = '%';
//                 old_end--;
//             }
//         }
//     }
// };