#include <cstdio>
#include <cstdlib>
#include <chrono>
#include <thread>
#include <iostream>
using namespace std;

int main(){
	int interval,time;
	cout << "interval[sec] : ";
	cin >> interval; 
	cout << "How long do you keep taking screenshots? [sec] : ";
	cin >> time;
	int count = time/interval;
	for(int i=1; i<=count; i++){
		this_thread::sleep_for(chrono::seconds(interval));
		char command[100] = "gnome-screenshot -w -f ./mypic/$(date \"+%Y%m%d-%H%M%S\").png";
		system(command);
		cout << "screenshot was taken " << i << "/" << count << endl;
	}
	return 0;
}
