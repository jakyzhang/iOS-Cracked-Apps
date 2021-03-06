//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CMScrollIndexBar, NMAllSelectionCell, NMIpodProgressView, NMIpodSelectionPopupView, NMTableViewContainer, UITableView;

@interface NMIpodSelectionView : UIView
{
    _Bool _needAnimation;
    _Bool _popViewHidden;
    UIView *_sepLine;
    NMTableViewContainer *_tableViewContainer;
    UITableView *_tableView;
    NMIpodSelectionPopupView *_popupView;
    NMIpodProgressView *_progressView;
    NMAllSelectionCell *_selectAllButton;
    CMScrollIndexBar *_indexBar;
    id _delegate;
    unsigned long long _importType;
}

@property(nonatomic) unsigned long long importType; // @synthesize importType=_importType;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CMScrollIndexBar *indexBar; // @synthesize indexBar=_indexBar;
@property(retain, nonatomic) NMAllSelectionCell *selectAllButton; // @synthesize selectAllButton=_selectAllButton;
@property(retain, nonatomic) NMIpodProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NMIpodSelectionPopupView *popupView; // @synthesize popupView=_popupView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)updateProgress:(double)arg1;
- (void)showProgress;
- (void)setSelectedCount:(long long)arg1 fingerPrintCount:(long long)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

