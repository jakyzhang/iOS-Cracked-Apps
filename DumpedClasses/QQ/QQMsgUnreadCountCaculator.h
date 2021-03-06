//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IQQMessageProcessor.h"

@class NSMutableDictionary;

@interface QQMsgUnreadCountCaculator : NSObject <IQQMessageProcessor>
{
    NSMutableDictionary *tmpCacheReadInfoDic;
}

+ (int)caculateC2CUnreadCountByUin:(id)arg1 lastReadTime:(long long)arg2;
+ (id)processMsgEncapsulation:(id)arg1;
+ (id)shareInstance;
@property(retain) NSMutableDictionary *tmpCacheReadInfoDic; // @synthesize tmpCacheReadInfoDic;
- (id)getCacheReadInfo;
- (void)deleteCacheReadInfo;
- (void)cacheReadInfo:(id)arg1;
- (id)init;

@end

