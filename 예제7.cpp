#include<stdio.h>

int main(){
	/*
	최소값 
	int h[]={170,178,175,180,177,167,189};
	int i, h_min = h[0], num;
	
	for(i=0;i<7;i++){
		if(h_min>h[i]){
			h_min = h[i];
			num = i; 
		}
	}
	printf("가장 키가 작은 학생번호 = %d번, 키 =%dcm \n", num+1, h_min);
	*/
	//최대값
	int h[]={200,178,175,180,177,167,189};
	int i, h_max = h[0], num;
	
	for(i=0;i<7;i++){
		if(h_max<h[i]){
			h_max = h[i];
			num = i; 
		}
	}
	printf("가장 키가 큰 학생번호=%d번, 키=%dcm \n", num+1, h_max);
}

