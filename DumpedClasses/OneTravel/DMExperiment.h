//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDictionary, NSString;

@interface DMExperiment : NSObject <NSCopying, NSCoding>
{
    _Bool _enabled;
    NSString *_name;
    NSString *_testKey;
    NSDictionary *_testInventory;
    long long _logRate;
}

@property(nonatomic) long long logRate; // @synthesize logRate=_logRate;
@property(retain, nonatomic) NSDictionary *testInventory; // @synthesize testInventory=_testInventory;
@property(copy, nonatomic) NSString *testKey; // @synthesize testKey=_testKey;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)boolOfParamWithKey:(id)arg1 defaultValue:(_Bool)arg2;
- (double)doubleOfParamWithKey:(id)arg1 defaultValue:(double)arg2;
- (float)floatOfParamWithKey:(id)arg1 defaultValue:(float)arg2;
- (long long)integerOfParamWithKey:(id)arg1 defaultValue:(long long)arg2;
- (id)stringOfParamWithKey:(id)arg1 defaultValue:(id)arg2;

@end

