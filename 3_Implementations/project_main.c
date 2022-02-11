#include <stdbool.h>
int main() {
    //Local Declarations
    int option;
    float balance = 15000.00;
    int choose;

    bool again = true;

    // insert code here...

    while (again) {
    mainMenu();

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Your Selection:\t");
    scanf("%d", &option);


        switch (option) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance = moneyDeposit(balance);
                break;
            case 3:
                balance = moneyWithdraw(balance);
                break;

            case 4:
                menuExit();
                return 0;

            default:
                errorMessage();
                break;
        }

        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Would you like to do another transaction:\n");
        printf("&lt; 1 &gt; Yes\n");
        printf("&lt; 2 &gt; No\n");
        scanf("%d", &choose);



        if (choose == 2) {
            again = false;
            menuExit();

        }

}


    return 0;
}