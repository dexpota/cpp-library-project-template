#include <glog/logging.h>
#include <gmock/gmock.h>
#include <gtest/gtest.h>

TEST(SanityCheckTest, UnitTestingFrameworkWorks)
{
    LOG(INFO) << "Starting sanity check test.";
    EXPECT_TRUE(true) << "True has somehow become false.";
    EXPECT_FALSE(false) << "False has somehow become true.";
    LOG(INFO) << "Finishing sanity check test.";
}
