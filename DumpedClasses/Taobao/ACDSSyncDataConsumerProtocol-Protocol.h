//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACDSUpdatelogItem, NSString;

@protocol ACDSSyncDataConsumerProtocol <NSObject>
- (void)consumeSyncData:(ACDSUpdatelogItem *)arg1 for:(NSString *)arg2 callback:(void (^)(NSError *))arg3;
@end

