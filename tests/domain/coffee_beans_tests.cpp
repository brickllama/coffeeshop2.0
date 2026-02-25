#include <gtest/gtest.h>
import CoffeeBeans;

TEST(CoffeeBeans, set_grind_Should_Allow_Finer_Grind) {
  auto roast = CoffeeRoast::light;
  auto grind = CoffeeGrind::coarse;
  CoffeeBeans cb{1.00, roast, grind};

  auto new_grind = CoffeeGrind::medium_fine;
  cb.set_grind(new_grind);
  ASSERT_EQ(cb.grind(), new_grind);
}

TEST(CoffeeBeans, set_grind_Should_Throw_If_Grind_Is_Coarser) {
  auto roast = CoffeeRoast::light;
  auto grind = CoffeeGrind::fine;
  CoffeeBeans cb{5.12, roast, grind};

  auto new_grind = CoffeeGrind::coarse;
  ASSERT_THROW(cb.set_grind(new_grind), std::runtime_error);
}
