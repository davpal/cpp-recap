// VoiceStream.cpp
#include "VoiceStream.h"
#include <iostream>

void VoiceStream::append(float sample) {
  std::cout << __PRETTY_FUNCTION__ << ' ' << sample << '\n';
}