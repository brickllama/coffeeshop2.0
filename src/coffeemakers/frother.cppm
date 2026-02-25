module;

#include <cstdint>
#include <print>

export module Frother;

export enum class FrotherState : std::uint8_t { idle, busy };

export class Frother {
public:
  Frother() : state_(FrotherState::idle) {}
  FrotherState state() const { return this->state_; }

private:
  FrotherState state_;
};

module :private;