#include<iostream>
#include <cstdio>
using namespace std;



int main() {
	int s, b;
  int left[100005], right[100005];
	while (scanf("%d %d", &s, &b), s || b) {
		for (int i = 1; i <= s; i++) {
			left[i] = i - 1;
			right[i] = i + 1;
		}
		right[s] = -1;
		left[1] = -1;
          for(int i=1;i<=s;i++){
            cout<<left[i]<<" ";

          }
          cout<<endl;
           for(int i=1;i<=s;i++){
            cout<<right[i]<<" ";

          }
          cout<<endl;
		int l, r;
		for (int i = 0; i < b; i++) {
			scanf("%d %d", &l, &r);

			left[right[r]] = left[l];
			cout<<left[right[r]]<<endl;
			if (left[l] != -1)
				printf("%d", left[l]);
			else
				printf("*");
               cout<<endl;
			right[left[l]] = right[r];
			cout<<right[left[l]]<<endl;
			if (right[r] != -1)
				printf(" %d\n", right[r]);
			else
				printf(" *\n");
		}
		printf("-\n");
	}

	return 0;
}
