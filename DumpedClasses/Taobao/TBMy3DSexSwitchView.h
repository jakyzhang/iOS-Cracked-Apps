//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIButton, UILabel;

@interface TBMy3DSexSwitchView : UIControl
{
    int _sex;
    UIButton *_femaleButton;
    UIButton *_maleButton;
    UILabel *_femaleLabel;
    UILabel *_maleLabel;
}

@property(retain, nonatomic) UILabel *maleLabel; // @synthesize maleLabel=_maleLabel;
@property(retain, nonatomic) UILabel *femaleLabel; // @synthesize femaleLabel=_femaleLabel;
@property(retain, nonatomic) UIButton *maleButton; // @synthesize maleButton=_maleButton;
@property(retain, nonatomic) UIButton *femaleButton; // @synthesize femaleButton=_femaleButton;
@property(nonatomic) int sex; // @synthesize sex=_sex;
- (void).cxx_destruct;
- (void)onSexSwitchButtonClick:(id)arg1;
- (void)setUpView;
- (id)init;

@end

