//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WopcAuthDialogAdapter, WopcCacheAdapter, WopcDialogAdapter, WopcLoginAdapter, WopcNativeApiAdapter, WopcNavAdapter, WopcNetworkAdapter, WopcUtilsAdapter;

@interface WopcAdapterManager : NSObject
{
    WopcAuthDialogAdapter *_authDialog;
    WopcCacheAdapter *_cache;
    WopcLoginAdapter *_login;
    WopcNetworkAdapter *_network;
    WopcNavAdapter *_nav;
    WopcNativeApiAdapter *_nativeApi;
    WopcDialogAdapter *_dialog;
    WopcUtilsAdapter *_utils;
}

+ (id)sharedInstance;
@property(retain, nonatomic, setter=setUtilsAdapter:) WopcUtilsAdapter *utils; // @synthesize utils=_utils;
@property(retain, nonatomic, setter=setDialog:) WopcDialogAdapter *dialog; // @synthesize dialog=_dialog;
@property(retain, nonatomic, setter=setNativeApiAdapter:) WopcNativeApiAdapter *nativeApi; // @synthesize nativeApi=_nativeApi;
@property(retain, nonatomic, setter=setNavAdapter:) WopcNavAdapter *nav; // @synthesize nav=_nav;
@property(retain, nonatomic, setter=setNetworkAdapter:) WopcNetworkAdapter *network; // @synthesize network=_network;
@property(retain, nonatomic, setter=setLoginAdapter:) WopcLoginAdapter *login; // @synthesize login=_login;
@property(retain, nonatomic, setter=setCacheAdapter:) WopcCacheAdapter *cache; // @synthesize cache=_cache;
@property(retain, nonatomic, setter=setAuthDialog:) WopcAuthDialogAdapter *authDialog; // @synthesize authDialog=_authDialog;
- (void).cxx_destruct;
- (void)dealloc;

@end

