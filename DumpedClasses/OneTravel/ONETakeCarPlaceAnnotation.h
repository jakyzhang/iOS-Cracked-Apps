//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ONESBasePointAnnotation.h"

@class DiDiPOIEntityModel, NSString;

@interface ONETakeCarPlaceAnnotation : ONESBasePointAnnotation
{
    _Bool _showMarker;
    NSString *_displayName;
    NSString *_address;
    DiDiPOIEntityModel *_entityModel;
    long long _style;
    struct CGSize _markerSize;
}

@property(nonatomic) _Bool showMarker; // @synthesize showMarker=_showMarker;
@property(nonatomic) struct CGSize markerSize; // @synthesize markerSize=_markerSize;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) DiDiPOIEntityModel *entityModel; // @synthesize entityModel=_entityModel;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

