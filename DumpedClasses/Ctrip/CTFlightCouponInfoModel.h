//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PriceType;

@interface CTFlightCouponInfoModel : NSObject
{
    _Bool _isUsedCoupon;
    _Bool _isCanUseCoupon;
    PriceType *_usedCouponBalance;
    PriceType *_couponBalance;
}

@property(retain, nonatomic) PriceType *couponBalance; // @synthesize couponBalance=_couponBalance;
@property(nonatomic) _Bool isCanUseCoupon; // @synthesize isCanUseCoupon=_isCanUseCoupon;
@property(retain, nonatomic) PriceType *usedCouponBalance; // @synthesize usedCouponBalance=_usedCouponBalance;
@property(nonatomic) _Bool isUsedCoupon; // @synthesize isUsedCoupon=_isUsedCoupon;
- (void).cxx_destruct;
- (id)init;

@end

