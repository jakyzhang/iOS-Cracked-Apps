//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIColor;

@interface TMMarketHotSellItemView : UIButton
{
    UIColor *_normalBgColor;
}

@property(retain, nonatomic) UIColor *normalBgColor; // @synthesize normalBgColor=_normalBgColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)hideSeparateLine;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
