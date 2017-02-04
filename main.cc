 ///
 /// @file    main.cc
 /// @author  FZC(@1539954482@qq.com)
 /// @date    2017-02-02 09:18:10
 ///
 
#include <iostream>
#include<string.h>
using std::cout;
using std::endl;
int main()
{
	typedef struct student
	{
		int num;
		char name[10];
		float socre;
	}node;
	#if 0
	node stu1={20,"fzc"};
	cout<<"stu1.num="<<stu1.num<<endl;
	cout<<"stu1.name="<<stu1.name<<endl;
	stu1.num=30;
	cout<<"stu1.num="<<stu1.num<<endl;
	cout<<"stu1.name="<<stu1.name<<endl;
	return 0;
	#endif
	node stu2[2]={{20,"liming",67.9},{30,"fzc",89.8}};
}
	
