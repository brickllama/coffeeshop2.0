export module CoffeeBeans; /* Interface Unit. */
import std.compat;         /* <cstdint>; <stdexcept> */

/**
 * @brief Different kinds of coffee roasts.
 */
export enum class CoffeeRoast : std::uint8_t {
  light,  /* Light brown color; mellow flavor; best suited for pour over. */
  medium, /* Medium brown color; balanced flavor; best suited for pour over and
             drip coffee. */
  dark /* Shiny, black color; smoky, intense flavor; best suited for espresso.
        */
};

/**
 * @brief Different kinds of coffee grinds.
 */
export enum class CoffeeGrind : std::uint8_t {
  whole,          /* Completely unaltered beans. */
  extreme_coarse, /* 1.3 - 1.5mm */
  coarse,         /* 1mm */
  medium_coarse,  /* 0.7 - 0.85mm */
  medium,         /* 0.6 - 0.65mm */
  medium_fine,    /* 0.45 - 0.55mm */
  fine,           /* 0.2 - 0.35mm */
  extreme_fine    /* 0.1mm */
};

/**
 * Represents a portion of coffee beans with a specific roast and grind.
 */
export class CoffeeBeans {
public:
  /**
   * @brief Explicit constructor with specified weight, roast, and grind
   * (optional).
   * @param grams The weight of coffee beans in grams.
   * @param roast The roast level of the coffee beans.
   * @param grind The grind size. Defaults to whole beans.
   */
  explicit CoffeeBeans(double grams, CoffeeRoast roast,
                       CoffeeGrind grind = CoffeeGrind::whole)
      : grams_(grams), roast_(roast), grind_(grind) {}

  /**
   * @brief Returns the weight of the coffee bean portion.
   * @return Weight in grams.
   */
  double grams() const;

  /**
   * @brief Returns the roast of the coffee beans.
   * @return CoffeeRoast enum.
   */
  CoffeeRoast roast() const;

  /**
   * @brief Returns the grind of the coffee beans.
   * @return CoffeeGrind enum.
   */
  CoffeeGrind grind() const;

  /**
   * @brief Sets the grind size of the coffee bean portion.
   *
   * @param grind The new grind size. Must be equal to or finer than the current
   * grind.
   * @throws std::runtime_error if attempting to 'un-grind' the beans.
   */
  void set_grind(CoffeeGrind grind);

private:
  double grams_;      /* Weight of the beans in grams. */
  CoffeeRoast roast_; /* Roast level. */
  CoffeeGrind grind_; /* Grind size. */
};

module :private; /* Implementation Unit. */

double CoffeeBeans::grams() const { return this->grams_; }

CoffeeRoast CoffeeBeans::roast() const { return this->roast_; }

CoffeeGrind CoffeeBeans::grind() const { return this->grind_; }

void CoffeeBeans::set_grind(CoffeeGrind grind) {
  if (this->grind_ > grind) {
    throw std::runtime_error("COFFEE BEANS CAN NOT BE UNGROUND!");
  } else {
    this->grind_ = grind;
  }
}
