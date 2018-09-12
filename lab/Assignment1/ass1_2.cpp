#include<iostream>

using namespace std;

class mrks
{
	public:
	int num;
	int i;
};

class student
{
	public:
	string name;
	int roll;
	int dob;
	int marks[5];
	char grades[5];
};

int main()
{
	cout<<"Enter no. of students : ";
	int num;
	cin>>num;
	class student details[num];
	int cnt=0;
	for(int i=0 ; i<num ; i++)
	{
		cout<<"\nEnter name : ";
		cin>>details[cnt].name;
		cout<<"\nEnter Roll No. : ";
		cin>>details[cnt].roll;
		cout<<"\nEnter DOB(ddmmyyyy) : ";
		cin>>details[cnt].dob;
		cout<<"\nEnter Marks of 5 subjects : ";
		for(int j=0 ; j<5 ; j++)
			cin>>details[cnt].marks[j];
		cnt++;
	}
	/*
	int num=4;
	class student details[4];
	details[0].marks[0]=45;
	details[0].marks[1]=23;
	details[0].marks[2]=67;
	details[0].marks[3]=89;
	details[0].marks[4]=12;
	
	details[1].marks[0]=12;
	details[1].marks[1]=45;
	details[1].marks[2]=23;
	details[1].marks[3]=67;
	details[1].marks[4]=89;
	
	details[2].marks[0]=90;
	details[2].marks[1]=4l;
	details[2].marks[2]=10;
	details[2].marks[3]=70;
	details[2].marks[4]=60;
	
	details[3].marks[0]=29;
	details[3].marks[1]=46;
	details[3].marks[2]=67;
	details[3].marks[3]=29;
	details[3].marks[4]=19;
	*/
	
	for(int k=0 ; k<5 ; k++)
	{
		int st1=(num+1)/2;
		int st2=num-st1;
		class mrks marks[num];
		
		
		for(int i=0 ; i<num ; i++)
		{
			marks[i].num=details[i].marks[k];
			marks[i].i=i;
		}
		
		
		int sta=((0.25)*(float)(num));
		int stb=st1-sta;
		int std=((0.1)*(float)(num));
		int stc=st2-std;
		
		
		//printf("%d %d %d %d\n",sta,stb,stc,std);
		
		
		for(int i=0 ; i<num-1 ; i++)
		{
			for(int j=i ; j<num ; j++)
			{
				if(marks[i].num<marks[j].num)
				{
					class mrks temp;
					temp.num=marks[i].num;
					temp.i=marks[i].i;
					marks[i].num=marks[j].num;
					marks[i].i=marks[j].i;
					marks[j].num=temp.num;
					marks[j].i=temp.i;
				}
			}
		}
		
		
		/*for(int i=0 ; i<num ; i++)
			printf("%d %d\n",marks[i].num,marks[i].i);*/
		
		
		for(int i=0 ; i<sta ; i++)
		{
			details[marks[i].i].grades[k]='a';
		}
		
		for(int i=sta ; i<sta+stb ; i++)
		{
			details[marks[i].i].grades[k]='b';
		}
		
		for(int i=sta+stb ; i<sta+stb+stc ; i++)
		{
			details[marks[i].i].grades[k]='c';
		}
		
		for(int i=sta+stb+stc ; i<sta+stb+stc+std ; i++)
		{
			details[marks[i].i].grades[k]='d';
		}
		printf("Grades for Subject %d : \n",k+1);
		for(int i=0 ; i<num ; i++)
			printf("%c ",details[i].grades[k]);
		printf("\n");
	}
	
	
	return 0;
}

