//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface FlightNearAirportSearchResponse : CTBusinessBean
{
    int result;
    NSString *cityCode;
    NSString *cityName;
    int recordCount;
    long long flag;
    NSMutableArray *airportInfoList;
    long long poiid;
}

@property(nonatomic) long long poiid; // @synthesize poiid;
@property(retain, nonatomic) NSMutableArray *airportInfoList; // @synthesize airportInfoList;
@property(nonatomic) long long flag; // @synthesize flag;
@property(nonatomic) int recordCount; // @synthesize recordCount;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName;
@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode;
@property(nonatomic) int result; // @synthesize result;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

