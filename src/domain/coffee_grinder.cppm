module; /* Global Module Fragment. */

export module CoffeeGrinder; /* Interface Unit. */
export import CoffeeBeans;   /* If you're messing with the grinder, you're
                                probably messing with the beans. */

export class CoffeeGrinder {
public:
  explicit CoffeeGrinder(double capacity) : capacity_(capacity) {}

  virtual void grind(CoffeeBeans &beans, CoffeeGrind grind) = 0;
  virtual double grind_duration(CoffeeBeans &beans,
                                CoffeeGrind grind) const = 0;

  double capacity() const;

  virtual ~CoffeeGrinder() = default;

private:
  double capacity_;
};

module :private; /* Implementation Unit. */

double CoffeeGrinder::capacity() const { return this->capacity_; }
