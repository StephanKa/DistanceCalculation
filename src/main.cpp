#include "GeodDistanceCalculator.h"
#include "Point.h"
#include "ReallySimpleDistanceCalculator.h"
#include "SimpleDistanceCalculator.h"
#include "SphereDistanceCalculator.h"

#include <fmt/format.h>

const auto ReallySimple = ReallySimpleDistanceCalculator();
const auto Simple = SimpleDistanceCalculator();
const auto Sphere = SphereDistanceCalculator();
const auto Geod = GeodDistanceCalculator();

template<typename... Args> void printer(const From& point1, const To& point2, Args&&... args)
{
    fmt::print("Distance {0} <--> {1}\n", point1.name(), point2.name());
    (fmt::print("{0}: {1:.3f} km\n", args.name(), args.distance(point1, point2)), ...);
    fmt::print("\n");
}

int main()
{
    constexpr From rue1(49.9917, 8.41321, "Ruesselsheim Station");
    constexpr To rue2(50.0049, 8.42182, "Ruesselsheim Opel bridge");
    printer(rue1, rue2, ReallySimple, Simple, Sphere, Geod);

    constexpr From berlin(52.5164, 13.3777, "Berlin Brandenburg Gate");
    constexpr To lissabon(38.692668, -9.177944, "Lisbon Tagus bridge");
    printer(berlin, lissabon, ReallySimple, Simple, Sphere, Geod);
}
