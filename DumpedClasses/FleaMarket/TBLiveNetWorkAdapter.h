//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBLiveNetworkProtocol.h"

@class NSDictionary, NSString;

@interface TBLiveNetWorkAdapter : NSObject <TBLiveNetworkProtocol>
{
    _Bool _isDiffDetailInfo;
    NSDictionary *_extParam;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *extParam; // @synthesize extParam=_extParam;
@property(nonatomic) _Bool isDiffDetailInfo; // @synthesize isDiffDetailInfo=_isDiffDetailInfo;
- (void).cxx_destruct;
- (void)request:(id)arg1 withParam:(id)arg2 withReqHeader:(id)arg3 onSuccess:(CDUnknownBlockType)arg4 onError:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
