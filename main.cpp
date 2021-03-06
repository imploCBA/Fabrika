#include <QCoreApplication>
#include "pizza.h"
#include "simplepizzafactory.h"
#include "pizzastore.h"
#include "cheesepizza.h"
#include "cheeseburger.h"
#include "carbonara.h"
#include "pineapplePizza.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

     PizzaStore *pStore = new SimplePizzaFactory();

    Pizza *pizza1 = pStore->orderPizza("CheesePizza");
    Pizza *pizza2 = pStore->orderPizza("Cheeseburger");
    Pizza *pizza3 = pStore->orderPizza("Carbonara");
    Pizza *pizza4 = pStore->orderPizza("PineapplePizza");

    return a.exec();
}
