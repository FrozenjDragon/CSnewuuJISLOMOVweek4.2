//P10
// #include <iostream>
// using namespace std;
//
// int main() {
//     char command;
//
//     cin >> command;
//     switch (command) {
//         case 'g':
//             cout << "Go!" ;
//             break;
//         case 'y':
//             cout << "Get ready!" ;
//             break;
//         case 'r':
//             cout << "Stop!" ;
//             break;
//         default:
//             cout << "Wrong input" ;
//             break;
//     }
//     return 0;
// }

// P12
// #include <iostream>
// using namespace std;
//
// int main() {
//     int command;
//     cin >> command;
//
//         switch (command / 10) {
//             case 10:
//             case 9:
//                 cout << "A";
//                 break;
//             case 8:
//                 cout << "B";
//                 break;
//             case 7:
//                 cout << "C";
//                 break;
//             case 6:
//                 cout << "D";
//                 break;
//             case 5:
//             case 4:
//             case 3:
//             case 2:
//             case 1:
//             case 0:
//                 cout << "F";
//                 break;
//             default:
//                 cout << "Wrong input";
//         }
//     return 0;
//     }

// P12
// #include <iostream>
// using namespace std;
//
// int main() {
//     float x, y, z;
//     cin >> x >> y >> z;
//
//     if (x + y + z == 180) {
//         cout << "possible";
//     } else {
//         cout << "not possible";
//     }
//
//     return 0;
// }
// P13
// #include <iostream>
// using namespace std;
//
// int main() {
//  float a, b, c;
//  cin >> a >> b >> c;
//
//  if (a == 0) {
//   cout << "Error try non 0 numbers bro";
//
//  }
//
//  float d = b * b - 4 * a * c;
//
//  if (d < 0) {
//   cout << "No real roots." << endl;
//  } else {
//   float x1 = (-b + sqrt(d)) / (2 * a);
//   float x2 = (-b - sqrt(d)) / (2 * a);
//   cout<< x1 <<
//    x2 << endl;
//  }
//
//  return 0;
// }
// P14
// #include <iostream>
// using namespace std;
//
// int main() {
//     char ch;
//     cin >> ch;
//     if (ch >='a'&& ch<='z') {
//         cout <<"Lowercase letter";
//     }
//         else if (ch >='A' && ch<='Z') {
//             cout <<"Uppercase  letter";
//         }
//         else {
//             cout <<"Not a letter";
//         }
//
//
//     return 0;
// }
// p15
// #include <iostream>
//
// using namespace std;
//
// int main() {
//     double weight1, price1, weight2, price2;
//
//     cout << "Enter weight and price for package 1: ";
//     cin >> weight1 >> price1;
//
//     cout << "Enter weight and price for package 2: ";
//     cin >> weight2 >> price2;
//
//     double costPerUnit1 = price1 / weight1;
//     double costPerUnit2 = price2 / weight2;
//
//
//     cout << "Cost per unit (package 1): " << costPerUnit1   ;
//     cout << "Cost per unit (package 2): " << costPerUnit2 ;
//
//     if (costPerUnit1 < costPerUnit2) {
//         cout << "Package 1 has a better price." << endl;
//     }
//     else if (costPerUnit2 < costPerUnit1) {
//         cout << "Package 2 has a better price." << endl;
//     }
//     else {
//         cout << "Both packages have the same price." << endl;
//     }
//
//     return 0;
// }
//P16
// #include <iostream>
// using namespace std;
//
// int main() {
//     int number;
//     cout << "Enter a three-digit integer: "<<endl;
//     cin >> number;
//     if (number < 100 || number > 999) {
//         cout << "The number is not a three-digit integer." <<endl;
//     }
//     int firstDigit = number / 100;
//     int lastDigit = number % 10;
//     if (firstDigit == lastDigit) {
//         cout << number << " is a palindrome number." <<endl;
//     } else {
//         cout << number << " is not a palindrome number."<<endl;
//     }
//
//     return 0;
// }


