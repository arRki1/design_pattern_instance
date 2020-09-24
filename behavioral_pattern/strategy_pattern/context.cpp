#include "context.h"
#include "strategy.h"

Context::Context()
{

}

Context::~Context()
{

}

void Context::set_strategy(Strategy *strategy)
{
    m_strategy = strategy;
}

void Context::algorithm()
{
    m_strategy->algorithm();
}