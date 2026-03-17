#ifndef CONSOLEVIEW_H
#define CONSOLEVIEW_H

#include <iostream>
#include <string>
#include <vector>
#include "../Models/Fish.h"
#include "../Models/Character.h"

class ConsoleView {
public:
    // Các hàm này chỉ in ra màn hình nên ta dùng 'const' ở cuối
    void ShowWelcome() const;
    void ShowMenu() const;
    
    // Truyền tham chiếu hằng số (const type&) để tối ưu bộ nhớ, không copy dữ liệu
    void ShowMessage(const std::string& message) const;
    void ShowInventory(const Character& player) const;
};

#endif