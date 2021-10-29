#include "SlotMachine.h"

void logic() {
	int balance = BALANCE, bid = 0;
	bool flag = true;
	char nums[3];

	while (flag) {
		printf("Your balance %d\nEnter bid ", balance);
		scanf("\t%d", &bid);
		if (bid == 0 || balance == 0) {
			flag = false;
			break;
		}else if (bid > balance) {
			printf("Bid > balance\n");
			break;
		}
			nums[0] = rand() % 10;
			printf(":%d ", nums[0]);
			nums[1] = rand() % 10;
			printf("%d ", nums[1]);
			nums[2] = rand() % 10;
			printf("%d:\n", nums[2]);
				if (nums[0] == 7 && nums[1] == 7 && nums[2] == 7) {
					balance += bid * 3;
					printf("jackpot bidx3 \n");
				}
				else if (nums[0] == nums[1] && nums[1] == nums[2]) {
					balance += bid * 2;
					printf("jackpot bidx2 \n");
				}else if (nums[0] == 7 || nums[1] == 7 || nums[2] == 7) {
					printf("bid return\n");
				}else{
				printf("Better luck next time\n");
				balance -= bid;
			}
	}
}
