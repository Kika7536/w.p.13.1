#include<iostream>
#include<string>

using namespace std;


void main() {

	int tableware[2][6]; 
	int plates[2][6];    
	int chairs[2][6];    

	for (int i = 0; i < 2; i++) {       //������� ������� ����� �� 3 �������� �������
		for (int j = 0; j < 6; j++) {
			tableware[i][j] = 3;
		}
	}

	for (int i = 0; i < 2; i++) {       //2 �������
		for (int j = 0; j < 6; j++) {
			plates[i][j] = 2;
		}
	}

	for (int i = 0; i < 2; i++) {      // � 1 �����
		for (int j = 0; j < 6; j++) {
			chairs[i][j] = 1;
		}
	}

	//�����������, ��� ��� ����� ����� �� �������� 0,0 � 0,1

	tableware[0][0]++; //���� ��� ������ ���. �����
	tableware[0][1]++;

	plates[0][0]++; //���� ������ ���. �������
	plates[0][1]++;

	chairs[0][4]++; //1 ����� 4 ���. ���� ��� ������� � ��������

	tableware[1][2]--; //����� ������, �����!!!

	tableware[0][1]--;
	tableware[1][2]++; //��� ���, ��� ����� ��������� ������

	plates[0][1]--; //�� �� ����� �������� �������

	

	
}