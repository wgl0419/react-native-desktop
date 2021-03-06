/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <AppKit/AppKit.h>

/**
 * Contains any methods related to scrolling. Any `RCTView` that has scrolling
 * features should implement these methods.
 */
@protocol RCTScrollableProtocol

@property (nonatomic, weak) NSObject *nativeScrollDelegate DEPRECATED_ATTRIBUTE;

@property (nonatomic, readonly) CGSize contentSize;

- (void)scrollWheel:(NSEvent *)theEvent;
- (void)scrollToOffset:(CGPoint)offset;
- (void)scrollToOffset:(CGPoint)offset animated:(BOOL)animated;
- (void)zoomToRect:(CGRect)rect animated:(BOOL)animated;

//- (void)addScrollListener:(NSObject<UIScrollViewDelegate> *)scrollListener;
//- (void)removeScrollListener:(NSObject<UIScrollViewDelegate> *)scrollListener;

@end
