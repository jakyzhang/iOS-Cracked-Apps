//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLWebViewControllerDelegate.h"

@class NSString, QLBaseViewController, QLTransparentWebViewController;

@interface QLHLYLevelUpManager : NSObject <QLWebViewControllerDelegate>
{
    QLTransparentWebViewController *_webViewCtl;
    QLBaseViewController *_container;
}

+ (id)shareInstance;
@property(nonatomic) __weak QLBaseViewController *container; // @synthesize container=_container;
@property(retain, nonatomic) QLTransparentWebViewController *webViewCtl; // @synthesize webViewCtl=_webViewCtl;
- (void).cxx_destruct;
- (void)webController:(id)arg1 webView:(id)arg2 didFailLoadWithError:(id)arg3;
- (void)webController:(id)arg1 webViewDidFinishLoad:(id)arg2;
- (void)clickShowH5:(id)arg1;
- (void)hideLevelUpH5;
- (void)showLevelUpH5OnController:(id)arg1;
- (void)recordShowLevelUp;
- (_Bool)shouldShowLevelUpH5;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

