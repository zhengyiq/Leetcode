// ��ʵ��һ����������һ���ַ����е�ÿ���ո��滻�ɡ�%20�������磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe%20Are%20Happy��


//class Solution {
//public:
//    void replaceSpace(char* str, int length) { // �����length��ʾ�����ַ����ĳ���
//        int count = 0;
//        char* cur = str;
//        while (*cur != '\0') {
//            if (*cur == ' ') {
//                count++;
//            }
//            cur++;
//        }
//
//        int end = length; // ����'\0'��λ��
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
//      char* old_end = str + length; //C++Ҫ����'\0'
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