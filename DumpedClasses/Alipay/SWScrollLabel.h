//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor, UIFont, UILabel;

@interface SWScrollLabel : UIView
{
    UILabel *_label1;
    UILabel *_label2;
    double _gap;
}

@property(nonatomic) double gap; // @synthesize gap=_gap;
@property(retain, nonatomic) UILabel *label2; // @synthesize label2=_label2;
@property(retain, nonatomic) UILabel *label1; // @synthesize label1=_label1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldAnimate; // @dynamic shouldAnimate;
@property(retain, nonatomic) NSString *text; // @dynamic text;
@property(retain, nonatomic) UIFont *font; // @dynamic font;
@property(retain, nonatomic) UIColor *textColor; // @dynamic textColor;
- (void)setupAnimation;
- (void)layoutSubviews;
- (void)setupLabels;
- (id)initWithFrame:(struct CGRect)arg1;

@end

