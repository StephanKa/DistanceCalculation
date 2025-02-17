#pragma once

#include "Point.h"

#include <cmath>
#include <string_view>

class SimpleDistanceCalculator
{
public:
    [[nodiscard]] static constexpr double distance(const From& from, const To& to)
    {
        const double v = 111.3;
        const double lat1 = (from.lat() + to.lat()) / 2.0 * DEG_TO_RAD;
        const double dx = v * cos(lat1) * (from.lon() - to.lon());
        const double dy = v * (from.lat() - to.lat());
        return sqrt(dx * dx + dy * dy);
    };

    [[nodiscard]] static constexpr std::string_view name() { return m_name; };

private:
    static constexpr std::string_view m_name = "Simple";
};
