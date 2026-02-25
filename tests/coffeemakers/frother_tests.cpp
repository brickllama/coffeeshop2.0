#include <gtest/gtest.h>
import Frother;

TEST(Frother, ShouldReturnState) {
  Frother fr;
  ASSERT_EQ(fr.state(), FrotherState::idle);
}

TEST(Frother, ShouldReturnRodTemperature) {
  Frother fr;
  ASSERT_EQ(fr.rod_temperature(), 20.0);
}
