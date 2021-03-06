//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HLFeedCell.h"

@class UIImageView, UILabel, UIView;

@interface HLQAFeedCell : HLFeedCell
{
    UILabel *_identityLbl;
    UIView *_verticalLine;
    UIImageView *_questionMark;
    UILabel *_qaLbl;
}

@property(retain, nonatomic) UILabel *qaLbl; // @synthesize qaLbl=_qaLbl;
@property(retain, nonatomic) UIImageView *questionMark; // @synthesize questionMark=_questionMark;
@property(retain, nonatomic) UIView *verticalLine; // @synthesize verticalLine=_verticalLine;
@property(retain, nonatomic) UILabel *identityLbl; // @synthesize identityLbl=_identityLbl;
- (void).cxx_destruct;
- (void)onShowBizSource;
- (void)updateReadNum:(id)arg1;
- (void)updateQAStatus:(id)arg1;
- (void)updateQAUserInfo:(id)arg1;
- (void)updateCell:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

