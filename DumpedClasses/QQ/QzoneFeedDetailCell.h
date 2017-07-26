//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZFeedLayoutCell.h"

#import "QZFeedCellDelegate.h"
#import "QZPhotoThumbViewDelegate.h"

@class NSIndexPath, NSString, QZLayoutInfo, UIButton, UIImage, UIViewController;

@interface QzoneFeedDetailCell : QZFeedLayoutCell <QZFeedCellDelegate, QZPhotoThumbViewDelegate>
{
    UIImage *bgImage;
    UIButton *_downloadBanner;
    _Bool _isInVideoCommentView;
    int _position;
    long long section;
    NSIndexPath *indexPath;
    UIViewController *_controller;
    QZLayoutInfo *_info;
}

+ (long long)numberOfRowsInSection:(long long)arg1 feedmodel:(id)arg2;
+ (void)resetMargin;
+ (void)setCellMargin:(id)arg1 isLastMargin:(_Bool)arg2;
+ (void)setLayoutMargin:(id)arg1;
+ (double)heightWithNewFeedModel:(id)arg1 indexPath:(id)arg2 isFamousZone:(_Bool)arg3 isFirstRow:(_Bool)arg4 realLastSection:(long long)arg5 isInVideoCommentView:(_Bool)arg6;
@property(retain, nonatomic) QZLayoutInfo *info; // @synthesize info=_info;
@property(nonatomic) _Bool isInVideoCommentView; // @synthesize isInVideoCommentView=_isInVideoCommentView;
@property(nonatomic) int position; // @synthesize position=_position;
@property(nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath;
@property(nonatomic) long long section; // @synthesize section;
- (void).cxx_destruct;
- (void)resetAccessibilityElements;
- (void)generateLikeListAccessibilityElementWithFrame:(struct CGRect)arg1;
- (void)generateCommentAccessibilityElements;
- (void)superlike;
- (long long)maxPictureShowCount;
- (void)onFeedCell:(id)arg1 action:(unsigned long long)arg2 param:(id)arg3 feedModel:(id)arg4;
- (id)firstVideo;
- (void)setPosition:(int)arg1 isInVideoCommentView:(_Bool)arg2;
- (void)refreshComment;
- (void)refreshLike;
- (void)clickDownloadBanner;
- (void)makeDownloadBannerReady;
- (void)setFeedModel:(id)arg1;
- (void)setNeedsUpdateLayoutInfo;
- (void)prepareForReuse;
- (id)layoutModelInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
