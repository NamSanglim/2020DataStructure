//////////////////////////////////////////////////////////////
//Lab 1 : File IO Exercise
//Name : Nam Sang Lim
// ID : 20191584
// Program Description : basic Exercise1-2
//Algorithm : ������ �а� �ִ밪�� �ּҰ� �׸��� �� ��ġ�� ã��
// Variable : 
/////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

// �迭���� ���� ���� ���� ã�� ��ȯ�Ͽ� �ִ� �Լ�
int findMin(int data[], int n) {
    int min = data[0];
    for (int i = 0; i < n; i++) {
        if (data[i] < min) {
            min = i;
        }
    }return min;
}

// �迭���� ���� ū ���� ã�� ��ȯ�Ͽ� �ִ� �Լ�
int findMax(int data[], int n) {
    int max = data[0];
    for (int i = 0; i < n; i++) {
        if (data[i] > max) {
            max = i;
        }
    }
    return max;
}
int main() {
    int number, count = 0,  data[10];

    ifstream inFile("numberFile.txt");

    // ������ �а� �� ������ �迭�� �����ϴ� �ݺ���
    while (inFile >> number) {
        data[count++] = number;
    }

    int minnum = findMin(data, count); // ���� ���� ���� ã�� �Լ����� ��ȯ�� ���� minnum�� ����
    int maxnum = findMax(data, count); //���� ū ���� ã�� �Լ����� ��ȯ�� ���� maxnum�� ����

    // �� �� ������ ����� �ϴ� �����̴�. ���� �� ���� ��ġ�� ����Ѵ�.
    // ����� �ε����� 0���� �����ϱ� ������ ��ġ�� �� Ȯ���Ͽ��� �Ѵ�.
    cout << "Minimun number is " << data[minnum] << "at position " << minnum << endl;
    cout << "Maximum number is " << data[maxnum] << "at position " << maxnum << endl;
}