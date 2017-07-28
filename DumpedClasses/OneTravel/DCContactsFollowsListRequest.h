//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DBBaseRequest.h"

@class NSMutableSet, NSNumber, NSString;

@interface DCContactsFollowsListRequest : DBBaseRequest
{
    _Bool _hasMore;
    _Bool _timeoutRetry;
    _Bool _timeoutRetryMaxCount;
    long long _count;
    NSString *_dataFilter;
    NSNumber *_timeStamp;
    long long _start;
    NSString *_lastuid;
    NSMutableSet *_uidsSet;
    NSString *_lastUserFollowTime;
}

+ (id)newWithLastReqeust:(id)arg1;
@property(nonatomic) _Bool timeoutRetryMaxCount; // @synthesize timeoutRetryMaxCount=_timeoutRetryMaxCount;
@property(copy, nonatomic) NSString *lastUserFollowTime; // @synthesize lastUserFollowTime=_lastUserFollowTime;
@property(retain, nonatomic) NSMutableSet *uidsSet; // @synthesize uidsSet=_uidsSet;
@property(copy, nonatomic) NSString *lastuid; // @synthesize lastuid=_lastuid;
@property(nonatomic) long long start; // @synthesize start=_start;
@property(nonatomic) _Bool timeoutRetry; // @synthesize timeoutRetry=_timeoutRetry;
@property(copy, nonatomic) NSNumber *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *dataFilter; // @synthesize dataFilter=_dataFilter;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (void)requestWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)reset;
- (id)responseModelWithData:(id)arg1;
- (id)pathName;
- (id)init;

@end
