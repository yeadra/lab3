#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int numbers;
int weight;
int total=0;
int i;
vector<int> pig;
ifstream inFile("file.in",ios::in);
inFile>>numbers;
//cout<<numbers<<endl;
//cout<<pig.size()<<endl;
while(inFile >> weight){
//	cout<<weight<<endl;
	pig.push_back(weight);
}
sort(pig.begin(),pig.end());
//cout<<pig[numbers-1]<<endl;
for(i=0;i<5;i++){
 total = total + pig[numbers-1 -i];
}
cout << total;

return 0;

}
