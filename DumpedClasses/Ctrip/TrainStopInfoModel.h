//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface TrainStopInfoModel : CTBusinessBean
{
    int stationSequence;
    NSString *stationName;
    NSString *departTime;
    NSString *arriveTime;
    NSString *stopTimes;
    int distanceFromStart;
}

@property(nonatomic) int distanceFromStart; // @synthesize distanceFromStart;
@property(copy, nonatomic) NSString *stopTimes; // @synthesize stopTimes;
@property(copy, nonatomic) NSString *arriveTime; // @synthesize arriveTime;
@property(copy, nonatomic) NSString *departTime; // @synthesize departTime;
@property(copy, nonatomic) NSString *stationName; // @synthesize stationName;
@property(nonatomic) int stationSequence; // @synthesize stationSequence;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

