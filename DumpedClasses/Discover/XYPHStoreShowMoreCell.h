//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UILabel, UIView;

@interface XYPHStoreShowMoreCell : UICollectionViewCell
{
    UIView *_containerView;
    UILabel *_titleLabel;
    UIView *_dividerView;
    UILabel *_subtitleLabel;
}

@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UIView *dividerView; // @synthesize dividerView=_dividerView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

