//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class FMAvatarImageView, FMImageView, MASConstraint, UILabel, UIView, XSingleBinder;

@interface XReplyMessageCell : UITableViewCell
{
    FMAvatarImageView *_headImageView;
    FMImageView *_itemImageView;
    UIView *_titleGroupView;
    UILabel *_titleLabel;
    UIView *_descGroupView;
    UILabel *_descLabel;
    UILabel *_timeLabel;
    XSingleBinder *_binder;
    MASConstraint *labelRightAlignWithImage;
    MASConstraint *labelRightAlignWithoutImage;
}

+ (double)rowHeightForComponent:(id)arg1;
- (void).cxx_destruct;
- (void)didSelectCell;
- (void)setItemMainPic:(id)arg1;
- (void)setDescText:(id)arg1;
- (void)setMessageTimeText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setHeadImage:(id)arg1;
- (void)onReplyState:(id)arg1;
- (void)bindComponent:(id)arg1;
- (void)setupLineView;
- (void)setupDescView;
- (void)setupTitleView;
- (void)setupItemImageView;
- (void)setupHeadImageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

