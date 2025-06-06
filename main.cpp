#include <stdio.h>
#include <list>
#include <cstring>  // strcmp

using namespace std;

// 駅リストをprintfで表示する関数
void print_eki_list(const list<const char*>& lst, const char* year) {
    printf("%s年\n", year);
    for (auto station : lst) {
        printf("%s\n", station);
    }
    printf("\n");
}

int main() {
    // 1970年の駅リスト
    list<const char*> eki_1970{
        "Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani", "Nippori",
        "Tabata", "Komagome", "Sugamo", "Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba",
        "Sin-Okubo", "Shinjuku", "Yoyogi", "Harajuku", "Shibuya", "Ebisu", "Meguro",
        "Gotanda", "Osaki", "Sinagawa", "Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"
    };

    // 1970年表示
    print_eki_list(eki_1970, "1970");

    // 2019年の駅リストを作成（Nipporiの前にNishi-Nipporiを追加）
    list<const char*> eki_2019 = eki_1970;
    for (auto it = eki_2019.begin(); it != eki_2019.end(); ++it) {
        if (strcmp(*it, "Nippori") == 0) {
            eki_2019.insert(it, "Nishi-Nippori");
            break;
        }
    }
    print_eki_list(eki_2019, "2019");

    // 2022年の駅リストを作成（Sinagawaの前にTakanawa Gatewayを追加）
    list<const char*> eki_2022 = eki_2019;
    for (auto it = eki_2022.begin(); it != eki_2022.end(); ++it) {
        if (strcmp(*it, "Sinagawa") == 0) {
            eki_2022.insert(it, "Takanawa Gateway");
            break;
        }
    }
    print_eki_list(eki_2022, "2022");

    return 0;
}
