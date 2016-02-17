/*
 *  Copyright 2015 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#import "RTCStatsReport.h"

#include "webrtc/api/statstypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface RTCStatsReport ()

/** Initialize an RTCStatsReport object from a native StatsReport. */
- (instancetype)initWithNativeReport:(const webrtc::StatsReport &)nativeReport;

@end

NS_ASSUME_NONNULL_END
