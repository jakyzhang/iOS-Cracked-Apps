//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface ArkAppCheckEventCenter : NSObject
{
    NSMutableDictionary *_dictObservers;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *dictObservers; // @synthesize dictObservers=_dictObservers;
- (void)doCheck:(int)arg1 appid:(id)arg2 param:(id)arg3 result:(id *)arg4;
- (void)detachEvent:(id)arg1;
- (void)attachEvent:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)init;

@end

