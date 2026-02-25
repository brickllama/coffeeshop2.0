module;

#include <cstdint>

export module CoffeeBeans;

export enum class CoffeeRoast : std::uint8_t { light, medium, dark };

export enum class CoffeeGrind : std::uint8_t {
  whole,
  extreme_coarse,
  coarse,
  medium_coarse,
  medium,
  medium_fine,
  fine,
  extreme_fine
};

export class CoffeeBeans {
public:
  explicit CoffeeBeans(double grams, CoffeeRoast roast,
                       CoffeeGrind grind = CoffeeGrind::whole)
      : grams_(grams), roast_(roast), grind_(grind) {}

  double grams() const;
  CoffeeRoast roast() const;
  CoffeeGrind grind() const;
  void set_grind(CoffeeGrind grind);

private:
  double grams_;
  CoffeeRoast roast_;
  CoffeeGrind grind_;
};

module :private;

double CoffeeBeans::grams() const { return this->grams_; }

CoffeeRoast CoffeeBeans::roast() const { return this->roast_; }

CoffeeGrind CoffeeBeans::grind() const { return this->grind_; }

void CoffeeBeans::set_grind(CoffeeGrind grind) {
  ///
}
