module;

#include <stdexcept>

export module ManualCoffeeGrinder; /* Interface Unit. */
export import CoffeeGrinder;

export constexpr double STANDARD_PUCK_SIZE =
    20.0; /* An average espresso puck is 20 grams. */
export constexpr double STANDARD_GRIND_RATE = 1.3;

export class ManualCoffeeGrinder : public CoffeeGrinder {
public:
  explicit ManualCoffeeGrinder(double capacity = STANDARD_PUCK_SIZE)
      : CoffeeGrinder(capacity) {}

  void grind(CoffeeBeans &beans, CoffeeGrind target_grind) override;
  double grind_duration(CoffeeBeans &beans,
                        CoffeeGrind target_grind) const override;
};

module :private; /* Implementation Unit. */

void ManualCoffeeGrinder::grind(CoffeeBeans &beans, CoffeeGrind target_grind) {
  beans.set_grind(target_grind);
}

double ManualCoffeeGrinder::grind_duration(CoffeeBeans &beans,
                                           CoffeeGrind target_grind) const {
  int grind_difference = CoffeeGrind_difference(beans.grind(), target_grind);

  return grind_difference * STANDARD_GRIND_RATE *
         this->CoffeeGrinder::capacity();
}
