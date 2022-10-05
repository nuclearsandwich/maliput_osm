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

#include <memory>
#include <string>
#include <unordered_map>

#include <maliput/common/maliput_copyable.h>

#include "maliput_osm/osm/segment.h"

namespace maliput_osm {
namespace osm {

/// Configuration for the OSM parser.
struct ParserConfig {
  /// Lat and lon of the origin of the OSM map.
  maliput::math::Vector2 origin{0., 0.};
};

/// OSMManager is in charge of loading a Lanelet2-OSM map, parsing it, and providing
/// accessors to get the map's important data.
class OSMManager {
 public:
  MALIPUT_NO_COPY_NO_MOVE_NO_ASSIGN(OSMManager)

  /// Constructs a OSMManager object.
  /// @param osm_file_path The path to the OSM file to load.
  /// @param config The parser configuration.
  OSMManager(const std::string& osm_file_path, const ParserConfig& config);

  ~OSMManager();

  /// Gets the map's segments.
  const std::unordered_map<Segment::Id, Segment>& GetOSMSegments() const;

 private:
  std::unordered_map<Segment::Id, Segment> segments_{};
};

}  // namespace osm
}  // namespace maliput_osm
