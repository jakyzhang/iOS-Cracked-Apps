//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSSDKJsonObject.h"

@class NSString;

@interface MSSDKMtopContext : MSSDKJsonObject
{
    int _osType;
    long long _timestamp;
    NSString *_osVersion;
    NSString *_umidToken;
    NSString *_clientVersion;
    NSString *_sdkVersion;
    NSString *_alipayId;
    NSString *_alipayAccount;
    NSString *_alipayVersion;
}

+ (id)defaultContext;
@property(retain, nonatomic) NSString *alipayVersion; // @synthesize alipayVersion=_alipayVersion;
@property(retain, nonatomic) NSString *alipayAccount; // @synthesize alipayAccount=_alipayAccount;
@property(retain, nonatomic) NSString *alipayId; // @synthesize alipayId=_alipayId;
@property(retain, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *umidToken; // @synthesize umidToken=_umidToken;
@property(retain, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(nonatomic) int osType; // @synthesize osType=_osType;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)toJSONObject;

@end

