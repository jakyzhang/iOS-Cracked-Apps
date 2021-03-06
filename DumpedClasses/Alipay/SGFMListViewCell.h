//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SGFMGestureCell.h"

@class MFAttributeLabel, UIImageView, UILabel, UIView, _SGFMListRightActionArea;

@interface SGFMListViewCell : SGFMGestureCell
{
    _Bool _isAdmin;
    UIImageView *_leftImageView;
    MFAttributeLabel *_leftUpLabel;
    UILabel *_leftDownLabel;
    _SGFMListRightActionArea *_actionArea;
    UIImageView *_spLine;
    UIView *_bottomLine;
    UIImageView *_bgView;
}

@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIImageView *spLine; // @synthesize spLine=_spLine;
@property(retain, nonatomic) _SGFMListRightActionArea *actionArea; // @synthesize actionArea=_actionArea;
@property(retain, nonatomic) UILabel *leftDownLabel; // @synthesize leftDownLabel=_leftDownLabel;
@property(retain, nonatomic) MFAttributeLabel *leftUpLabel; // @synthesize leftUpLabel=_leftUpLabel;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(nonatomic) _Bool isAdmin; // @synthesize isAdmin=_isAdmin;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setActionAreaTouchEvent:(CDUnknownBlockType)arg1;
- (void)setData:(id)arg1;
- (void)setIndexPath:(id)arg1;
- (void)onLayout;
- (void)configData;
- (void)releaseUI;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_applyFormat;
- (void)_applyWaitPayFormat;

@end

