//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseWebViewController.h"

#import "UIWebViewDelegate.h"

@class NSString;

@interface ONEPreheatViewController : TRBaseWebViewController <UIWebViewDelegate>
{
    CDUnknownBlockType _tappedLinkBlock;
    double _fromTopPosition;
}

@property(nonatomic) double fromTopPosition; // @synthesize fromTopPosition=_fromTopPosition;
@property(copy, nonatomic) CDUnknownBlockType tappedLinkBlock; // @synthesize tappedLinkBlock=_tappedLinkBlock;
- (void).cxx_destruct;
- (void)dismiss;
- (void)showInViewController:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

