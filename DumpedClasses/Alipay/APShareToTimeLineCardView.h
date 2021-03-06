//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class APShareCardImageView, NSDictionary, UIActivityIndicatorView, UILabel;

@interface APShareToTimeLineCardView : UIView
{
    APShareCardImageView *_iconView;
    UILabel *_descLabel;
    NSDictionary *_cardDic;
    UIActivityIndicatorView *_indicatorView;
    UIView *_loadingView;
}

+ (id)generateCardWithFrame:(struct CGRect)arg1 cardDic:(id)arg2;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) NSDictionary *cardDic; // @synthesize cardDic=_cardDic;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) APShareCardImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (id)descText;
- (id)iconImage;
- (void)dealloc;
- (id)initLoadingCardWithFrame:(struct CGRect)arg1 cardDic:(id)arg2;
- (id)initImageCardWithFrame:(struct CGRect)arg1 cardDic:(id)arg2;
- (void)layoutSubviews;
- (id)initWebCardWithFrame:(struct CGRect)arg1 cardDic:(id)arg2;
- (id)convertCardImgDic:(id)arg1;

@end

