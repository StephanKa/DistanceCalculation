#pragma once

#include "Point.h"

#include <string_view>

class GeodDistanceCalculator
{
public:
    [[nodiscard]] double distance(Point& from, Point& to) const;

    [[nodiscard]] std::string_view name() const { return m_name; };

private:
    static constexpr std::string_view m_name = "Geod";
};
