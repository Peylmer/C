#include<stdio.h>
#include<math.h>
int main() {
	double y;
	int x,m;
	for(y=10; y>=-10; y--) {
		m=2.5*sqrt(100-y*y); /*������y��Ӧ��������m��2.5����Ļ�ݺ�ȵ���ϵ����Ϊ��Ļ��
�о�����о࣬�����е�����ʾ�����Ľ�����Բ*/
		for(x=1; x<30-m; x++) printf(" "); /*ͼ�����հ׿���*/
		printf("*"); /*Բ�����*/
		for(; x<30+m; x++) printf(" "); /*ͼ�εĿ��Ĳ��ֿ���*/
		printf("*\n"); /*Բ���Ҳ�*/
	}
	return 0;
}
