//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DPSAFNetworkManager : NSObject
{
    NSObject *_afnManager;
}

+ (id)createManager;
@property(retain, nonatomic) NSObject *afnManager; // @synthesize afnManager=_afnManager;
- (void).cxx_destruct;
- (void)setTimeOut:(float)arg1;
- (void)POST:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)GET:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)init;

@end

