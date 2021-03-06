//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NMHttpRequestDelegate.h"

@class NMPlayViewEggListRequest, NSMutableDictionary, NSString;

@interface NMPlayViewEggManager : NSObject <NMHttpRequestDelegate>
{
    NMPlayViewEggListRequest *_egglistRequest;
    double _lastFetchedTime;
    NSMutableDictionary *_eggs;
}

+ (void)prefetchImagesWithSongId:(id)arg1;
+ (id)eggForSongId:(id)arg1;
+ (id)sharedManager;
+ (void)load;
- (void).cxx_destruct;
- (void)prefetchImagesWithSongId:(id)arg1;
- (id)eggForSongId:(id)arg1;
- (void)prefetchImageWithEgg:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)fetchEggList;
- (void)fetchEggListIfNeeded;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

