#pragma once

#include "Point.h"

#include <cmath>
#include <string_view>

class ReallySimpleDistanceCalculator
{
public:
    [[nodiscard]] static constexpr double distance(const From& from, const To& to)
    {
        const double dx = 71.5 * (from.lon() - to.lon());
        const double dy = 111.3 * (from.lat() - to.lat());
        return sqrt(dx * dx + dy * dy);
    };

    [[nodiscard]] static constexpr std::string_view name() { return m_name; };

private:
    static constexpr std::string_view m_name = "ReallySimple";
};
