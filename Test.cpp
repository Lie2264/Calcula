//1 создаем файл закидываем туда примеры, начало простые потом сложней и еще сложней 
//2 Считываем файл по одной строке присваем в какую-то перменую.
//3 делаем какой-то боол переменую если тру запускаем если фалс не запускаем, задержка для загрузки приложение.
//4 проверять результат если результат сходится с результатом в файле,тогда берем следуйщий пример или же останавливаем там где результат не сходится и выдаем какую-то информацию

#include "Test.h"


void Compare(double result);

bool final_result;
int count_Test = 0;
bool StopProccesing = false;


// Функция для удаления первой строки из файла
void RemoveFirstLine(const string& filePath) {
    ifstream inFile(filePath);
    if (!inFile.is_open()) {
        cout << "Error opening file for removing first line: " << filePath << endl;
        return;
    }

    // Читаем все строки в вектор, исключая первую
    vector<string> lines;
    string line;
    while (getline(inFile, line)) {
        if (!line.empty()) {
            lines.push_back(line);
        }
    }

    inFile.close();

    // Перезаписываем файл без первой строки
    ofstream outFile(filePath);
    if (!outFile.is_open()) {
        cout << "Error opening file for writing: " << filePath << endl;
        return;
    }

    for (size_t i = 1; i < lines.size(); ++i) {
        outFile << lines[i] << endl;
    }

    outFile.close();
}
///////////

string GetDigitsAfterDecimal(double value, int numDigits) {
    string stringValue = to_string(value);
    size_t decimalPos = stringValue.find('.');
    if (decimalPos != string::npos) {
        return stringValue.substr(decimalPos + 1, numDigits);
    }
    return "";
}

void Compare(double result) {
    SetConsoleOutputCP(CP_UTF8);

    string path = "Test_Result.txt";
    ifstream file(path);

    if (!file.is_open()) {
        cout << "Error opening file Compare" << endl;
        return;
    }
    cout << "File opened Compare" << endl;

    string str = "";

    while (getline(file, str)) {
        if (StopProccesing) {
            break;
        }
        size_t pos = 0;
        while ((pos = str.find("sqrt", pos)) != std::string::npos) {
            str.replace(pos, 4, "√");  // Replace 4 characters (length of "sqrt") with a question mark
            pos += 1;  // Move to the next character after the found occurrence
        }
        double fileValue = stod(str);

        // Extract the first 4 digits after the decimal point
        string resultDigits = GetDigitsAfterDecimal(result, 3);
        string fileValueDigits = GetDigitsAfterDecimal(fileValue, 3);

        // Check if the first 4 digits match
        if (resultDigits == fileValueDigits || result == fileValue) {
            ++count_Test;
            final_result = true;
            cout << count_Test << ". True" << endl << endl;

            RemoveFirstLine("Test.txt");
            RemoveFirstLine("Test_Result.txt");

            final_result = false;
            return;
        }
        else {
            ++count_Test;
            cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl
                << "Number Equation that did not work: " << count_Test << endl
                << "Input: " << str << "\t\t File: Test_Result" << endl
                << "Output: " << result << "\t\t File: Test" << endl
                << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
            StopProccesing = true;
            break;
        }
    }

    file.close();
}


void Solve(const string& str) {
    SetConsoleOutputCP(CP_UTF8);            // Git Hub

    System::String^ currentText = msclr::interop::marshal_as<System::String^>(str);
    double result = Logic(currentText, nullptr);

    Compare(result);
    
}

void OpenTest_txt() {
    SetConsoleOutputCP(CP_UTF8);            // Git Hub

    string path = "Test.txt";
    ifstream file(path);

    if (!file.is_open()) {
        cout << "Error opening file OpenTest.txt" << endl;
        return;
    }

    cout << "File opened OpenTest" << endl;
    string str = "";
    int line_number = 0;

    while (getline(file, str)) {
        if (StopProccesing == true) {
            break;
        }
        size_t pos = 0;
        while ((pos = str.find("sqrt", pos)) != std::string::npos) {
            str.replace(pos, 4, "√");  // Заменяем 4 символа (длина "sqrt") на знак вопроса
            pos += 1;  // Переходим к следующему символу после найденного вхождения
        }
        
        ++line_number;
        Solve(str);
    }

    file.close();
}

void StartTest(System::String^ currentText) {
    bool Start = false;
    if (Start == true) {
        OpenTest_txt();
    }
    return;
}
