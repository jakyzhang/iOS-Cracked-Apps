//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMCartPopupBaseCell.h"

@class NVMCalculatingFood;

@interface NVMCartPopupFoodCell : NVMCartPopupBaseCell
{
    NVMCalculatingFood *_food;
}

+ (double)cellHeightWithFood:(id)arg1;
@property(retain, nonatomic) NVMCalculatingFood *food; // @synthesize food=_food;
- (void).cxx_destruct;
- (void)addTracksForToolBar;
- (id)bookingFood;
- (void)setRestaurantDataSource:(id)arg1;
- (void)updatePriceLable;
- (void)updatePriceIfNeed:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

