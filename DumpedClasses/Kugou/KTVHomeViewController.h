//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVBaseViewController.h"

#import "KGMessageCenterSuperBLLDelegate.h"
#import "KTVCompetitionResultViewControllerDelegate.h"
#import "KTVHomePageActiverDelegate.h"

@class KGMessageCenterSingBLL, KTVHomePageActiver, KTVHomePageVM, KTVHomePageView, KTVJudgeResultInfo, KTVModalView, NSDate, NSString, Reachability;

@interface KTVHomeViewController : KTVBaseViewController <KTVHomePageActiverDelegate, KTVCompetitionResultViewControllerDelegate, KGMessageCenterSuperBLLDelegate>
{
    NSDate *_adsListDate;
    NSDate *_bannerListDate;
    int currentMode;
    _Bool _isPassBy;
    _Bool _updateDayWin;
    _Bool _updateLBSOpus;
    _Bool _updateRankInfo;
    _Bool _haveShowCompetetionTip;
    _Bool _skipJudgeTipShow;
    _Bool _haveShowJudgeTip;
    _Bool _isLocating;
    unsigned long long _curHour;
    KTVHomePageVM *_configureVM;
    KTVHomePageView *_homePageView;
    KTVHomePageActiver *_homePageVLL;
    Reachability *_reach;
    KTVModalView *_modalView;
    KTVJudgeResultInfo *_judgeInfo;
    KGMessageCenterSingBLL *_singBLL;
    KGMessageCenterSingBLL *_singFocusBLL;
}

@property(retain, nonatomic) KGMessageCenterSingBLL *singFocusBLL; // @synthesize singFocusBLL=_singFocusBLL;
@property(retain, nonatomic) KGMessageCenterSingBLL *singBLL; // @synthesize singBLL=_singBLL;
@property(retain, nonatomic) KTVJudgeResultInfo *judgeInfo; // @synthesize judgeInfo=_judgeInfo;
@property(retain, nonatomic) KTVModalView *modalView; // @synthesize modalView=_modalView;
@property(nonatomic) _Bool isLocating; // @synthesize isLocating=_isLocating;
@property(nonatomic) _Bool haveShowJudgeTip; // @synthesize haveShowJudgeTip=_haveShowJudgeTip;
@property(nonatomic) _Bool skipJudgeTipShow; // @synthesize skipJudgeTipShow=_skipJudgeTipShow;
@property(nonatomic) _Bool haveShowCompetetionTip; // @synthesize haveShowCompetetionTip=_haveShowCompetetionTip;
@property(nonatomic) _Bool updateRankInfo; // @synthesize updateRankInfo=_updateRankInfo;
@property(nonatomic) _Bool updateLBSOpus; // @synthesize updateLBSOpus=_updateLBSOpus;
@property(nonatomic) _Bool updateDayWin; // @synthesize updateDayWin=_updateDayWin;
@property(retain, nonatomic) Reachability *reach; // @synthesize reach=_reach;
@property(retain, nonatomic) KTVHomePageActiver *homePageVLL; // @synthesize homePageVLL=_homePageVLL;
@property(retain, nonatomic) KTVHomePageView *homePageView; // @synthesize homePageView=_homePageView;
@property(retain, nonatomic) KTVHomePageVM *configureVM; // @synthesize configureVM=_configureVM;
@property(nonatomic) unsigned long long curHour; // @synthesize curHour=_curHour;
@property(nonatomic) _Bool isPassBy; // @synthesize isPassBy=_isPassBy;
- (void).cxx_destruct;
- (void)OnEnterForeground:(id)arg1;
- (void)OnEnterBack:(id)arg1;
- (void)mainModeChange:(id)arg1;
- (void)resetWithdrawDiscountState;
- (void)didCloseCompetitionResultVC:(id)arg1;
- (void)showCompetitionResult:(id)arg1 judgeResult:(id)arg2;
- (void)readFocusMessage;
- (void)readCompetitionMessage;
- (void)homeViewVLL:(id)arg1 selectedCellWithRecommendInfo:(id)arg2;
- (void)goSpaceWithPlayerId:(long long)arg1;
- (void)goListenWorkWithOpusBaseInfo:(id)arg1;
- (void)goListenWorkWithOpusId:(long long)arg1;
- (void)goDayWinRank:(id)arg1;
- (void)goJudge:(id)arg1;
- (void)goCompetition:(id)arg1;
- (void)goCityRank:(id)arg1;
- (void)goNearSong:(id)arg1;
- (void)goMyHomepage:(id)arg1;
- (void)goFriendsNewest:(id)arg1;
- (void)homeViewVLL:(id)arg1 goKSongPage:(_Bool)arg2;
- (void)actionBanner:(id)arg1;
- (void)checkUserLeaveTime;
- (void)updateDataOfHomeView;
- (unsigned long long)getHourOfDate:(id)arg1;
- (void)updateFocusRedDot;
- (void)OnBecomeActive:(id)arg1;
- (void)dismissCompetitionRedDot;
- (void)updateCompetitionRedDot;
- (void)KGMessageCenterDidReceiveOriginData:(id)arg1 messageBLL:(id)arg2;
- (void)havePkDynamicNotify:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)cityChanageNotify:(id)arg1;
- (void)onChangeTheme:(id)arg1;
- (void)notifyUserLogout;
- (void)notifyUserLogin;
- (void)updateJudgeTipIcon;
- (void)updateCompetetionTipIcon;
- (void)updateMineNewIcon;
- (void)KTVNetAsyncRequstErrorNotify:(id)arg1;
- (void)KGUsingControllerState:(int)arg1;
- (double)screenSize;
- (void)addNotification;
- (void)viewDidLoad;
- (long long)showPlayBarWay;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

