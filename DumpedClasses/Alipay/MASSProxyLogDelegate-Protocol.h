//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol MASSProxyLogDelegate <NSObject>
- (void)writeLocalLogInfo:(NSString *)arg1 params:(NSArray *)arg2;
- (void)logwithSubType:(NSString *)arg1 content:(NSArray *)arg2;
@end

