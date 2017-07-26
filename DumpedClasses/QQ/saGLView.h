//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class CADisplayLink, CAEAGLLayer, EAGLContext, NSString;

@interface saGLView : UIView <UIGestureRecognizerDelegate>
{
    CAEAGLLayer *_glLayer;
    EAGLContext *_glContext;
    unsigned int _colorRenderBuffer;
    unsigned int _frameBuffer;
    CADisplayLink *_displayLink;
    struct sa_director *_director;
    _Bool _isBackground;
    _Bool _enterForgroundDelaying;
    NSString *_hittestAccessory;
    _Bool _isAIO;
    _Bool _isPlayGame;
    _Bool _isSpriteAI;
    _Bool _paused;
    _Bool _initialized;
    long long _frameInterval;
    long long _framesPerSecond;
    id <saGLViewDelegate> _delegate;
}

+ (struct CGPoint)getSingleSpritePosition;
+ (struct CGPoint)getFriendSpritePosition;
+ (struct CGPoint)getMySpritePosition;
+ (double)getDistanceWithScreenScale:(double)arg1;
+ (double)getDistance;
+ (double)getScreenScaleWithGlViewScale:(double)arg1;
+ (double)getScaleWithScreenScale:(double)arg1;
+ (double)getScale;
+ (double)getTimeScale;
+ (Class)layerClass;
@property(retain, nonatomic) id <saGLViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long framesPerSecond; // @synthesize framesPerSecond=_framesPerSecond;
@property(nonatomic) long long frameInterval; // @synthesize frameInterval=_frameInterval;
@property(nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) _Bool isSpriteAI; // @synthesize isSpriteAI=_isSpriteAI;
@property(nonatomic) _Bool isPlayGame; // @synthesize isPlayGame=_isPlayGame;
@property(nonatomic) _Bool isAIO; // @synthesize isAIO=_isAIO;
@property(nonatomic) struct sa_director *director; // @synthesize director=_director;
- (id)checkIsClickWithIdx:(int)arg1 saPoint:(struct sa_point)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onTouchView:(id)arg1;
- (void)onLongTouchView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)canInitOpenGL;
- (void)dealloc;
- (void)dispose;
- (void)execScriptString:(id)arg1 json:(id)arg2 jsonData:(id)arg3 atlas:(id)arg4 atlasData:(id)arg5 png:(id)arg6 pngData:(id)arg7;
- (void)execScriptString:(id)arg1;
- (void)execScriptFile:(id)arg1;
- (void)clearOpenGLContext;
- (_Bool)checkOpenGLContext;
- (void)onFrame:(id)arg1;
- (void)stopAtFrameWithDeltaTime:(double)arg1;
- (void)destroyGL;
- (void)setFrame:(struct CGRect)arg1;
- (void)setupDirector;
- (void)setupRenderBuffer;
- (void)setupDisplayLink;
- (void)setupContext;
- (void)setupLayer;
- (void)layoutSubviews;
- (void)delayEnableRendering;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActiveNotification:(id)arg1;
- (void)initialize;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
