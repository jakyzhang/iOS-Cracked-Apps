//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, QQSelfPlayerOpenGLAdapterView;

@interface QQSelfPlayerVideoView : UIView
{
    QQSelfPlayerOpenGLAdapterView *_openGLAdapterView;
    NSString *_videoGravity;
}

@property(copy) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resetOpenGLAdapterView;
- (void)initOpenGLAdapterView;
- (id)getOpenGLAdapterView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

