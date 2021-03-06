//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBXSearchBaseViewController.h"

#import "NXActionProtocol.h"
#import "TBSearchBaseCellContainer.h"
#import "TBSearchVoiceViewDelegate.h"
#import "TBXSearchCollectionViewComponentDelegate.h"
#import "TBXSearchSortbarComponentDelegate.h"
#import "TBXSearchXFilterComponentDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, TBSearchVoiceView, TBXSearchCollectionViewComponent, TBXSearchContainerView, TBXSearchFloatView, TBXSearchXFilterComponent;

@interface TBXSearchItemViewController : TBXSearchBaseViewController <TBXSearchSortbarComponentDelegate, TBXSearchCollectionViewComponentDelegate, TBSearchBaseCellContainer, TBXSearchXFilterComponentDelegate, NXActionProtocol, TBSearchVoiceViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _footprintEnabled;
    TBXSearchCollectionViewComponent *_collectionViewComponent;
    TBXSearchContainerView *_containerView;
    TBXSearchXFilterComponent *_filterComponent;
    TBSearchVoiceView *_voiceView;
    TBXSearchFloatView *_fv;
}

@property(retain, nonatomic) TBXSearchFloatView *fv; // @synthesize fv=_fv;
@property(retain, nonatomic) TBSearchVoiceView *voiceView; // @synthesize voiceView=_voiceView;
@property(retain, nonatomic) TBXSearchXFilterComponent *filterComponent; // @synthesize filterComponent=_filterComponent;
@property(retain, nonatomic) TBXSearchContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) TBXSearchCollectionViewComponent *collectionViewComponent; // @synthesize collectionViewComponent=_collectionViewComponent;
@property(nonatomic) _Bool footprintEnabled; // @synthesize footprintEnabled=_footprintEnabled;
- (void).cxx_destruct;
- (void)resetCollectionViewCellForInfo:(id)arg1;
- (void)parentScrollViewExpand;
- (void)parentScrollViewContact;
- (void)parentScrollViewWillBeginDragging;
- (void)startRecording;
- (void)searchByVoice:(id)arg1 Asrrn:(id)arg2;
- (id)getVoiceAreaView;
- (struct CGRect)getVoiceAreaFrame;
- (struct CGRect)getVoiceRecordingHUDFrame;
- (void)updateH5TabAndSwitch:(id)arg1 appendParams:(id)arg2;
- (void)handleAction:(id)arg1 sender:(id)arg2 args:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addCart;
- (_Bool)videoIsPlaying:(id)arg1;
- (void)playVideo:(id)arg1;
- (void)clickCustomData:(id)arg1;
- (void)filterParams:(id)arg1 andExtData:(id)arg2;
- (void)clickHintQuery:(id)arg1;
- (void)clickRelatedRecommend:(id)arg1;
- (void)removeExistMaskTagView;
- (void)setCollectionAccessibility:(_Bool)arg1;
- (void)setFilterBackViewAccessibility:(_Bool)arg1;
- (void)filterValue:(id)arg1 forKey:(id)arg2 andExtData:(id)arg3;
- (void)passiveCloseSortbarFloatingLayer:(long long)arg1 withIndex:(int)arg2;
- (void)closeSortbarFloatingLayer:(long long)arg1 withIndex:(int)arg2;
- (void)openSortbarFloatingLayer:(long long)arg1 withIndex:(int)arg2;
- (void)turnStyle:(int)arg1;
- (void)sortbarForSearchBySortModel:(id)arg1;
- (void)setFilterIconHighlight;
- (void)openFilter;
- (void)closeFilter;
- (void)doCouponSearch;
- (void)closeHeader:(id)arg1;
- (void)pageMoreDataLoaded;
- (void)contact;
- (void)expand;
- (void)scrollToTop;
- (double)getTopContainerHeight;
- (void)scrollViewDidScroll:(id)arg1;
- (void)goToTop;
- (void)openFootPrints;
- (void)goToCart;
- (void)removeStatusView;
- (void)showEmptyView;
- (void)showErrorView:(id)arg1;
- (void)closeAllFloatingLayer;
- (void)commitFail;
- (void)commitSuccess;
- (void)refreshAgain;
- (void)doFilterSearch;
- (void)search;
- (void)enter;
- (void)leave;
- (void)stopLoading;
- (void)startLoading;
- (void)loadFailed:(id)arg1;
- (void)processPromotionBannerDefaultShow;
- (void)processNXTopSmartTips;
- (void)reloadItemAtIndexPath:(id)arg1;
- (void)reloadData;
- (void)processLayoutStyle:(int)arg1;
- (double)getTop;
- (void)setOtherButtons;
- (void)didReceiveMemoryWarning;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

