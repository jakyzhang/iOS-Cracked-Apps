//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class AVPlayer, NSDictionary, NSString, NSTimer, NSURL, NWHTTPRequestOperation, UIActivityIndicatorView, UILabel;

@interface TBIVideoPlayerViewController : UIViewController <UIGestureRecognizerDelegate, UIAlertViewDelegate>
{
    NWHTTPRequestOperation *operation;
    CDUnknownBlockType _completion;
    NSDictionary *_queryParam;
    NSURL *_videoURL;
    UILabel *_progressValueLabel;
    NSTimer *_updateProgressValueTimer;
    AVPlayer *_player;
    UIActivityIndicatorView *_loadingIndicatorView;
    struct CGRect _defaultFrame;
    struct CGRect _rect;
}

+ (id)keyForURL:(id)arg1;
+ (id)cachePathForUrl:(id)arg1;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(nonatomic) struct CGRect defaultFrame; // @synthesize defaultFrame=_defaultFrame;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) NSTimer *updateProgressValueTimer; // @synthesize updateProgressValueTimer=_updateProgressValueTimer;
@property(retain, nonatomic) UILabel *progressValueLabel; // @synthesize progressValueLabel=_progressValueLabel;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) NSDictionary *queryParam; // @synthesize queryParam=_queryParam;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)setURL:(id)arg1;
- (void)dealloc;
- (id)formatDownloadLength:(long long)arg1 withTotalSize:(long long)arg2;
- (void)removeLoadingIndicatorView;
- (void)addLoadingIndicatorView;
- (id)formatDownloadProcent:(long long)arg1 totalBytes:(long long)arg2;
- (id)formatDownloadProcent:(double)arg1;
- (id)formatBytes:(long long)arg1;
- (void)disappearProgressViews;
- (void)downloadCurrentVideo;
- (id)temporaryDownloadFolder;
- (void)addProgressValueLabelIfNeed;
- (void)toast:(id)arg1;
- (void)checkAndPlay:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleSingleTap:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)viewDidLoad;
- (id)initWithVideoUrl:(id)arg1;
- (id)initWithQuery:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

