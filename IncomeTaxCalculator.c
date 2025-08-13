/*Calculate income tax paid by an employee to the government as per the slabs mentioned below:

Income Slab             Tax
2.5-5.0L                5%
5.0L-10.0L              20%
Above 10.0L             30%

Note that there is no tax below 2.5L. Take income amount as an input from the user.*/

#include<stdio.h>

int main() {
    int income;  // Variable to store the income input
    float tax = 0.0;  // Variable to store the calculated tax

    // Prompt the user to enter their income
    printf("Enter income : \n");
    scanf("%d", &income);  // Take income as input from the user

    // Example 1: Income <= ₹2.5L
    // For this case, there is no tax applied if the income is less than or equal to ₹2.5L
    // Let's assume the input is ₹2,00,000
    if (income <= 250000) {
        tax = 0.0;  // No tax is applied
        // Answer for this case: 
        // Income: ₹2,00,000, Tax: ₹0 (no tax for income below ₹2.5L)
    }
    // Example 2: Income between ₹2.5L and ₹5.0L (5% tax on income above ₹2.5L)
    // For example, if the input is ₹3,00,000
    else if (income > 250000 && income <= 500000) {
        tax = 0.05 * (income - 250000);  // 5% on the income above ₹2.5L
        // Answer for this case:
        // Income: ₹3,00,000
        // Amount above ₹2.5L: ₹3,00,000 - ₹2,50,000 = ₹50,000
        // Tax on ₹50,000: 5% of ₹50,000 = ₹2,500
        // Total Tax: ₹2,500
    }
    // Example 3: Income between ₹5.0L and ₹10.0L (5% for first ₹2.5L, 20% for income above ₹5.0L)
    // For example, if the input is ₹6,00,000
    else if (income > 500000 && income <= 1000000) {
        tax = 0.05 * 250000 + 0.20 * (income - 500000);  // First 2.5L taxed at 5%, next part at 20%
        // Answer for this case:
        // Income: ₹6,00,000
        // First ₹2.5L taxed at 5%: 5% of ₹2,50,000 = ₹12,500
        // Remaining ₹1.0L (₹6,00,000 - ₹5,00,000) taxed at 20%: 20% of ₹1,00,000 = ₹20,000
        // Total Tax: ₹12,500 + ₹20,000 = ₹32,500
    }
    // Example 4: Income above ₹10.0L (5% for first ₹2.5L, 20% for next ₹5.0L, 30% for income above ₹10L)
    // For example, if the input is ₹12,50,000
    else {
        tax = 0.05 * 250000 + 0.20 * 500000 + 0.30 * (income - 1000000);  // First 2.5L at 5%, next 5.0L at 20%, remaining at 30%
        // Answer for this case:
        // Income: ₹12,50,000
        // First ₹2.5L taxed at 5%: 5% of ₹2,50,000 = ₹12,500
        // Next ₹5.0L taxed at 20%: 20% of ₹5,00,000 = ₹1,00,000
        // Remaining ₹2.5L (₹12,50,000 - ₹10,00,000) taxed at 30%: 30% of ₹2,50,000 = ₹75,000
        // Total Tax: ₹12,500 + ₹1,00,000 + ₹75,000 = ₹1,87,500
    }

    // Output the calculated tax
    printf("Your tax is : %.2f\n", tax);  // Print the tax value formatted to 2 decimal places

    return 0;  // End of the program
}
