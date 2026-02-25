#include <gtest/gtest.h>
import Frother;

TEST(Frother, ShouldReturnState) {
  Frother fr;
  ASSERT_EQ(fr.state(), FrotherState::idle);
}
