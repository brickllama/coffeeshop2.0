module;

export module ManualCoffeeGrinder; /* Interface Unit. */
export import CoffeeGrinder;

export constexpr double STANDARD_PUCK_SIZE =
    20.0; /* An average espresso puck is 20 grams. */

export class ManualCoffeeGrinder : public CoffeeGrinder {
public:
  explicit ManualCoffeeGrinder(double capacity = STANDARD_PUCK_SIZE)
      : CoffeeGrinder(capacity) {}

  void grind(CoffeeBeans &beans, CoffeeGrind grind) override;
  double capacity() const override;

private:
  bool requires_manual_effort() const override;
};

module :private; /* Implementation Unit. */

void ManualCoffeeGrinder::grind(CoffeeBeans &beans, CoffeeGrind grind) {
  beans.set_grind(grind);
}

double ManualCoffeeGrinder::capacity() const {
  ///
  return 0.0;
}

bool ManualCoffeeGrinder::requires_manual_effort() const { return true; }
