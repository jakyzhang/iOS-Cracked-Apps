//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXViewController.h"

#import "FXKGLiveShareViewControllerDelegate.h"
#import "KGLiveInterviewLiveRoomVllDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UserLoginViewControllerDelegate.h"

@class FXKGLiveShareViewController, FXShareViewController, KGLiveInterviewLiveRoomVll, NSString;

@interface KGLiveInterviewLiveRoomController : FXViewController <KGLiveInterviewLiveRoomVllDelegate, UIAlertViewDelegate, FXKGLiveShareViewControllerDelegate, UserLoginViewControllerDelegate>
{
    _Bool _isFullScreen;
    int _concertType;
    KGLiveInterviewLiveRoomVll *_roomVll;
    FXShareViewController *_shareViewController;
    long long _concertId;
    long long _roomId;
    FXKGLiveShareViewController *_shareVC;
    CDUnknownBlockType _blcok;
}

@property(copy, nonatomic) CDUnknownBlockType blcok; // @synthesize blcok=_blcok;
@property(retain, nonatomic) FXKGLiveShareViewController *shareVC; // @synthesize shareVC=_shareVC;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(nonatomic) int concertType; // @synthesize concertType=_concertType;
@property(nonatomic) long long concertId; // @synthesize concertId=_concertId;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(retain, nonatomic) FXShareViewController *shareViewController; // @synthesize shareViewController=_shareViewController;
@property(retain, nonatomic) KGLiveInterviewLiveRoomVll *roomVll; // @synthesize roomVll=_roomVll;
- (void).cxx_destruct;
- (void)loginUserResult:(CDUnknownBlockType)arg1;
- (void)loginDirectely;
- (void)showShareStatusTips:(id)arg1;
- (void)shareComplete:(_Bool)arg1 AndErrorCode:(unsigned long long)arg2 AndErrorMsg:(id)arg3 AndController:(id)arg4 AndItem:(id)arg5;
- (void)showShareSheet:(_Bool)arg1;
- (void)hideShareView;
- (void)kgLiveTouchShareWithIsFullScreen:(_Bool)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)forceExitRoom;
- (void)exitDirectely;
- (void)showExitAlert:(id)arg1;
- (void)roomChangeScreen:(_Bool)arg1;
- (void)roomShareBtnTouch:(_Bool)arg1;
- (void)roomShowLoginTips:(id)arg1;
- (void)roomShowExitAlert:(id)arg1;
- (void)roomShowErrorTips:(id)arg1;
- (void)roomShowSuccessStatus:(id)arg1;
- (_Bool)shouldAutorotate;
- (void)loginCancel;
- (void)loginSuccess;
- (void)userLoginChange;
- (_Bool)fxViewShouldDrag;
- (void)changeFullScreen:(id)arg1;
- (void)loginWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithConcertId:(long long)arg1 concertType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

