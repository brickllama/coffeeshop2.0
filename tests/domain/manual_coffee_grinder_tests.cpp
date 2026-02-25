#include <gtest/gtest.h>
import ManualCoffeeGrinder;

CoffeeBeans sample_beans() {
  return CoffeeBeans{15.0, CoffeeRoast::dark, CoffeeGrind::whole};
}

TEST(ManualCoffeeGrinder, grindShouldRefineCoffeeBeans) {
  ManualCoffeeGrinder mcg;
  auto beans = sample_beans();
  auto original_grind = beans.grind();

  mcg.grind(beans, CoffeeGrind::extreme_fine);
  ASSERT_NE(beans.grind(), original_grind);
}
