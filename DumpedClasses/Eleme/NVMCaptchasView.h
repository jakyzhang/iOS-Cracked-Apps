//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSURL, NSURLSessionDataTask, UIActivityIndicatorView, UIButton, UIImageView;

@interface NVMCaptchasView : UIView
{
    _Bool _loading;
    UIImageView *_imageView;
    UIButton *_refreshButton;
    NSURL *_captchaImageURL;
    CDUnknownBlockType _refreshCaptchaAction;
    UIActivityIndicatorView *_loadingView;
    NSURLSessionDataTask *_dataTask;
}

@property(retain, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(copy, nonatomic) CDUnknownBlockType refreshCaptchaAction; // @synthesize refreshCaptchaAction=_refreshCaptchaAction;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSURL *captchaImageURL; // @synthesize captchaImageURL=_captchaImageURL;
@property(retain, nonatomic) UIButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)fetchImageWithURL:(id)arg1;
- (void)refreshCaptchas;
- (struct CGSize)intrinsicContentSize;
- (void)loadRefreshButton;
- (void)loadImageView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

