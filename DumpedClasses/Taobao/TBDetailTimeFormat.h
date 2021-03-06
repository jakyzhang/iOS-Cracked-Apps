//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBDetailTimeFormat : NSObject
{
}

+ (long long)dateStringToTimestamp:(id)arg1;
+ (long long)naturalDayInterval:(id)arg1;
+ (double)diffTimeInterval:(id)arg1;
+ (id)getDateFromTimestamp:(long long)arg1;
+ (id)serverDate;
+ (id)dateByString:(id)arg1;
+ (long long)secondWithStartTime:(id)arg1;
+ (id)getRemainingTime:(long long)arg1;
+ (id)getRemainingTimeStr:(id)arg1;
+ (id)getDateFromString:(id)arg1;
+ (long long)dayIntervalSinceDate:(id)arg1;
+ (id)dateAfterDate:(id)arg1 day:(long long)arg2 second:(long long)arg3;
+ (_Bool)isFutureDay:(id)arg1;
+ (long long)dayInterval:(id)arg1;
+ (double)timeIntervalWithDate:(id)arg1 isNeedReduceTo3Day:(_Bool)arg2;
+ (id)stringOfCalendarDateFrom:(long long)arg1;
+ (id)transferTimeToFormat:(id)arg1;
+ (_Bool)isIntervalMoreThan:(long long)arg1 withEndTime:(id)arg2;
+ (long long)timeInterval:(id)arg1;
+ (long long)getTimeIntervalFromEndTime:(long long)arg1;
+ (long long)getTimeIntervalFromTime:(id)arg1;

@end

