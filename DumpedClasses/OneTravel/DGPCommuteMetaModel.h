//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface DGPCommuteMetaModel : JSONModel
{
    float _lat;
    float _lng;
    NSString *_title;
    NSString *_city;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) float lng; // @synthesize lng=_lng;
@property(nonatomic) float lat; // @synthesize lat=_lat;
- (void).cxx_destruct;

@end
