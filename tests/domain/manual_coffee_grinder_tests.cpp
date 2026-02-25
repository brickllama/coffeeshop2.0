#include <gtest/gtest.h>
import ManualCoffeeGrinder;

CoffeeBeans sample_beans() {
  return CoffeeBeans{15.0, CoffeeRoast::dark, CoffeeGrind::whole};
}

TEST(ManualCoffeeGrinder, grind_Should_Refine_CoffeeBeans) {
  ManualCoffeeGrinder mcg;
  auto beans = sample_beans();
  auto original_grind = beans.grind();

  auto target_grind = CoffeeGrind::extreme_fine;
  mcg.grind(beans, target_grind);
  EXPECT_NE(beans.grind(), original_grind);
  ASSERT_EQ(beans.grind(), target_grind);
}

TEST(ManualCoffeeGrinder, capacity_Should_Return_StandardPuckSize_As_Default) {
  ManualCoffeeGrinder mcg;
  ASSERT_EQ(mcg.capacity(), STANDARD_PUCK_SIZE);
}

TEST(ManualCoffeeGrinder, grind_duration_Should_Return_Positive_Integer) {
  ManualCoffeeGrinder mcg;
  auto beans = sample_beans();

  auto target_grind = CoffeeGrind::coarse;
  ASSERT_GE(mcg.grind_duration(beans, target_grind), 0);
}
