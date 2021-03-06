//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface QLWebViewConfig : NSObject
{
    _Bool _isSafeMode;
    _Bool _openURLInWhiteList;
    NSURL *_openURL;
}

@property(nonatomic) _Bool openURLInWhiteList; // @synthesize openURLInWhiteList=_openURLInWhiteList;
@property(nonatomic) _Bool isSafeMode; // @synthesize isSafeMode=_isSafeMode;
@property(retain, nonatomic) NSURL *openURL; // @synthesize openURL=_openURL;
- (void).cxx_destruct;
- (_Bool)wkWebViewEnabled:(id)arg1 openURL:(id)arg2;
- (_Bool)downloadEnabled:(id)arg1;
- (_Bool)needShowDomainInfo:(id)arg1;
- (_Bool)bridgeEnabled:(id)arg1;
- (id)init;

@end

