//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSData, UIImage, UIImageView;

@interface TBLiveHandGestureView : UIView
{
    _Bool _isLoad;
    UIImage *_pointImage;
    UIImage *_downImage;
    UIImage *_upImage;
    UIImage *_heartImage;
    NSData *_upImgData;
    NSData *_downImgData;
    NSData *_heartImgData;
    UIImageView *_downImageView;
    UIImageView *_upImageView;
    UIImageView *_heartImageView;
}

@property(nonatomic) _Bool isLoad; // @synthesize isLoad=_isLoad;
@property(retain, nonatomic) UIImageView *heartImageView; // @synthesize heartImageView=_heartImageView;
@property(retain, nonatomic) UIImageView *upImageView; // @synthesize upImageView=_upImageView;
@property(retain, nonatomic) UIImageView *downImageView; // @synthesize downImageView=_downImageView;
@property(retain, nonatomic) NSData *heartImgData; // @synthesize heartImgData=_heartImgData;
@property(retain, nonatomic) NSData *downImgData; // @synthesize downImgData=_downImgData;
@property(retain, nonatomic) NSData *upImgData; // @synthesize upImgData=_upImgData;
@property(retain, nonatomic) UIImage *heartImage; // @synthesize heartImage=_heartImage;
@property(retain, nonatomic) UIImage *upImage; // @synthesize upImage=_upImage;
@property(retain, nonatomic) UIImage *downImage; // @synthesize downImage=_downImage;
@property(retain, nonatomic) UIImage *pointImage; // @synthesize pointImage=_pointImage;
- (void).cxx_destruct;
- (void)onHeartDisplay:(struct CGRect)arg1;
- (void)onDownDisplay:(struct CGRect)arg1;
- (void)onUpDisplay:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)disPlayWithType:(int)arg1 gestureZone:(struct CGRect)arg2;
- (void)loadAllImage;

@end

