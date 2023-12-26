#include <iostream>
using namespace std;

class student {
public:
	int score;
	int id;
};
	void max(student* students, int size) {
		int maxscore = 0;
		int maxid = 0;
		for (int i = 0;i < size;i++) {
			if (students[i].score > maxscore) {
				maxscore = students[i].score;
				maxid = students[i].id;
			}
		}
	cout<< "最高分数的学生学号为：" << maxid << endl;

}

int main()
{
	student students[5];
	students[0].id = 1;
	students[0].score = 90;
	students[1].id = 2;
	students[1].score = 85;
	students[2].id = 3;
	students[2].score = 92;
	students[3].id = 4;
	students[3].score = 88;
	students[4].id = 5;
	students[4].score = 91;
	max(students, 5);
	return 0;
}