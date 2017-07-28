//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class SCarMemberModel, UIButton, UIImageView, UILabel, UIView;

@interface SCarGridCollectionReusableView : UICollectionReusableView
{
    CDUnknownBlockType _gridCollectionSelectedBlock;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIView *_lineView;
    UIView *_bgView;
    UIImageView *_defaultImageView;
    UIImageView *_bgImageView;
    UIImageView *_logoImageView;
    UILabel *_levelLabel;
    UILabel *_dateLabel;
    UILabel *_nextLevelLabel;
    UIView *_progressbgView;
    UIView *_progressfgView;
    UIButton *_actionButton;
    UIButton *_totalActButton;
    SCarMemberModel *_cacheMember;
}

@property(retain, nonatomic) SCarMemberModel *cacheMember; // @synthesize cacheMember=_cacheMember;
@property(retain, nonatomic) UIButton *totalActButton; // @synthesize totalActButton=_totalActButton;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIView *progressfgView; // @synthesize progressfgView=_progressfgView;
@property(retain, nonatomic) UIView *progressbgView; // @synthesize progressbgView=_progressbgView;
@property(retain, nonatomic) UILabel *nextLevelLabel; // @synthesize nextLevelLabel=_nextLevelLabel;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UILabel *levelLabel; // @synthesize levelLabel=_levelLabel;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIImageView *defaultImageView; // @synthesize defaultImageView=_defaultImageView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) CDUnknownBlockType gridCollectionSelectedBlock; // @synthesize gridCollectionSelectedBlock=_gridCollectionSelectedBlock;
- (void).cxx_destruct;
- (void)reloadProgressConstraints;
- (void)layoutSubviews;
- (void)setDataModel:(id)arg1;
- (void)actionEvent:(id)arg1;
- (void)loadSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
