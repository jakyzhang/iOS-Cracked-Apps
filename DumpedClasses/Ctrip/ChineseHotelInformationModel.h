//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface ChineseHotelInformationModel : CTBusinessBean
{
    int _hotelType;
    NSString *_hotelTitle;
    NSString *_hotelDescription;
    NSMutableArray *_hotelFacilityList;
}

@property(retain, nonatomic) NSMutableArray *hotelFacilityList; // @synthesize hotelFacilityList=_hotelFacilityList;
@property(copy, nonatomic) NSString *hotelDescription; // @synthesize hotelDescription=_hotelDescription;
@property(copy, nonatomic) NSString *hotelTitle; // @synthesize hotelTitle=_hotelTitle;
@property(nonatomic) int hotelType; // @synthesize hotelType=_hotelType;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

