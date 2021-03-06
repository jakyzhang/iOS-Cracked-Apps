//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ATPagingView, UIView;

@protocol ATPagingViewDelegate <NSObject>
- (UIView *)viewForPageInPagingView:(ATPagingView *)arg1 atIndex:(long long)arg2;
- (long long)numberOfPagesInPagingView:(ATPagingView *)arg1;

@optional
- (void)pagingViewDidEndMoving:(ATPagingView *)arg1;
- (void)pagingViewWillBeginMoving:(ATPagingView *)arg1;
- (void)pagesDidChangeInPagingView:(ATPagingView *)arg1;
- (void)currentPageDidChangeInPagingView:(ATPagingView *)arg1;
@end

