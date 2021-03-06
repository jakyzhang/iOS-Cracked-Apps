//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray<FMHouseHomeMapEntryItemDO>, NSString;

@interface FMHouseHomeMapEntryCardDO : NSObject
{
    NSString *_title;
    NSString *_subTitle;
    NSString *_searchDistance;
    NSString *_houseCount;
    NSArray<FMHouseHomeMapEntryItemDO> *_houseList;
}

@property(retain, nonatomic) NSArray<FMHouseHomeMapEntryItemDO> *houseList; // @synthesize houseList=_houseList;
@property(copy, nonatomic) NSString *houseCount; // @synthesize houseCount=_houseCount;
@property(copy, nonatomic) NSString *searchDistance; // @synthesize searchDistance=_searchDistance;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)filterByValidLocation;
- (id)toMapViewComponent;

@end

