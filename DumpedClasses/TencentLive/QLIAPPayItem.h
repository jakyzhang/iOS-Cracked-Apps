//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QLIAPPayItem : NSObject
{
    _Bool _forceH5;
    _Bool _ap;
    _Bool _serialPay;
    int _localProductType;
    NSString *_payId;
    long long _month;
    long long _day;
    long long _payStyle;
    NSString *_coverID;
    NSString *_videoID;
    NSString *_PID;
    NSString *_h5PayAPPID;
    NSString *_aidString;
    double _price;
    NSString *_payItem;
    NSString *_zoneID;
    NSString *_offerID;
    NSString *_backUrl;
}

@property(copy, nonatomic) NSString *backUrl; // @synthesize backUrl=_backUrl;
@property(nonatomic) _Bool serialPay; // @synthesize serialPay=_serialPay;
@property(copy, nonatomic) NSString *offerID; // @synthesize offerID=_offerID;
@property(copy, nonatomic) NSString *zoneID; // @synthesize zoneID=_zoneID;
@property(copy, nonatomic) NSString *payItem; // @synthesize payItem=_payItem;
@property(nonatomic) double price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *aidString; // @synthesize aidString=_aidString;
@property(nonatomic) _Bool ap; // @synthesize ap=_ap;
@property(nonatomic) _Bool forceH5; // @synthesize forceH5=_forceH5;
@property(copy, nonatomic) NSString *h5PayAPPID; // @synthesize h5PayAPPID=_h5PayAPPID;
@property(copy, nonatomic) NSString *PID; // @synthesize PID=_PID;
@property(copy, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(copy, nonatomic) NSString *coverID; // @synthesize coverID=_coverID;
@property(nonatomic) long long payStyle; // @synthesize payStyle=_payStyle;
@property(nonatomic) long long day; // @synthesize day=_day;
@property(nonatomic) long long month; // @synthesize month=_month;
@property(copy, nonatomic) NSString *payId; // @synthesize payId=_payId;
@property(nonatomic) int localProductType; // @synthesize localProductType=_localProductType;
- (void).cxx_destruct;
- (id)description;

@end

