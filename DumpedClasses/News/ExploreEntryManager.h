//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ExploreFetchEntryManager, SSHttpOperation, SSPGCActionManager;

@interface ExploreEntryManager : NSObject
{
    SSHttpOperation *_getEntryGroupsOperation;
    SSPGCActionManager *_actionManager;
    ExploreFetchEntryManager *_fetchEntryManager;
}

+ (id)formatSubscribedCountString:(id)arg1;
+ (_Bool)isCurrentVersionSupportChannelModel:(long long)arg1;
+ (void)initialize;
+ (id)sharedManager;
@property(retain, nonatomic) ExploreFetchEntryManager *fetchEntryManager; // @synthesize fetchEntryManager=_fetchEntryManager;
@property(retain, nonatomic) SSPGCActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(retain, nonatomic) SSHttpOperation *getEntryGroupsOperation; // @synthesize getEntryGroupsOperation=_getEntryGroupsOperation;
- (void).cxx_destruct;
- (void)clearAll;
- (_Bool)isSubscribedForMediaID:(id)arg1;
- (id)fetchEntyWithMediaID:(id)arg1;
- (void)fetchEntryFromMediaID:(id)arg1 notifySubscribedStatus:(_Bool)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)clearBadgeCount:(id)arg1;
- (void)clearNewSubcribedTip:(id)arg1;
- (void)notifyFetchEntryError:(id)arg1 fromRemote:(_Bool)arg2;
- (void)getChannelListOperation:(id)arg1 finishedResult:(id)arg2 error:(id)arg3 userInfo:(id)arg4;
- (id)insertEntryByDicts:(id)arg1 save:(_Bool)arg2;
- (id)entryForEntryIDs:(id)arg1;
- (void)exploreEntry:(id)arg1 changeToSubscribed:(_Bool)arg2 notify:(_Bool)arg3 notifyFinishBlock:(CDUnknownBlockType)arg4;
- (void)unsubscribeExploreEntry:(id)arg1 notify:(_Bool)arg2 notifyFinishBlock:(CDUnknownBlockType)arg3;
- (void)subscribeExploreEntry:(id)arg1 notify:(_Bool)arg2 notifyFinishBlock:(CDUnknownBlockType)arg3;
- (void)updateEntryWithID:(id)arg1 like:(_Bool)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)notifyEntry:(id)arg1 subscribe:(_Bool)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (id)insertExploreEntry:(id)arg1 save:(_Bool)arg2;
- (id)getEntryGroups;
- (void)startGetEntryGroups;
- (void)dealloc;

@end

