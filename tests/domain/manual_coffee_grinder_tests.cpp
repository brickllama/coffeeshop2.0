#include <gtest/gtest.h>
import ManualCoffeeGrinder;

CoffeeBeans sample_beans() {
  return CoffeeBeans{15.0, CoffeeRoast::dark, CoffeeGrind::whole};
}

TEST(ManualCoffeeGrinder, grindShouldRefineCoffeeBeans) {
  ManualCoffeeGrinder mcg;
  auto beans = sample_beans();
  auto original_grind = beans.grind();

  auto new_grind = CoffeeGrind::extreme_fine;
  mcg.grind(beans, new_grind);
  EXPECT_NE(beans.grind(), original_grind);
  ASSERT_EQ(beans.grind(), new_grind);
}
