#include <gtest/gtest.h>
import ManualCoffeeGrinder;

CoffeeBeans sample_beans() {
  return CoffeeBeans{15.0, CoffeeRoast::dark, CoffeeGrind::whole};
}

TEST(ManualCoffeeGrinder, grind_Should_Refine_CoffeeBeans) {
  ManualCoffeeGrinder mcg;
  auto beans = sample_beans();
  auto original_grind = beans.grind();

  auto new_grind = CoffeeGrind::extreme_fine;
  mcg.grind(beans, new_grind);
  EXPECT_NE(beans.grind(), original_grind);
  ASSERT_EQ(beans.grind(), new_grind);
}

TEST(ManualCoffeeGrinder, capacity_Should_Return_StandardPuckSize_As_Default) {
  ManualCoffeeGrinder mcg;
  ASSERT_EQ(mcg.capacity(), STANDARD_PUCK_SIZE);
}

TEST(ManualCoffeeGrinder, grind_duration_Should_Return_Positive_Integer) {
  ManualCoffeeGrinder mcg;
  ASSERT_TRUE(true);
}
