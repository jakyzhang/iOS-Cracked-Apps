//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTLiveChatMsgBaseCell.h"

@class CTLivechatIndicatorView, UILabel;

@interface CTLivechatQueueLoadingCell : CTLiveChatMsgBaseCell
{
    UILabel *_tipLab;
    CTLivechatIndicatorView *_loadingImg;
}

@property(retain, nonatomic) CTLivechatIndicatorView *loadingImg; // @synthesize loadingImg=_loadingImg;
@property(retain, nonatomic) UILabel *tipLab; // @synthesize tipLab=_tipLab;
- (void).cxx_destruct;
- (struct CGRect)getContentRect;
- (void)drawCell:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

