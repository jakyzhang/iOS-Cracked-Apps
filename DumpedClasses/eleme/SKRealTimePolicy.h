//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKTransportPolicy.h"

@class NSConditionLock, NSMutableOrderedSet, NSString;

@interface SKRealTimePolicy : NSObject <SKTransportPolicy>
{
    _Bool _stopFlag;
    double _validPeriod;
    NSMutableOrderedSet *_logQueue;
    NSConditionLock *_lock;
}

@property(nonatomic) _Bool stopFlag; // @synthesize stopFlag=_stopFlag;
@property(retain, nonatomic) NSConditionLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableOrderedSet *logQueue; // @synthesize logQueue=_logQueue;
@property(nonatomic) double validPeriod; // @synthesize validPeriod=_validPeriod;
- (void).cxx_destruct;
- (CDUnknownBlockType)workerTask;
- (void)recursiveTask;
- (_Bool)isValidLog:(id)arg1;
- (id)logsShouldSending;
- (void)handleApmLog:(id)arg1 withLogType:(unsigned long long)arg2;
- (void)stop;
- (void)start;
- (id)initWithLogType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
