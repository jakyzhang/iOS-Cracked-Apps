//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLPreCacheMediaPlayPrepareDelegate.h"

@class NSMutableDictionary, NSString;

@interface QLPreCacheMediaManager : NSObject <QLPreCacheMediaPlayPrepareDelegate>
{
    NSMutableDictionary *_mediaPrepareList;
}

+ (_Bool)cacheVideoUrlEnable;
+ (id)createCacheKeyWithPid:(id)arg1 streamId:(id)arg2 format:(id)arg3;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *mediaPrepareList; // @synthesize mediaPrepareList=_mediaPrepareList;
- (void).cxx_destruct;
- (void)didRequestFailedWithPreCachePrepare:(id)arg1 withkey:(id)arg2 error:(id)arg3;
- (void)didRequestFinishWithPreCachePrepare:(id)arg1 cacheData:(id)arg2 withkey:(id)arg3;
- (id)readFromCacheWithKey:(id)arg1;
- (void)cleanAllCache;
- (void)saveCacheInfo:(id)arg1 withKey:(id)arg2;
- (void)revemoveCacheWithKey:(id)arg1;
- (void)startPreCacheMediaWithPid:(id)arg1 streamId:(id)arg2 payState:(long long)arg3 format:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
