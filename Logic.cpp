/*                      /** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **\
                                                Realization Main Logic 
                                                        
                                        At this place when we can get final result
*/

#include "MyForm.h"
#include "Logic.h"
#include <msclr/marshal_cppstd.h> // Include this header for string conversions

using namespace std;
using namespace System;

#define BUF_SIZE 1024

class ExpressionEvaluator {
public:
    double evaluate(const std::string& expression) {
        std::string modifiedExpression = addClosingBracket(expression);
        unsigned i = 0;
        return evaluateExpression(modifiedExpression, i);
    }

private:
    std::string addClosingBracket(const std::string& expression) {
        std::string modifiedExpression = expression;
        int openBrackets = 0;
        for (char c : expression) {
            if (c == '(') {
                openBrackets++;
            }
            else if (c == ')') {
                openBrackets--;
            }
        }
        while (openBrackets > 0) {
            modifiedExpression += ')';
            openBrackets--;
        }
        return modifiedExpression;
    }

    double number(const std::string& str, unsigned& idx) {
        double result = 0.0;
        double div = 10.0;
        int sign = 1;

        if (str[idx] == '-') {
            sign = -1;
            ++idx;
        }

        while (std::isdigit(str[idx])) {
            result = result * 10.0 + (str[idx] - '0');
            ++idx;
        }

        if (str[idx] == '.') {
            ++idx;

            while (std::isdigit(str[idx])) {
                result = result + (str[idx] - '0') / div;
                div *= 10.0;
                ++idx;
            }
        }

        return sign * result;
    }

    double evaluateExpression(const std::string& str, unsigned& idx) {
        double result = evaluateTerm(str, idx);

        while (str[idx] == '+' || str[idx] == '-') {
            switch (str[idx]) {
            case '+':
                ++idx;
                result += evaluateTerm(str, idx);
                break;
            case '-':
                ++idx;
                result -= evaluateTerm(str, idx);
                break;
            }
        }

        return result;
    }

    double evaluateTerm(const std::string& str, unsigned& idx) {
        double result = evaluateFactor(str, idx);
        double div;

        while (str[idx] == '*' || str[idx] == '/' || str[idx] == '%') {
            switch (str[idx]) {
            case '*':
                ++idx;
                result *= evaluateFactor(str, idx);
                break;
            case '/':
                ++idx;
                div = evaluateFactor(str, idx);

                if (div != 0.0) {
                    result /= div;
                }
                else {
                    std::cerr << "Division by zero!" << std::endl;
                    std::exit(-1);
                }
                break;
            case '%':
                if (str.substr(idx, 2) == "%+") {
                    idx += 2;
                    result += (result * evaluateFactor(str, idx)) / 100.0;
                    break;
                }
                else if (str.substr(idx, 2) == "%-") {
                    idx += 2;
                    result -= (result * evaluateFactor(str, idx)) / 100.0;
                    break;
                }
                else if (str[idx] == '%') {
                    ++idx;
                    result = (result * evaluateFactor(str, idx)) / 100.0;
                    break;
                }
            }

        }

        return result;
    }

    double evaluateFactor(const std::string& str, unsigned& idx) {
        double result;
        int sign = 1;

        if (str[idx] == '-') {
            sign = -1;
            ++idx;
        }

        if (str[idx] == '(') {
            ++idx;
            result = evaluateExpression(str, idx);

            if (str[idx] != ')') {
                std::cerr << "Brackets unbalanced!" << std::endl;
                std::exit(-2);
            }

            ++idx;
        }
        else if (str[idx] == '√') {
            ++idx;
            result = sqrt(evaluateFactor(str, idx));
        }
        else if (str[idx] == 's') {
            if (str.substr(idx, 3) == "sin") {
                idx += 3;
                result = sin(evaluateFactor(str, idx));
            }
        }
        else if (str[idx] == 'c') {
            if (str.substr(idx, 3) == "cos") {
                idx += 3;
                result = cos(evaluateFactor(str, idx));
            }
        }
        else if (str[idx] == 't') {
            if (str.substr(idx, 3) == "tan") {
                idx += 3;
                result = tan(evaluateFactor(str, idx));
            }
        }
        else {
            result = number(str, idx);
        }

        if (str[idx] == '^') {
            ++idx;
            result = std::pow(result, evaluateFactor(str, idx));
        }

        return sign * result;
    }
};
double Logic(System::String^ currentText, System::Windows::Forms::Label^ label1) {

    std::string inputExpression = msclr::interop::marshal_as<std::string>(currentText);


    ExpressionEvaluator evaluator;
    double result = evaluator.evaluate(inputExpression);

 //   cout << "Logic :" << result << endl;
    return result;

}



