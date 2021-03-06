//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSRecursiveLock;

@interface ARUPIPv6Helper : NSObject
{
    int _v6_prefix_resolve_status;
    int _ip_type;
    NSRecursiveLock *_v6_prefix_lock;
    unsigned char _v6_prefix_length;
    const char *_v6_prefix;
}

+ (_Bool)isPrefix:(const char *)arg1 withPrefixLength:(int)arg2 IP:(const char *)arg3 withIPLength:(int)arg4;
+ (_Bool)isIPv4address:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (unsigned char)resolveV6Prefix:(char *)arg1;
- (void)resetTnetIpMode;
- (void)reset;
- (id)convertIPv4toIPv6:(id)arg1;
- (_Bool)isIPv6only;
- (id)init;

@end

