#include <stdio.h>

int main(){
	int a[4][2];
	int i, j, tot;
	double avg;
	
	for(i=0;i< 4;i++){
			printf("%d번 학생의 수학, C언어 성적 입력: ", i+1);
			scanf(" %d %d", &a[i][0], &a[i][1]);

	}
	for(i=0;i<4;i++){
			tot = a[i][0]+a[i][1];
			avg = tot/2.0;
			printf("%d번 학생의 총점 : %d, 평균: %.2f\nn", i+1, tot, avg);
	}
}

