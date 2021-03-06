//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class NSString, UIImage, UIView;

@interface QQReadInJoyChannelItemImage : UIImageView
{
    UIImage *_defaultImage;
    NSString *_coverUrl;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
- (void).cxx_destruct;
- (void)handleGifDecodeNotification:(id)arg1;
- (void)loadGifViewWithPath:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)startGifPlayer;
- (void)setImageWithMetaInfo:(id)arg1;
- (void)onImageDownloadResult:(id)arg1;
- (void)showDefaultImage;
- (void)setItemImageWithUrl:(id)arg1 maskColor:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

