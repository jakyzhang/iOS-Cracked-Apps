//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor, UIImage, UIImageView;

@interface CTProgressView : UIView
{
    _Bool _isAnimating;
    UIImageView *backgroundImageView_;
    UIImageView *progressImageView_;
    float _progress;
    UIColor *_progressTintColor;
    UIColor *_trackTintColor;
    UIImage *_progressImage;
    UIImage *_trackImage;
}

@property(retain, nonatomic) UIImage *trackImage; // @synthesize trackImage=_trackImage;
@property(retain, nonatomic) UIImage *progressImage; // @synthesize progressImage=_progressImage;
@property(retain, nonatomic) UIColor *trackTintColor; // @synthesize trackTintColor=_trackTintColor;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)initBaseView;
- (void)initBaseData;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

