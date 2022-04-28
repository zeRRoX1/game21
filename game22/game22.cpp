
#include <iostream>
#include <Windows.h>
    using namespace std;
//game 21

//интерфейс игры начало
void main_menu() {
    cout << "Добро пожаловать в игру 21!\n";
    cout << "Хотите начать? (y/n)\n";
    string flag;
    cin >> flag;
}

void step_game(int cards_first, int cards_next) {
    cout << "Ваши карты: " << cards_first << ", " << cards_next << endl;
    cout << "Итоговая карта: " << cards_first + cards_next << endl;
    cout << "Хотите взять еще одну карту?(y/n)\n";
    string flag;
    cin >> flag;
    if (flag == "y") {
        // ф-я выдачи карты
    }
    else if (flag == "n") {
        // ф-я завершения игры
    }
    else {
        cout << "Неверный ввод, повторите!";
    }
    }
//интерфейс игры конец

//рандомная выдача карт начало
int random_inssuance_of_cards() {
    srand(time(NULL));
    int random_card = rand()%10 + 2;
    while (random_card == 5) random_card = rand() % 10 + 2;
    return random_card;
}

void check_cards() {
    int arrayCards[9] = {2,3,4,6,7,8,9,10,11};//номинал карт
    arrayCards[0] = random_inssuance_of_cards();
}

int main()
{
  
}

