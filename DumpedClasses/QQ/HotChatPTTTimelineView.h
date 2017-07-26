//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PTTTimelineVoiceCellDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class HotChatPTTTimelineViewModel, NSIndexPath, NSString, UICollectionView;

@interface HotChatPTTTimelineView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UIActionSheetDelegate, PTTTimelineVoiceCellDelegate>
{
    id <HotChatPTTTimelineViewDelegate> _delegate;
    HotChatPTTTimelineViewModel *_timelineModel;
    UIView *_axesView;
    UICollectionView *_timelineCollection;
    NSIndexPath *_currentIndex;
}

@property(retain, nonatomic) NSIndexPath *currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) UICollectionView *timelineCollection; // @synthesize timelineCollection=_timelineCollection;
@property(retain, nonatomic) UIView *axesView; // @synthesize axesView=_axesView;
@property(retain, nonatomic) HotChatPTTTimelineViewModel *timelineModel; // @synthesize timelineModel=_timelineModel;
@property(nonatomic) __weak id <HotChatPTTTimelineViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)timelineItemSize;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)voiceCellLongGesture:(id)arg1 cellModel:(id)arg2;
- (void)moreControl:(id)arg1;
- (void)deleteCellAtIndex:(unsigned long long)arg1;
- (void)setLefterIsEnd:(_Bool)arg1;
- (void)endLeftRefreshing;
- (void)reloadDataAtIndex:(long long)arg1;
- (void)reloadData;
- (void)setAxesCoverColor:(id)arg1;
- (void)scrollTimelineToIndex:(long long)arg1 animation:(_Bool)arg2;
- (_Bool)isAtEnd;
- (void)loadCollectionView;
- (void)loadAxesView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
