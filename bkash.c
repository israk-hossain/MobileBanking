#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;

    while (1) {
        printf("\n Mobile Banking App Menu:\n");
        printf("1. Send Money\n");
        printf("2. Send Money to Non-Account Holder\n");
        printf("3. Mobile Recharge\n");
        printf("4. Payment\n");
        printf("5. Cash Out\n");
        printf("6. Microfinance\n");
        printf("7. Download Our App\n");
        printf("8. My Account\n");
        printf("9. Reset PIN\n");
        printf("10. Help\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter receiver's account number: ");
            int receiverAccountNumber;
            scanf("%d", &receiverAccountNumber);

            printf("Enter the amount to send: ");
            double amount;
            scanf("%lf", &amount);

            printf("Enter reference: ");
            char reference[100];
            scanf("%s", reference);

            printf("Enter PIN: ");
            int pin;
            scanf("%d", &pin);

            printf("Sent %.2lf BDT to account %d\n", amount);
            printf("Congratulations Sent\n");
        } else if (choice == 2) {
            printf("Sending money to a non-account holder...\n");
            printf("Enter receiver's account number: ");
            int receiverAccountNumber;
            scanf("%d", &receiverAccountNumber);

            printf("Enter the amount to send: ");
            double amount;
            scanf("%lf", &amount);

            printf("Enter reference: ");
            char reference[100];
            scanf("%s", reference);

            printf("Enter PIN: ");
            int pin;
            scanf("%d", &pin);

            printf("Congratulations! %.2lf BDT Money sent to a non-account holder\n",amount);
        } else if (choice == 3) {
            printf("Performing mobile recharge...\n");
            printf("Your operator: \n");
            printf("1. Robi\n");
            printf("2. Airtel\n");
            printf("3. Grameenphone\n");
            printf("4. Banglalink\n");
            printf("5. Teletalk\n");
            int operatorChoice;
            printf("Choose your operator (1-5): ");
            scanf("%d", &operatorChoice);
            printf("Enter receiver's account number: ");
            int receiverAccountNumber;
            scanf("%d", &receiverAccountNumber);

            // Prompt for amount and PIN
            printf("Enter the amount: ");
            double amount;
            scanf("%lf", &amount);

            printf("Enter PIN: ");
            int pin;
            scanf("%d", &pin);

            printf("Congratulations! Recharged with %.2lf BDT successful\n",amount);
        } else if (choice == 4) {
            printf("Paying bill\n");
            printf("Enter bill reciver number: ");
            int billNumber;
            scanf("%d", &billNumber);

            printf("Enter the amount to pay: ");
            double amount;
            scanf("%lf", &amount);

            printf("Enter reference: ");
            char reference[100];
            scanf("%s", reference);
            printf("Enter 5 digit otp : ");
            int receiveotp;
            scanf("%d", &receiveotp);

            printf("Enter PIN: ");
            int pin;
            scanf("%d", &pin);

            printf("Congratulations! Paid %.2lf BDT for bill number %d with reference %s.\n", amount, billNumber, reference);
        } else if (choice == 5) {
            printf("Cashing out...\n");
            printf("Select cash-out method:\n");
            printf("1. From Agent\n");
            printf("2. From ATM\n");
            printf("3. From Priyo Agent\n");
            int cashOutMethod;
            printf("Choose cash-out method (1-3): ");
            scanf("%d", &cashOutMethod);
            printf("Enter Agent account number: ");
            int receiverAccountNumber;
            scanf("%d", &receiverAccountNumber);

            printf("Enter the amount to cash out: ");
            double amount;
            scanf("%lf", &amount);

            printf("Enter your PIN: ");
            int pin;
            scanf("%d", &pin);

            printf("Congratulations! Cashed out %.2lf BDT using method %d.\n", amount, cashOutMethod);
        } else if (choice == 6) {
            printf("Accessing microfinance services...\n");
            printf("Enter receiver's account no: ");
            char receiverAccountName[100];
            scanf("%s", receiverAccountName);

            printf("Enter the amount to send:\n ");
            double amount;
            scanf("%lf", &amount);

            printf("Enter reference:\n ");
            char reference[100];
            scanf("%s", reference);

            printf("Enter PIN: ");
            int pin;
            scanf("%d", &pin);

            printf("Congratulations! Sent %.2lf BDT to account name %s with reference %s.\n", amount, receiverAccountName, reference);
        } else if (choice == 7) {
            printf("Downloading our app...\n");
            printf("Visit https://amaderbank.com/download to download our app.\n");
        } else if (choice == 8) {
            printf("Viewing account details...\n");
            printf("1. Check Balance\n");
            printf("2. Request Statement\n");
            printf("3. Priyo Numbers\n");
            printf("4. Save Bill\n");
            printf("5. Update MNP\n");
            printf("6. Confirm iPhone Login\n");
            printf("7. iPhone PIN Reset\n");

            int accountOption;
            printf("Choose an option (1-7): ");
            scanf("%d", &accountOption);


            }
         else if (choice == 9) {
            printf("Enter Your birth year :\n");
             char DOB[100];
            scanf("%s",DOB);
             printf("Enter Your last amount : ");
              char lamount[100];
            scanf("%s",lamount);
              printf("Enter OTP : ");
               char otp[100];
            scanf("%s", otp);
               printf("Enter new pin : ");
                char npin[100];
            scanf("%s", npin);
              printf("Congratulations pin reset successflly!");


        } else if (choice == 10) {
            printf("Getting help...\n");
            printf("1. From Agent\n");
            printf("0. From Customer Care\n");
            int helpOption;
            printf("Choose an option (1 or 0): ");
            scanf("%d", &helpOption);

            if (helpOption == 1) {
                printf("Connecting to an agent")
;            } else if (helpOption == 0) {
                printf("please visit www.amaderbank.com/help/agent/");
            } else {
                printf("Invalid help option. Please try again.\n");
            }
        } else if (choice == 0) {
            printf("Exiting the app...\n");
            exit(0);
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
