#include <gtest/gtest.h>
import CoffeeBeans;

TEST(CoffeeBeans, set_grindShouldUpdateCoffeeBeanGrind) {
  auto roast = CoffeeRoast::light;
  auto grind = CoffeeGrind::medium_fine;
  CoffeeBeans cb{1.00, roast};

  cb.set_grind(grind);
  ASSERT_EQ(cb.grind(), grind);
}
