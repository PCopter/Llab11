#include<iostream>
using namespace std;

int main(){
	char grade;
	int i=1;
	int count[5] = {}; 
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" <<i<< "]: ";
		cin >> grade; 
		if(grade == 'A')
		{
			count[0]++;
			i++;
			continue;
		}
		else if(grade == 'B')
		{
			count[1]++;
			i++;
			continue;
		}
		else if(grade == 'C')
		{
			count[2]++;
			i++;
			continue;

		}else if(grade == 'D'){
			count[3]++;
			i++;
			continue;
		
		}
		else if(grade == 'F')
		{
			count[4]++;
			i++;
			continue; 

		}
		else if(grade == '0')
		{
	

		}
		else
		{ 
			cout << "Wrong input. Please input again.\n";
		} 
	}while(grade != '0');
	
	cout << "In total " <<i-1<< " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;	
		
	
	return 0;
}
