//////////////////////////////////////////////////////////////
//Lab 1 : File IO Exercise
//Name : Nam Sang Lim
// ID : 20191584
// Program Description : basic Exercise1-1
//Algorithm : ���� �����а� �ٸ����� �ܾ� �� ����, �� �ܾ���� ����ϱ�
// Variable : buffur[] , line 
/////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int WordCount(string buffer) {
    int i = 0, IN = 1, OUT = 0;
    int state = OUT;
    int wc = 0;

    while (buffer[i] != '\0') { //���� ���� ���� ���������� �ݺ��ϱ�
        if (isalpha(buffer[i])) { //���� �ܾ �������� Ȯ���ϰ�
            if (state == OUT) {   
                ++wc; 
                //�ܾ ������ ���� +1 �ϱ�
                 state = IN; 
            }
        }
        else if (buffer[i] == ' ')
            state = OUT;
        i++;
    }return wc; // �� �ܾ��� ���� ����
}

int main() {

    ifstream infile;

    char buffer[999];
    int wc = 0;
    int total = 0;
    infile.open("lab1-1.dat"); 

    while (infile.getline(buffer, 999)) {
        cout << buffer << endl;
        total = WordCount(buffer);
        cout << "The number of words : " << total << endl;
        wc = wc + total;
    }
    cout << "Total Number of Words : " << wc << endl;

    infile.close(); //�� �� �� ������ �ٽ� �ݾ� �־���Ѵ�
    return 0;
}

