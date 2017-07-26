//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ALIJWebViewControllerProtocol.h"

@class NSString;

@interface ALIJTaobaoWebViewControllerImplement : NSObject <ALIJWebViewControllerProtocol>
{
}

- (void)setRewritedActionURL:(id)arg1 forWebCtrl:(id)arg2;
- (void)setOriginalActionURL:(id)arg1 forWebCtrl:(id)arg2;
- (void)registeHandler:(id)arg1 withClassName:(id)arg2 handler:(CDUnknownBlockType)arg3 forWebCtrl:(id)arg4;
- (void)stopLoadingForWebCtrl:(id)arg1;
- (_Bool)webviewIsAlreadyOnTop:(id)arg1;
- (void)webviewScrollToTop:(id)arg1;
- (void)gobackWithWebCtrl:(id)arg1;
- (_Bool)canGobackWithWebCtrl:(id)arg1;
- (void)loadURL:(id)arg1 forWebCtrl:(id)arg2;
- (void)reloadURL:(id)arg1 forWebCtrl:(id)arg2;
- (id)webViewOfWebCtrl:(id)arg1;
- (id)newWebViewCtrlWithURL:(id)arg1 h5NaviBarControlEnabled:(_Bool)arg2 isLoadTitle:(_Bool)arg3 supportFestivalStyle:(_Bool)arg4;
- (id)newWebViewCtrlWithH5NaviBarControlEnabled:(_Bool)arg1 isLoadTitle:(_Bool)arg2 supportFestivalStyle:(_Bool)arg3;
- (id)newWebViewCtrlWithURL:(id)arg1;
- (id)newWebViewCtrl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
