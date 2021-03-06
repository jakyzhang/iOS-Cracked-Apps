//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class DCGLTimeSelecterView, DCRouteOrderListLoadingView, DCRouteOrderListTopNavigationView, NSString, UIScrollView;

@interface DCRouteOrderListView : UIView <UIScrollViewDelegate>
{
    _Bool _showTimeView;
    _Bool _isScrolling;
    _Bool _isChanged;
    CDUnknownBlockType _updateEnable;
    CDUnknownBlockType _selectedTimeIndex;
    DCRouteOrderListTopNavigationView *_navigationView;
    DCGLTimeSelecterView *_timeSelectorView;
    UIScrollView *_scrollView;
    UIView *_contentView;
    double _lastPercent;
    DCRouteOrderListLoadingView *_maskLoadingView;
}

@property(nonatomic) _Bool isChanged; // @synthesize isChanged=_isChanged;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(retain, nonatomic) DCRouteOrderListLoadingView *maskLoadingView; // @synthesize maskLoadingView=_maskLoadingView;
@property(nonatomic) double lastPercent; // @synthesize lastPercent=_lastPercent;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) DCGLTimeSelecterView *timeSelectorView; // @synthesize timeSelectorView=_timeSelectorView;
@property(retain, nonatomic) DCRouteOrderListTopNavigationView *navigationView; // @synthesize navigationView=_navigationView;
@property(copy, nonatomic) CDUnknownBlockType selectedTimeIndex; // @synthesize selectedTimeIndex=_selectedTimeIndex;
@property(copy, nonatomic) CDUnknownBlockType updateEnable; // @synthesize updateEnable=_updateEnable;
@property(nonatomic) _Bool showTimeView; // @synthesize showTimeView=_showTimeView;
- (void).cxx_destruct;
@property(readonly, nonatomic) double scrollPercent;
- (void)showMaskLoading;
- (void)stopLoading;
- (void)startLoading;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
@property(readonly, nonatomic) long long selectedPage;
- (void)_setupContentView;
- (void)updateTimeView:(id)arg1;
- (void)timeSelectorViewDidSelected:(id)arg1;
- (void)_setupAutoLayout;
- (void)didAddSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

