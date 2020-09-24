#include "context.h"
#include "concrete_strategyA.h"
#include "concrete_strategyB.h"

int main()
{
    Context *context = new Context();
    Strategy *sgA = new ConcreteStrategyA();
    Strategy *sgB = new ConcreteStrategyB();

    context->set_strategy(sgA);
    context->algorithm();

    context->set_strategy(sgB);
    context->algorithm();

    return 0;
}