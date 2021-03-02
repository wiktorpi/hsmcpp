#ifndef __HSMCPP_TESTS_HSM_ABCHSM_HPP__
#define __HSMCPP_TESTS_HSM_ABCHSM_HPP__

#include "TestsCommon.hpp"
#include "hsm.hpp"

enum class AbcState
{
    A, B, C, D, E,
    P1, P2, P3, P4
};

enum class AbcEvent
{
    E1, E2, E3
};

class ABCHsm: public testing::Test
            , public HierarchicalStateMachine<AbcState, AbcEvent, ABCHsm>
{
public:
    ABCHsm();
    virtual ~ABCHsm();

    DEF_STATE_ACTION_IMPL(A)
    DEF_STATE_ACTION_IMPL(B)
    DEF_STATE_ACTION_IMPL(C)
    DEF_STATE_ACTION_IMPL(D)
    DEF_STATE_ACTION_IMPL(E)

protected:
    void SetUp() override;
    void TearDown() override;
};

#endif // __HSMCPP_TESTS_HSM_ABCHSM_HPP__