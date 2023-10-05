#include <ncurses.h>
#include <unistd.h>

int main() {
    initscr(); // ncurses ইনিশিয়ালাইজ করুন
    curs_set(0); // কার্সর লুকান
    noecho(); // লিখা গুলি দেখানো না
    nodelay(stdscr, TRUE); // getch() কে ব্লক না করুন
    int max_x, max_y;
    getmaxyx(stdscr, max_y, max_x);

    char message[] = "Hello, World!";
    int message_length = sizeof(message) - 1; // নাল টার্মিনেটর বাদ দিন
    int x = 0;

    while (1) {
        clear(); // স্ক্রীন ক্লিয়ার করুন
        mvprintw(max_y / 2, x, message); // ম্যাসেজ প্রিন্ট করুন (max_y / 2, x)
        refresh(); // স্ক্রীন রিফ্রেশ করুন

        x++;
        if (x > max_x - message_length) {
            x = 0; // পোজিশন রিসেট করুন
        }

        usleep(100000); // 100 মিলিসেকেন্ডের জন্য স্লিপ করুন (আপনার পছন্দসই গতি সম্পর্কে সংশোধন করতে পারেন)
    }

    endwin(); // ncurses শেষ করুন
    return 0;
}
