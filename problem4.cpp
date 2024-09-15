#include <iostream>
using namespace std;

int main() {
    int N; 
    const int group_size = 50;  
    cout << "Enter the number of students: ";
    cin >> N;
    int remainder = N % group_size;  
    int free_computers = group_size - remainder;
    free_computers = free_computers % group_size;
    cout << "Number of free computers in the last group: " << free_computers << endl;
    return 0;
}