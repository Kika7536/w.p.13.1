#include<iostream>
#include<string>

using namespace std;


void main() {

	int tableware[2][6]; 
	int plates[2][6];    
	int chairs[2][6];    

	for (int i = 0; i < 2; i++) {       //раздаем каждому гостю по 3 столовых прибора
		for (int j = 0; j < 6; j++) {
			tableware[i][j] = 3;
		}
	}

	for (int i = 0; i < 2; i++) {       //2 тарелки
		for (int j = 0; j < 6; j++) {
			plates[i][j] = 2;
		}
	}

	for (int i = 0; i < 2; i++) {      // и 1 стулу
		for (int j = 0; j < 6; j++) {
			chairs[i][j] = 1;
		}
	}

	//договоримся, что вип гости сидят на позициях 0,0 и 0,1

	tableware[0][0]++; //даем вип гостям доп. ложки
	tableware[0][1]++;

	plates[0][0]++; //даем гостям доп. тарелки
	plates[0][1]++;

	chairs[0][4]++; //1 место 4 ряд. Стул для женщины с ребенком

	tableware[1][2]--; //Ложку украли, ироды!!!

	tableware[0][1]--;
	tableware[1][2]++; //Тот вип, что ближе поделился ложкой

	plates[0][1]--; //Он же отдал ненужную тарелку

	

	
}