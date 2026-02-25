module; /* Global Module Fragment. */

export module CoffeeGrinder; /* Interface Unit. */
export import CoffeeBeans;   /* If you're messing with the grinder, you're
                                probably messing with the beans. */

export class CoffeeGrinder {
public:
  explicit CoffeeGrinder(double capacity) : capacity_(capacity) {}

  virtual void grind(CoffeeBeans &beans, CoffeeGrind grind) = 0;
  virtual double capacity() const = 0;

  virtual ~CoffeeGrinder() = default;

protected:
  virtual bool requires_manual_effort() const = 0;

private:
  double capacity_;
};

module :private; /* Implementation Unit. */
