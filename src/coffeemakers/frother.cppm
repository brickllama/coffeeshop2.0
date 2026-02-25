module;

#include <cstdint>
#include <print>

export module Frother;

export enum class FrotherState : std::uint8_t { idle, busy };

constexpr double ROOM_TEMP{20.0};

export class Frother {
public:
  Frother() : state_(FrotherState::idle), rod_temperature_(ROOM_TEMP) {}
  FrotherState state() const;
  double rod_temperature() const;

private:
  FrotherState state_;
  double rod_temperature_;
};

module :private;

FrotherState Frother::state() const { return this->state_; }

double Frother::rod_temperature() const { return this->rod_temperature_; }
