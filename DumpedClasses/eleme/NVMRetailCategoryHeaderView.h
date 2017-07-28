//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

@class UIButton, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface NVMRetailCategoryHeaderView : UITableViewHeaderFooterView
{
    _Bool _selected;
    CDUnknownBlockType _tapHandler;
    long long _orderCount;
    UIImageView *_indicatorImageView;
    UILabel *_nameLabel;
    UIButton *_orderCountButton;
    UIView *_bottomSeperatorView;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

+ (id)attributedStringForIconHash:(id)arg1 icon:(id)arg2 title:(id)arg3 selected:(_Bool)arg4;
+ (void)downloadIconImageWithURL:(id)arg1 compeletion:(CDUnknownBlockType)arg2;
+ (double)heightForIconHash:(id)arg1 icon:(id)arg2 title:(id)arg3 width:(double)arg4;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIView *bottomSeperatorView; // @synthesize bottomSeperatorView=_bottomSeperatorView;
@property(retain, nonatomic) UIButton *orderCountButton; // @synthesize orderCountButton=_orderCountButton;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *indicatorImageView; // @synthesize indicatorImageView=_indicatorImageView;
@property(nonatomic) long long orderCount; // @synthesize orderCount=_orderCount;
@property(copy, nonatomic) CDUnknownBlockType tapHandler; // @synthesize tapHandler=_tapHandler;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (void)handleTap;
- (void)configureWithIconHash:(id)arg1 icon:(id)arg2 title:(id)arg3 selected:(_Bool)arg4;
- (void)setupEvent;
- (void)setupUI;
- (id)initWithReuseIdentifier:(id)arg1;

@end
