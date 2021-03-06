//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBBCardMethod.h"

@class NSDate, NSString, RACDisposable, SBBFakePullBar, SBBMatchingTipCardConf, UIImageView, UILabel;

@interface SBBMatchingTipCard : UIView <SBBCardMethod>
{
    _Bool _enablePullBar;
    UIView *_contentView;
    id <SBBCardDelegate> _cardDelegate;
    UIView *_countDownView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_portraitImageView;
    UILabel *_matchingDescriptionLabel;
    SBBFakePullBar *_fakePullBar;
    SBBMatchingTipCardConf *_matchingTipCardConf;
    RACDisposable *_countDownDisposable;
    NSDate *_countDownStartDate;
    NSDate *_changPassengerStartDate;
}

@property(retain, nonatomic) NSDate *changPassengerStartDate; // @synthesize changPassengerStartDate=_changPassengerStartDate;
@property(retain, nonatomic) NSDate *countDownStartDate; // @synthesize countDownStartDate=_countDownStartDate;
@property(retain, nonatomic) RACDisposable *countDownDisposable; // @synthesize countDownDisposable=_countDownDisposable;
@property(retain, nonatomic) SBBMatchingTipCardConf *matchingTipCardConf; // @synthesize matchingTipCardConf=_matchingTipCardConf;
@property(retain, nonatomic) SBBFakePullBar *fakePullBar; // @synthesize fakePullBar=_fakePullBar;
@property(retain, nonatomic) UILabel *matchingDescriptionLabel; // @synthesize matchingDescriptionLabel=_matchingDescriptionLabel;
@property(retain, nonatomic) UIImageView *portraitImageView; // @synthesize portraitImageView=_portraitImageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *countDownView; // @synthesize countDownView=_countDownView;
@property(nonatomic) __weak id <SBBCardDelegate> cardDelegate; // @synthesize cardDelegate=_cardDelegate;
@property(nonatomic) _Bool enablePullBar; // @synthesize enablePullBar=_enablePullBar;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)stopCountDown;
- (void)startCountDown;
- (void)updateUIWithMatchingPassenger:(id)arg1;
- (double)changePassengerTimeInterval;
- (void)changePassengerWithCountDownTimeInterval:(double)arg1;
- (void)updateSubtitleWithTimeInterval:(double)arg1 subtitle:(id)arg2;
- (void)updateWithConfigure:(id)arg1;
- (void)layoutSubviews;
- (void)initializeFakePullBar;
- (void)initializeCountDownView;
- (void)initializeContentView;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

