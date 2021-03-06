//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface TBSDKUserUnitConfigureManager : NSObject
{
    NSMutableDictionary *_userUnitConfigureDict;
    struct _opaque_pthread_rwlock_t _rwlock;
}

+ (id)shareInstance;
@property(nonatomic) struct _opaque_pthread_rwlock_t rwlock; // @synthesize rwlock=_rwlock;
@property(retain, nonatomic) NSMutableDictionary *userUnitConfigureDict; // @synthesize userUnitConfigureDict=_userUnitConfigureDict;
- (void).cxx_destruct;
- (void)saveUserUnitToDesk:(id)arg1;
- (void)loadUnitAPIListInfoFromDesk;
- (void)paserJSONTolUserUnitConfigure:(id)arg1 isSave:(_Bool)arg2;
- (void)setUserUnitWithUserID:(id)arg1 unitType:(long long)arg2 prefix:(id)arg3;
- (id)getUserUnitConfigure:(id)arg1;
- (void)dealloc;
- (id)init;

@end

