//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CTHotBUInfoModel : NSObject
{
    int _cityID;
    NSString *_bu;
    NSString *_buCNName;
    NSString *_buIcon;
    NSString *_imageUrl;
    NSString *_travelerCount;
    NSString *_url;
    NSString *_cityName;
}

@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(nonatomic) int cityID; // @synthesize cityID=_cityID;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *travelerCount; // @synthesize travelerCount=_travelerCount;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *buIcon; // @synthesize buIcon=_buIcon;
@property(copy, nonatomic) NSString *buCNName; // @synthesize buCNName=_buCNName;
@property(copy, nonatomic) NSString *bu; // @synthesize bu=_bu;
- (void).cxx_destruct;

@end

