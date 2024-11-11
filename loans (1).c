#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue;
    float fineAmount;
    float fineRate;

    
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date (in days): ");
    scanf("%d", &dueDate);
    printf("Enter Return Date (in days): ");
    scanf("%d", &returnDate);

    
    daysOverdue = returnDate - dueDate;

    
    if (daysOverdue <= 0) {
        fineRate = 0;
        fineAmount = 0;
    } else if (daysOverdue <= 7) {
        fineRate = 20;
        fineAmount = daysOverdue * fineRate;
    } else if (daysOverdue <= 14) {
        fineRate = 50;
        fineAmount = daysOverdue * fineRate;
    } else {
        fineRate = 100;
        fineAmount = daysOverdue * fineRate;
    }

    
    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh. %.2f per day\n", fineRate);
    printf("Total Fine Amount: Ksh. %.2f\n", fineAmount);

    return 0;
}
