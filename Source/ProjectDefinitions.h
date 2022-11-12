#pragma once
#ifndef UNIT_TEST
	#define UNIT_TEST 0
#endif

#if UNIT_TEST
	#define EXPAND(x) x
	#define TEST_LOG(...) EXPAND(UE_INTERNAL_LOG_IMPL(__VA_ARGS__))
    #undef UE_LOG
	#define UE_LOG(...)
#endif

namespace FRAMEWORK {}
using namespace FRAMEWORK;