//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface NMLocation : NSObject
{
    NSString *_province;
    NSString *_city;
    NSNumber *_provinceId;
    NSNumber *_cityId;
}

@property(retain, nonatomic) NSNumber *cityId; // @synthesize cityId=_cityId;
@property(retain, nonatomic) NSNumber *provinceId; // @synthesize provinceId=_provinceId;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
- (void).cxx_destruct;
- (id)description;

@end
