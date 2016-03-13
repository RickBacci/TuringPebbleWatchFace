#pragma once
#include "pebble.h"

static const GPathInfo MINUTE_HAND_POINTS = {
  6, (GPoint []) {
    { 0, -70 },
    { -7, 2 },
    { 0, 25 },
    { 7, 2 },
    { 0, -70 },
    { 0, 25 }
  }
};

static const GPathInfo HOUR_HAND_POINTS = {
  6, (GPoint []){
    { 0, -50 },
    { -7, 2 },
    { 0, 25 },
    { 7, 2 },
    { 0, -50 },
    { 0, 25 },
  }
};
