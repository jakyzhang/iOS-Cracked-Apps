//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBTakeoutOrderDetailRiderModel : NSObject
{
    NSString *_orderId;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_storeName;
    NSString *_storeLatitude;
    NSString *_storeLongitude;
    NSString *_tbMainOrderId;
}

@property(copy, nonatomic) NSString *tbMainOrderId; // @synthesize tbMainOrderId=_tbMainOrderId;
@property(copy, nonatomic) NSString *storeLongitude; // @synthesize storeLongitude=_storeLongitude;
@property(copy, nonatomic) NSString *storeLatitude; // @synthesize storeLatitude=_storeLatitude;
@property(copy, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;

@end

