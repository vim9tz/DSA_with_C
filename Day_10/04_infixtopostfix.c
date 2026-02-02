#include <stdio.h>
#include <ctype.h>

int main() {
    char infix[] = "(A+B)*(C-D/E)^F";
    char postfix[100];
    char stack[100];

    int i = 0, k = 0, top = -1;

    printf("Infix   : %s\n", infix);

    while (infix[i] != '\0') {
        char ch = infix[i];

        // Operand → output
        if (isalnum(ch)) {
            postfix[k++] = ch;
        }
        // Opening bracket
        else if (ch == '(') {
            stack[++top] = ch;
        }
        // Closing bracket
        else if (ch == ')') {
            while (top != -1 && stack[top] != '(') {
                postfix[k++] = stack[top--];
            }
            top--; // remove '('
        }
        // Operator
        else {
            // Check lower or equal POP
            while (top != -1 &&
                   ((ch == '+' || ch == '-') &&
                    (stack[top] == '+' || stack[top] == '-' ||
                     stack[top] == '*' || stack[top] == '/' || stack[top] == '^')) ||
                   ((ch == '*' || ch == '/') &&
                    (stack[top] == '*' || stack[top] == '/' || stack[top] == '^')) ||
                   (ch == '^' && stack[top] == '^')) {
                postfix[k++] = stack[top--];
            }
            // Push new operator to stack
            stack[++top] = ch;
        }
        i++;
    }

    // Pop remaining operators
    while (top != -1) {
        postfix[k++] = stack[top--];
    }

    postfix[k] = '\0';

    printf("Postfix : %s\n", postfix);
    return 0;
}


