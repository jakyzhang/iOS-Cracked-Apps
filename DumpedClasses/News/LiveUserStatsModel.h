//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing.h"

@class NSNumber, NSString;

@interface LiveUserStatsModel : MTLModel <MTLJSONSerializing>
{
    NSNumber *_userID;
    NSNumber *_itemCount;
    NSNumber *_recordCount;
    NSNumber *_followingCount;
    NSNumber *_followerCount;
    NSNumber *_diamondCount;
    NSNumber *_dailyFanTicketCount;
    NSNumber *_dailyIncome;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) NSNumber *dailyIncome; // @synthesize dailyIncome=_dailyIncome;
@property(readonly, nonatomic) NSNumber *dailyFanTicketCount; // @synthesize dailyFanTicketCount=_dailyFanTicketCount;
@property(readonly, nonatomic) NSNumber *diamondCount; // @synthesize diamondCount=_diamondCount;
@property(readonly, nonatomic) NSNumber *followerCount; // @synthesize followerCount=_followerCount;
@property(readonly, nonatomic) NSNumber *followingCount; // @synthesize followingCount=_followingCount;
@property(readonly, nonatomic) NSNumber *recordCount; // @synthesize recordCount=_recordCount;
@property(readonly, nonatomic) NSNumber *itemCount; // @synthesize itemCount=_itemCount;
@property(readonly, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

