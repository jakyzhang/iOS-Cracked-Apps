//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class NSIndexPath, NSLayoutConstraint, NSString, UIButton;

@interface CTTrainOrderDetailButtonCell : CTCustomeGroupTableViewCell
{
    _Bool _isEnableButton;
    NSLayoutConstraint *_contentButtonLeftConstraint;
    NSLayoutConstraint *_contentButtonRightConstraint;
    NSLayoutConstraint *_contentButtonHeightConstraint;
    NSString *_title;
    NSIndexPath *_indexPath;
    UIButton *_contentButton;
    id <CTTrainOrderDetailButtonCellDelegate> _delegate;
}

@property(nonatomic) __weak id <CTTrainOrderDetailButtonCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIButton *contentButton; // @synthesize contentButton=_contentButton;
@property(nonatomic) _Bool isEnableButton; // @synthesize isEnableButton=_isEnableButton;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak NSLayoutConstraint *contentButtonHeightConstraint; // @synthesize contentButtonHeightConstraint=_contentButtonHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *contentButtonRightConstraint; // @synthesize contentButtonRightConstraint=_contentButtonRightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *contentButtonLeftConstraint; // @synthesize contentButtonLeftConstraint=_contentButtonLeftConstraint;
- (void).cxx_destruct;
- (void)contentButtonAction:(id)arg1;
- (void)updateCellStyle:(long long)arg1;
- (void)awakeFromNib;

@end

