//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

@class KGMusicCoverView, MoreMusicTableView, MusicControlViewController, NSString, UIImage, UIView;

@interface coverMusicTableController : KGViewController
{
    MoreMusicTableView *_tableView;
    KGMusicCoverView *_coverView;
    double _insetHeight;
    UIImage *_coverImage;
    UIView *_coverArea;
    double _coverInset;
    MusicControlViewController *musicControl;
    NSString *_coverImgUrl;
}

@property(retain, nonatomic) NSString *coverImgUrl; // @synthesize coverImgUrl=_coverImgUrl;
@property(retain, nonatomic) MusicControlViewController *musicControl; // @synthesize musicControl;
- (void).cxx_destruct;
- (id)getCoverArea;
- (void)setCover:(id)arg1;
- (void)setCoverInset:(double)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;

@end

