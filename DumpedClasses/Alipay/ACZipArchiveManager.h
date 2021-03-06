//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface ACZipArchiveManager : NSObject
{
    NSOperationQueue *_unzipQueue;
    NSMutableArray *_unzipApps;
    NSObject<OS_dispatch_queue> *_dataQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue; // @synthesize dataQueue=_dataQueue;
@property(retain, nonatomic) NSMutableArray *unzipApps; // @synthesize unzipApps=_unzipApps;
@property(retain, nonatomic) NSOperationQueue *unzipQueue; // @synthesize unzipQueue=_unzipQueue;
- (void).cxx_destruct;
- (void)remoteForUnzipApp:(id)arg1 success:(_Bool)arg2;
- (void)unzipApp:(id)arg1 process:(CDUnknownBlockType)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (_Bool)isUnzippingApp:(id)arg1;
- (id)init;

@end

