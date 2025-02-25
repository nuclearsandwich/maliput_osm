// BSD 3-Clause License
//
// Copyright (c) 2022, Woven Planet.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// * Redistributions of source code must retain the above copyright notice, this
//   list of conditions and the following disclaimer.
//
// * Redistributions in binary form must reproduce the above copyright notice,
//   this list of conditions and the following disclaimer in the documentation
//   and/or other materials provided with the distribution.
//
// * Neither the name of the copyright holder nor the names of its
//   contributors may be used to endorse or promote products derived from
//   this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#pragma once

#include <gtest/gtest.h>
#include <maliput_sparse/geometry/line_string.h>

#include "maliput_osm/osm/lane.h"
#include "maliput_osm/osm/segment.h"

namespace maliput_osm {
namespace osm {
namespace test {

/// Compares two osm::Lane objects.
/// @param lhs The left-hand side of the comparison.
/// @param rhs The right-hand side of the comparison.
/// @param tolerance The tolerance to use when comparing floating point values.
/// @returns A Google Test assertion result.
::testing::AssertionResult CompareOSMLane(const Lane& lhs, const Lane& rhs, double tolerance);

/// Compares two osm::Segment objects.
/// @param lhs The left-hand side of the comparison.
/// @param rhs The right-hand side of the comparison.
/// @param tolerance The tolerance to use when comparing floating point values.
/// @returns A Google Test assertion result.
::testing::AssertionResult CompareOSMSegment(const Segment& lhs, const Segment& rhs, double tolerance);

}  // namespace test
}  // namespace osm
}  // namespace maliput_osm
