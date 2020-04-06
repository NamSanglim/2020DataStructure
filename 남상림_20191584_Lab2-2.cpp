//////////////////////////////////////////////////////////////
//Lab 2 : Compute Area of the Figures (�ٸ�ü ���� ���ϱ�) 
//Name : Nam Sang Lim
// ID : 20191584
// Program Description : Compute Area of the Figures (�ٸ�ü ���� ���ϱ�) Lab2-2
//Algorithm : math..? ���а��� ..? 
// Variable : angel[] : �ٰ��� ������ �Է� �޾ƾ� �ϴ� ���� ���� ���� �迭
/////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

struct Angle {
    string fig;
    int width;
    int height;
    int round;
    double area;
};

Angle angle[7];

int main() {
    cout << "INPUT DATA FILE : (7 �� ������)\n";
    for (int t = 0; t < 7; t++) {
        cin >> angle[t].fig;
        if (angle[t].fig == "triangle") {
            cin >> angle[t].width >> angle[t].height;
            angle[t].area = angle[t].width * angle[t].height / 2.0;
        }
        else if (angle[t].fig == "rectangle") {
            cin >> angle[t].width >> angle[t].height;
            angle[t].area = angle[t].width * angle[t].height;
        }
        else if (angle[t].fig == "circle") {
            cin >> angle[t].round;
            angle[t].area = angle[t].round * angle[t].round * 3.14;
        }
    }
   
    cout << "\nOUTPUT :" << endl;
    cout << fixed; //�Ҽ��� ������ ���� ���� �ڼ����� �𸣰���..
    cout.precision(2); //�Ҽ��� 2¶ �ڸ����� ����ϱ� ���� �����
    for (int t = 0; t < 7; t++) {
        cout << angle[t].fig << " ";
        if (angle[t].fig == "triangle") {
            cout << angle[t].width * 1.0 << " " << angle[t].height * 1.0 << " " << angle[t].area << endl;
        }
        else if (angle[t].fig == "rectangle") {
            cout << angle[t].width * 1.0 << " " << angle[t].height * 1.0 << " " << angle[t].area << endl;
        }
        else if (angle[t].fig == "circle") {
            cout << angle[t].round * 1.0 << " " << angle[t].area << endl;

        }
    }
}