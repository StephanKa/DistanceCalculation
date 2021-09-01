#pragma once

#include "Point.h"

#include <cmath>
#include <string_view>

class ReallySimpleDistanceCalculator
{
public:
    [[nodiscard]] double distance(Point from, Point& to) const
    {
        const double dx = 71.5 * (from.lon() - to.lon());
        const double dy = 111.3 * (from.lat() - to.lat());
        return sqrt(dx * dx + dy * dy);
    };

    [[nodiscard]] std::string_view name() const { return m_name; };

private:
    static constexpr std::string_view m_name = "ReallySimple";
};
