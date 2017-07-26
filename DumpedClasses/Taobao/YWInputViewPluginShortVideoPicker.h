//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YWInputViewPluginProtocol.h"

@class NSString, UIImage, UIView, UIView<IYWMessageInputView>;

@interface YWInputViewPluginShortVideoPicker : NSObject <YWInputViewPluginProtocol>
{
    _Bool _disabled;
    UIView<IYWMessageInputView> *inputViewRef;
    NSString *_pluginName;
    UIImage *_pluginIconImage;
    NSString *_pluginIconImageURL;
    unsigned long long pluginType;
    UIView *pluginContentView;
    id <YWInputViewPluginDelegate> _delegate;
    unsigned long long _pluginPosition;
    CDUnknownBlockType _callback;
}

+ (_Bool)isNeedFrameworkLinked;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) unsigned long long pluginPosition; // @synthesize pluginPosition=_pluginPosition;
@property(nonatomic) __weak id <YWInputViewPluginDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView *pluginContentView; // @synthesize pluginContentView;
@property(retain, nonatomic) NSString *pluginIconImageURL; // @synthesize pluginIconImageURL=_pluginIconImageURL;
@property(retain, nonatomic) UIImage *pluginIconImage; // @synthesize pluginIconImage=_pluginIconImage;
@property(copy, nonatomic) NSString *pluginName; // @synthesize pluginName=_pluginName;
@property(nonatomic) __weak UIView<IYWMessageInputView> *inputViewRef; // @synthesize inputViewRef;
- (void).cxx_destruct;
- (id)initWithPluginName:(id)arg1 pluginIconImage:(id)arg2;
- (_Bool)shouldShowRedPoint;
- (id)controllerRef;
- (void)showShortVideoPicker;
- (void)pluginDidClicked;
@property(readonly, nonatomic) unsigned long long pluginType; // @synthesize pluginType;
- (id)initWithPickerOverBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
