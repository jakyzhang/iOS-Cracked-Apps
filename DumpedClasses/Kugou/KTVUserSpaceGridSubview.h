//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class KGThemeImageView, KGThemeLabel, UIImageView;

@interface KTVUserSpaceGridSubview : UIButton
{
    KGThemeImageView *_iconImageView;
    KGThemeLabel *_title_Label;
    UIImageView *_noticeImg;
    KGThemeLabel *_numberLabel;
    UIImageView *_redPointImageView;
}

@property(retain, nonatomic) UIImageView *redPointImageView; // @synthesize redPointImageView=_redPointImageView;
@property(retain, nonatomic) KGThemeLabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) UIImageView *noticeImg; // @synthesize noticeImg=_noticeImg;
@property(retain, nonatomic) KGThemeLabel *title_Label; // @synthesize title_Label=_title_Label;
@property(retain, nonatomic) KGThemeImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

