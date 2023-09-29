#include <iostream>
using namespace std;
int main(){
	char char_for_pattern;
	cout << "Please enter the character to print the pattern: ";
	cin >> char_for_pattern;
	int length;
	//this part checks to see if the letter is a capital letter. if the letter is not capital, the integer representation should be between 97 and 122.
	//if the letter is not capital, we subtract 32 from integer representation to make it a capital letter.
	//64 is subtracted from the number because the letters start from 64 Ascii code. 
	if(int(char_for_pattern)>=97 && int(char_for_pattern)<=122)
		length=int(char_for_pattern)-64-32;
	else
		length=int(char_for_pattern)-64;
	for(int i=0;i<length;i++){
		// this part prints the first line.
		if(i==0){
			for(int j=0;j<length;j++)
				cout<<char(j+65)<<" ";
			for(int j=length-2;j>=0;j--)
				cout<<char(j+65)<<" ";
			cout<<endl;
		}
		else{
			cout<<char(i+65)<<" ";
			for(int j=0;j<i-1;j++)
				cout<<"  ";
			cout<<char(i+65)<<" ";
			for(int j=0;j<(((length*2)-5)-2*(i-1));j++)
				cout<<"  ";
			// Z should be printed just once. so:
			if(i+65!=int(char_for_pattern) && i+97!=int(char_for_pattern))
				cout<<char(i+65)<<" ";
			for(int j=0;j<i-1;j++)
				cout<<"  ";
			cout<<char(i+65)<<" "<<endl;
		}
	}
	for(int i=length-2;i>=0;i--){
		if(i==0){
			for(int j=0;j<length;j++)
				cout<<char(j+65)<<" ";
			for(int j=length-2;j>=0;j--)
				cout<<char(j+65)<<" ";
			cout<<endl;
		}
		else{
			cout<<char(i+65)<<" ";
			for(int j=0;j<i-1;j++)
				cout<<"  ";
			cout<<char(i+65)<<" ";
			for(int j=0;j<(((length*2)-5)-2*(i-1));j++)
				cout<<"  ";
			if(i+65!=int(char_for_pattern))
				cout<<char(i+65)<<" ";
			for(int j=0;j<i-1;j++)
				cout<<"  ";
			cout<<char(i+65)<<" "<<endl;
		}
	}
	return 0;
}