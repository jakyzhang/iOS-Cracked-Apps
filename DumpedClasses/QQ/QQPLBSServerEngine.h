//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class NSMutableArray, NSNumber, NSString, QQLBSCache, QQLocationManager;

@interface QQPLBSServerEngine : NSObject <CLLocationManagerDelegate>
{
    QQLocationManager *_locationManager;
    Class _className;
    NSNumber *_num;
    unsigned long long _lbsType;
    unsigned long long _lbsStartTime;
    int _lbsRetryTimes;
    unsigned long long _lbsStartTimeBySystem;
    QQLBSCache *_qqlbsCache;
    NSMutableArray *_locaManagerList;
    id <QQLBSServerEngineCacheDelegate> _delegate;
}

+ (id)instance;
@property(nonatomic) __weak id <QQLBSServerEngineCacheDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *locaManagerList; // @synthesize locaManagerList=_locaManagerList;
@property(retain, nonatomic) QQLBSCache *qqlbsCache; // @synthesize qqlbsCache=_qqlbsCache;
- (void).cxx_destruct;
- (void)endTimeOutEvent;
- (void)startTimeOutEvent;
- (void)fireTimeOut;
- (void)fireTimeOutLocationIsZero;
- (void)fireTimeOutLocationIsUnknown:(id)arg1;
- (void)sendFailedRequest:(id)arg1 isClearDelegate:(_Bool)arg2;
- (void)sendLbsRequest:(id)arg1 isCacheLocation:(_Bool)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)startUpdateForiPhoneSimulator;
- (void)stopOnlyInMainThreadFunction;
- (void)stopInMainThreadFunction;
- (void)startInMainThreadFunction;
- (void)startUpdateGPSLocationPublic:(id)arg1;
- (void)startBackGroundUpdateGPSLocationForCacheTime:(long long)arg1 withClass:(Class)arg2 number:(id)arg3;
- (void)startBackGroundUpdateGPSLocation:(Class)arg1 number:(id)arg2;
- (void)startForeUpdateGPSLocationForCacheTime:(long long)arg1 withClass:(Class)arg2 number:(id)arg3;
- (void)startForeUpdateGPSLocation:(Class)arg1 number:(id)arg2;
- (id)getLocationManager;
- (void)dealloc;
- (void)appEnterBackground;
- (id)initWithType:(unsigned long long)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

