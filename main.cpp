#include "Controllers/GameManager.h"

int main() {
    // Khởi tạo hệ thống game và đặt tên cho nhân vật của bạn
    GameManager game("TinTin");

    // Kích hoạt vòng lặp chính của trò chơi
    game.Run();

    // Kết thúc chương trình một cách an toàn
    return 0;
}