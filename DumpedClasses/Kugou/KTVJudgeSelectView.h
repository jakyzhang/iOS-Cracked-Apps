//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "KFSwipeCardViewDataSource.h"
#import "KFSwipeCardViewDelegate.h"
#import "KTVAudioRotatePlayerDelegate.h"
#import "KTVJudgeFakeAnimationViewDelegate.h"
#import "KTVMakeJudgeViewDelegate.h"

@class KFSwipeCardView, KGThemeButton, KTVAudioRotatePlayer, KTVJudgeFakeAnimationView, KTVJudgeFakeTipView, KTVJudgeMaxTipView, KTVMakeJudgeInfo, KTVMakeJudgeView, NSString, UIButton, UIImageView, UILabel;

@interface KTVJudgeSelectView : UIView <KFSwipeCardViewDelegate, KFSwipeCardViewDataSource, KTVMakeJudgeViewDelegate, KTVAudioRotatePlayerDelegate, KTVJudgeFakeAnimationViewDelegate>
{
    double preTime;
    double playTotalTime;
    double playLeftTime;
    double playRightTime;
    double endTime;
    double currentTimePoint;
    _Bool _isWillLeave;
    _Bool _isPrepared;
    _Bool _isJumpPrelude;
    _Bool _isDraging;
    _Bool _needRotate;
    _Bool _isFristListenTip;
    _Bool _isFirstVoteTip;
    _Bool _isVoting;
    _Bool _needShowAnimation;
    _Bool _isPlayNewOpus;
    _Bool _isVoted;
    _Bool _isFirstVoted;
    int _canvassPlayerId;
    int _canvassPkId;
    KFSwipeCardView *_cardView;
    id <KTVJudgeSelectViewDelegate> _delegate;
    id <KTVJudgeSelectViewDataSoucre> _dataSource;
    KTVMakeJudgeInfo *_canvassJudgeInfo;
    UIImageView *_bgView;
    UIView *_tipView;
    KGThemeButton *_nextBtn;
    UIButton *_skipBtn;
    KTVMakeJudgeView *_selectView;
    long long _currentIndex;
    KTVAudioRotatePlayer *_player;
    unsigned long long _currentPlayType;
    KTVMakeJudgeView *_fakeView;
    UIView *_tipSelectView;
    UIImageView *_logoImageView;
    UILabel *_chatLabeltitle;
    UILabel *_chatLabeltext;
    KTVJudgeFakeAnimationView *_fakeAnimationView;
    KTVJudgeFakeTipView *_fakeTipView;
    KTVJudgeMaxTipView *_judgeMaxTipView;
    struct CGRect _cardFrame;
}

@property(retain, nonatomic) KTVJudgeMaxTipView *judgeMaxTipView; // @synthesize judgeMaxTipView=_judgeMaxTipView;
@property(nonatomic) int canvassPkId; // @synthesize canvassPkId=_canvassPkId;
@property(nonatomic) int canvassPlayerId; // @synthesize canvassPlayerId=_canvassPlayerId;
@property(nonatomic) struct CGRect cardFrame; // @synthesize cardFrame=_cardFrame;
@property(retain, nonatomic) KTVJudgeFakeTipView *fakeTipView; // @synthesize fakeTipView=_fakeTipView;
@property(retain, nonatomic) KTVJudgeFakeAnimationView *fakeAnimationView; // @synthesize fakeAnimationView=_fakeAnimationView;
@property(retain, nonatomic) UILabel *chatLabeltext; // @synthesize chatLabeltext=_chatLabeltext;
@property(retain, nonatomic) UILabel *chatLabeltitle; // @synthesize chatLabeltitle=_chatLabeltitle;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(nonatomic) _Bool isFirstVoted; // @synthesize isFirstVoted=_isFirstVoted;
@property(nonatomic) _Bool isVoted; // @synthesize isVoted=_isVoted;
@property(nonatomic) _Bool isPlayNewOpus; // @synthesize isPlayNewOpus=_isPlayNewOpus;
@property(nonatomic) _Bool needShowAnimation; // @synthesize needShowAnimation=_needShowAnimation;
@property(nonatomic) _Bool isVoting; // @synthesize isVoting=_isVoting;
@property(nonatomic) _Bool isFirstVoteTip; // @synthesize isFirstVoteTip=_isFirstVoteTip;
@property(nonatomic) _Bool isFristListenTip; // @synthesize isFristListenTip=_isFristListenTip;
@property(retain, nonatomic) UIView *tipSelectView; // @synthesize tipSelectView=_tipSelectView;
@property(retain, nonatomic) KTVMakeJudgeView *fakeView; // @synthesize fakeView=_fakeView;
@property(nonatomic) unsigned long long currentPlayType; // @synthesize currentPlayType=_currentPlayType;
@property(nonatomic) _Bool needRotate; // @synthesize needRotate=_needRotate;
@property(retain, nonatomic) KTVAudioRotatePlayer *player; // @synthesize player=_player;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) _Bool isDraging; // @synthesize isDraging=_isDraging;
@property(nonatomic) _Bool isJumpPrelude; // @synthesize isJumpPrelude=_isJumpPrelude;
@property(retain, nonatomic) KTVMakeJudgeView *selectView; // @synthesize selectView=_selectView;
@property(retain, nonatomic) UIButton *skipBtn; // @synthesize skipBtn=_skipBtn;
@property(retain, nonatomic) KGThemeButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) UIView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) KTVMakeJudgeInfo *canvassJudgeInfo; // @synthesize canvassJudgeInfo=_canvassJudgeInfo;
@property(nonatomic) _Bool isPrepared; // @synthesize isPrepared=_isPrepared;
@property(nonatomic) _Bool isWillLeave; // @synthesize isWillLeave=_isWillLeave;
@property(nonatomic) __weak id <KTVJudgeSelectViewDataSoucre> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <KTVJudgeSelectViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) KFSwipeCardView *cardView; // @synthesize cardView=_cardView;
- (void).cxx_destruct;
- (_Bool)isTodayWithDate:(id)arg1;
- (void)removeTipView;
- (void)closeVoteTipForever;
- (void)closeListenTipForever;
- (void)createTipView:(int)arg1;
- (void)showVoteTip;
- (void)showListenTip;
- (void)hiddenWillSingTip;
- (void)stopAnimation;
- (void)startAnimation;
- (void)endLoading;
- (void)startNormalLoading;
- (void)startFirstLoading;
- (void)chatLabelAnimate;
- (void)makeJudgeView:(id)arg1 didClickFollowButton:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)showJudgeTipViewWithIsMax:(_Bool)arg1;
- (void)makeJudgeView:(id)arg1 playSource:(unsigned long long)arg2 didClickPraiseComplete:(CDUnknownBlockType)arg3;
- (void)swipeCardView:(id)arg1 cellDidOutOfBounds:(id)arg2 forIndex:(long long)arg3;
- (void)swipeCardView:(id)arg1 cellWillOutOfBounds:(id)arg2 forIndex:(long long)arg3;
- (void)resetSelectSkipBtnAndNextBtn;
- (void)resetSkipBtnAndNextBtn;
- (id)defaultCell:(id)arg1 reusingView:(id)arg2;
- (id)swipeCardView:(id)arg1 itemForViewAtIndex:(long long)arg2 reusingView:(id)arg3;
- (long long)numberOfItemsInSwipeCardView:(id)arg1;
- (void)updatePlayStateWithTimePoint:(double)arg1;
- (void)rotatePlayer:(id)arg1 statusChange:(int)arg2 subState:(int)arg3;
- (void)rotatePlayer:(id)arg1 updatePlayTimePoint:(double)arg2;
- (void)goListenWork:(id)arg1;
- (void)goCompetiton:(id)arg1;
- (void)makeJudgeView:(id)arg1 willSwitchPlaySource:(unsigned long long)arg2;
- (void)makeJudgeView:(id)arg1 toUserSpaceWithPlayerId:(long long)arg2;
- (void)showRemainTime;
- (void)actionStop;
- (void)actionFirstTap;
- (void)actionProgress:(double)arg1;
- (void)actionPause;
- (void)actionPlay;
- (void)viewWillLeave;
- (void)updateTopCellKrcModel;
- (void)playOpusWithOpusInfo:(id)arg1;
- (void)playNewOpus:(id)arg1;
- (void)shuffleCompleteWithLeftMaskString:(id)arg1 rightMaskString:(id)arg2;
- (void)showFakeAnimationViewWithIsOver:(_Bool)arg1;
- (void)activeUnActiveRemoteControl;
- (void)activeRemoteControl;
- (void)resetPlayStatus;
- (void)resetSongMemory;
- (void)saveSongMemory;
- (void)playSongMemory;
- (void)showSelectTip;
- (void)canvassSwipeTopCellToLeft;
- (void)saveSwipeTopCellToLeft;
- (void)actionNextGroup:(id)arg1;
- (void)setNextButtonHidden:(_Bool)arg1;
- (void)hideSubview:(_Bool)arg1 loading:(_Bool)arg2;
- (void)loadNextInfoWithIndex:(long long)arg1;
- (void)reloadRelations;
- (void)reloadView:(_Bool)arg1;
- (void)showBackGroundImageWithAlbumURLString:(id)arg1;
- (void)updateCardViewCanPanChanged;
- (void)updateWithCanvassPlayerId:(int)arg1 canvassPkId:(int)arg2;
- (id)congfigChatLabeltextWithHitNumber:(long long)arg1;
- (void)setupContentViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 canvassPkId:(int)arg2 canvassPlayerId:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

