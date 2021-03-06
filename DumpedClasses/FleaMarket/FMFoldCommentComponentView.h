//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MGSwipeTableCell.h"

#import "FMComponentCellProtocol.h"
#import "FMPicGridViewDelegate.h"
#import "FMSuperFavorHelperDelegate.h"
#import "MGSwipeTableCellDelegate.h"

@class FMAvatarImageView, FMImageView, FMPicGridView, FMSuperFavorHelper, FMUserTagLabel, NSString, UIButton, UIImageView, UILabel, UIView;

@interface FMFoldCommentComponentView : MGSwipeTableCell <MGSwipeTableCellDelegate, FMPicGridViewDelegate, FMSuperFavorHelperDelegate, FMComponentCellProtocol>
{
    _Bool _isDuringRequest;
    FMAvatarImageView *_avatarImageView;
    UILabel *_userNickLabel;
    UILabel *_postTimeLabel;
    UILabel *_bidPriceLabel;
    UILabel *_bidTagLabel;
    UILabel *_commentContentLabel;
    FMImageView *_warningImageView;
    FMPicGridView *_picGridView;
    UIView *_downLine;
    UIView *_topLineView;
    UIImageView *_blankImage;
    FMUserTagLabel *_tagLabel;
    UIButton *_superFavorButton;
    FMImageView *_awesomeIcon;
    UILabel *_awesomeCount;
    FMSuperFavorHelper *_superFavorHelper;
}

+ (double)getImageHeightFor:(id)arg1;
+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) FMSuperFavorHelper *superFavorHelper; // @synthesize superFavorHelper=_superFavorHelper;
@property(retain, nonatomic) UILabel *awesomeCount; // @synthesize awesomeCount=_awesomeCount;
@property(retain, nonatomic) FMImageView *awesomeIcon; // @synthesize awesomeIcon=_awesomeIcon;
@property(retain, nonatomic) UIButton *superFavorButton; // @synthesize superFavorButton=_superFavorButton;
@property(retain, nonatomic) FMUserTagLabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(nonatomic) _Bool isDuringRequest; // @synthesize isDuringRequest=_isDuringRequest;
@property(retain, nonatomic) UIImageView *blankImage; // @synthesize blankImage=_blankImage;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) UIView *downLine; // @synthesize downLine=_downLine;
@property(retain, nonatomic) FMPicGridView *picGridView; // @synthesize picGridView=_picGridView;
@property(retain, nonatomic) FMImageView *warningImageView; // @synthesize warningImageView=_warningImageView;
@property(retain, nonatomic) UILabel *commentContentLabel; // @synthesize commentContentLabel=_commentContentLabel;
@property(retain, nonatomic) UILabel *bidTagLabel; // @synthesize bidTagLabel=_bidTagLabel;
@property(retain, nonatomic) UILabel *bidPriceLabel; // @synthesize bidPriceLabel=_bidPriceLabel;
@property(retain, nonatomic) UILabel *postTimeLabel; // @synthesize postTimeLabel=_postTimeLabel;
@property(retain, nonatomic) UILabel *userNickLabel; // @synthesize userNickLabel=_userNickLabel;
@property(retain, nonatomic) FMAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)requestSuperFavorItem;
- (void)updatesuperFavorButton;
- (void)superFavorButtonTouchBegin:(id)arg1;
- (void)onGridView:(id)arg1 heightChanged:(double)arg2;
- (void)reportButtonTapped;
- (void)deleteButtonTapped;
- (_Bool)swipeTableCell:(id)arg1 tappedButtonAtIndex:(long long)arg2 direction:(long long)arg3 fromExpansion:(_Bool)arg4;
- (_Bool)swipeTableCell:(id)arg1 canSwipe:(long long)arg2 fromPoint:(struct CGPoint)arg3;
- (void)didEndDisplayingForRowAtIndexPath:(id)arg1;
- (void)didSelectCell;
- (id)getRightButtons;
- (void)updateConstraints;
- (void)bindComponent:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

