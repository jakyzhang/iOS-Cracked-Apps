//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NVMCartDataDelegate.h"

@class NSString;

@interface NVMCartServiceHandler : NSObject <NVMCartDataDelegate>
{
    id <NVMCartContextDataSource> _restaurant;
}

+ (id)sharedHandler;
@property(retain, nonatomic) id <NVMCartContextDataSource> restaurant; // @synthesize restaurant=_restaurant;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isWantToBeVIP;
- (id)flashSellFoodsForRestaurant:(id)arg1;
- (_Bool)shouldShowNewRetailRedNote;
- (id)restaurantIDsInCart;
- (id)cartPromotionTimesHint;
- (id)calculatedFoodsInCartForRestaurantID:(id)arg1;
- (double)boxesFeeOfFoodsInCartForRestaurant:(id)arg1;
- (id)foodsToCheckoutForRestaurant:(id)arg1;
- (void)batchedUpdateForRestaurant:(id)arg1 withAction:(CDUnknownBlockType)arg2;
- (unsigned long long)quantityOfFood:(id)arg1 skuID:(id)arg2 attributes:(id)arg3 inRestaurant:(id)arg4;
- (id)foodWithQuantitysInCartForRestaurant:(id)arg1;
- (void)syncFoodsIncartWithCartSpecFood:(id)arg1 restaurantID:(id)arg2 foodChangeHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)quantityOfFoodInRestaurant:(id)arg1;
- (void)decreaseFood:(id)arg1 skuID:(id)arg2 attributes:(id)arg3 inRestaurant:(id)arg4 decrement:(unsigned long long)arg5;
- (void)decreaseFood:(id)arg1 skuID:(id)arg2 attributes:(id)arg3 inRestaurant:(id)arg4;
- (void)clearMultiFoods:(id)arg1 forRestaurant:(id)arg2;
- (void)clearFoodsInCartForRestaurant:(id)arg1;
- (void)clearFood:(id)arg1 skuID:(id)arg2 inRestaurant:(id)arg3;
- (void)addFood:(id)arg1 withIncrement:(long long)arg2;
- (id)currentCartCalculatedData;
- (void)setCartDataSubscriber:(id)arg1;
- (void)updateCartContext:(id)arg1;
- (id)currentCartContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

