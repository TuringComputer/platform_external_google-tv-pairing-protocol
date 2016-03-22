// Copyright 2012 Google Inc. All Rights Reserved.
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

#ifndef POLO_PAIRING_MESSAGE_SECRETMESSAGE_H_
#define POLO_PAIRING_MESSAGE_SECRETMESSAGE_H_

#include <stdint.h>
#include <string>
#include <vector>
#include "polo/pairing/message/polomessage.h"

namespace polo {
namespace pairing {
namespace message {

// Message used to pass the pairing secret. The secret consists of encoded
// bytes.
class SecretMessage : public PoloMessage {
 public:
  // Creates a new message for the given secret.
  // @param secret the secret
  explicit SecretMessage(const std::vector<uint8_t>& secret);

  // Gets the secret.
  const std::vector<uint8_t>& secret() const;

  // @override
  virtual std::string ToString() const;
 private:
  std::vector<uint8_t> secret_;

  DISALLOW_COPY_AND_ASSIGN(SecretMessage);
};

}  // namespace message
}  // namespace pairing
}  // namespace polo

#endif  // POLO_PAIRING_MESSAGE_SECRETMESSAGE_H_
