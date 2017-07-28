//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DCAvatarView, NSString, RACSubject, UILabel;

@interface DCUserDescView : UIView
{
    _Bool _showHighlight;
    NSString *_identify;
    double _wordWidth;
    RACSubject *_eventSubject;
    UIView *_avatarBgView;
    DCAvatarView *_avatarView;
    UILabel *_descLabel;
    UILabel *_signLabel;
    UIView *_signBG;
}

@property(retain, nonatomic) UIView *signBG; // @synthesize signBG=_signBG;
@property(retain, nonatomic) UILabel *signLabel; // @synthesize signLabel=_signLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) DCAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *avatarBgView; // @synthesize avatarBgView=_avatarBgView;
@property(nonatomic) _Bool showHighlight; // @synthesize showHighlight=_showHighlight;
@property(retain, nonatomic) RACSubject *eventSubject; // @synthesize eventSubject=_eventSubject;
@property(nonatomic) double wordWidth; // @synthesize wordWidth=_wordWidth;
@property(copy, nonatomic) NSString *identify; // @synthesize identify=_identify;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (CDUnknownBlockType)enable;
- (CDUnknownBlockType)selectIt;
- (CDUnknownBlockType)updateHighlightUI;
- (CDUnknownBlockType)updateUI;
- (void)makeAutoLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end
