//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol FishVideoPlayerViewDelegate <NSObject>

@optional
- (void)onLoadedProgress:(double)arg1;
- (void)onTimerProgress:(double)arg1;
- (void)onPrepared;
- (void)onPaused;
- (void)onEnded;
- (void)onStarted;
@end

