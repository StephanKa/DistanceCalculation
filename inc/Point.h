#ifndef POINT_H_
#define POINT_H_

#include <numbers>
#include <string_view>
#include <utility>

class Point
{
public:
    Point(double lat, double lon, std::string_view name = "") : m_lat(lat), m_lon(lon), m_name(std::move(name)){};
    [[nodiscard]] double lat() { return m_lat; };
    [[nodiscard]] double lon() { return m_lon; };

    std::string_view name() { return m_name; }

private:
    const double m_lat;
    const double m_lon;
    const std::string_view m_name;
};

/*
 * Degrees to radians = PI / 180
 */
constexpr double DEG_TO_RAD = std::numbers::pi / 180.0;

#endif /*POINT_H_*/
