#pragma once
#include "Point.h"

#include <cmath>
#include <string_view>

class SphereDistanceCalculator
{
public:
    [[nodiscard]] static constexpr double distance(const From& from, const To& to)
    {
        const double lat1 = from.lat() * DEG_TO_RAD;
        const double lon1 = from.lon() * DEG_TO_RAD;
        const double lat2 = to.lat() * DEG_TO_RAD;
        const double lon2 = to.lon() * DEG_TO_RAD;
        return earthRadius * acos(sin(lat1) * sin(lat2) + cos(lat1) * cos(lat2) * cos(lon2 - lon1));
    };

    [[nodiscard]] static constexpr std::string_view name() { return m_name; };

private:
    static constexpr std::string_view m_name = "Sphere";
    static constexpr auto earthRadius = 6378.388;
};
