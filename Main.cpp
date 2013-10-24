#include <iostream>
#include <algorithm>	// std:min

using namespace std;

// step pace of everybody from slow to fast
int speed[8] = {1, 2, 5, 10, 15, 16, 30, 31};

void bridge_and_torch(){
	int n, time =0;
	for(n = 8 - 1; n >= 3; n-=2){
		int t1 = speed[0] + speed[1] * 1 + speed[n];
		int t2 = speed[0] * 1 + speed[n - 1] + speed[n];
		time += min(t1, t2);
	}

	if(n == 2){
		time += speed[0] + speed[1] + speed[2];
	} else if(n == 1){
		time += speed[1];
	} else {
		time += speed[0];
	}

	cout << "Total time for crossing the bridge = " << time << endl;

}

int main(int argc, char *argv){
	bridge_and_torch();
	return 0;
}
