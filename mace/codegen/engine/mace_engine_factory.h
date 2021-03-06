// Copyright 2018 Xiaomi, Inc.  All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// This is a generated file. DO NOT EDIT!

#include <map>
#include <memory>
#include <string>
#include <vector>

#include "mace/public/mace.h"
#include "mace/public/mace_runtime.h"

namespace mace {

MaceStatus CreateMaceEngineFromCode(
    const std::string &model_name,
    const std::string &model_data_file,
    const std::vector<std::string> &input_nodes,
    const std::vector<std::string> &output_nodes,
    const DeviceType device_type,
    std::shared_ptr<MaceEngine> *engine) {
  (void)(model_name);
  (void)(model_data_file);
  (void)(input_nodes);
  (void)(output_nodes);
  (void)(device_type);
  (void)(engine);
  return MaceStatus::MACE_INVALID_ARGS;
}

}  // namespace mace