//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@interface GMSCameraPosition : NSObject <NSCopying, NSMutableCopying>
{
    CDStruct_2c43369c _target;
    float _zoom;
    double _bearing;
    double _viewingAngle;
}

+ (float)zoomAtCoordinate:(CDStruct_c3b9c2ee)arg1 forMeters:(double)arg2 perPoints:(double)arg3;
+ (id)cameraWithLatitude:(double)arg1 longitude:(double)arg2 zoom:(float)arg3 bearing:(double)arg4 viewingAngle:(double)arg5;
+ (id)cameraWithTarget:(CDStruct_c3b9c2ee)arg1 zoom:(float)arg2 bearing:(double)arg3 viewingAngle:(double)arg4;
+ (id)cameraWithLatitude:(double)arg1 longitude:(double)arg2 zoom:(float)arg3;
+ (id)cameraWithTarget:(CDStruct_c3b9c2ee)arg1 zoom:(float)arg2;
@property(readonly, nonatomic) double viewingAngle; // @synthesize viewingAngle=_viewingAngle;
@property(readonly, nonatomic) double bearing; // @synthesize bearing=_bearing;
@property(readonly, nonatomic) float zoom; // @synthesize zoom=_zoom;
@property(readonly, nonatomic) CDStruct_c3b9c2ee target; // @synthesize target=_target;
- (struct CameraPosition)cameraPosition;
- (id)initWithCameraPosition:(const struct CameraPosition *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTarget:(CDStruct_c3b9c2ee)arg1 zoom:(float)arg2 bearing:(double)arg3 viewingAngle:(double)arg4;
- (id)init;

@end

