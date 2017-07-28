//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DYCValue.h"

@interface DYCBox : DYCValue
{
}

+ (id)returnBoxWithObjCType:(const char *)arg1;
+ (id)boxFunction:(CDUnknownFunctionPointerType)arg1;
+ (id)boxNumber:(id)arg1 objCType:(const char *)arg2;
+ (id)boxSelector:(SEL)arg1;
+ (id)boxBlock:(id)arg1;
+ (id)boxClass:(Class)arg1;
+ (id)boxUnsafeUnretainedObject:(id)arg1;
+ (id)boxWeakObject:(id)arg1;
+ (id)boxStrongObject:(id)arg1;
+ (id)voidBox;
+ (id)nilBox;
+ (id)emptyBoxWithObjCType:(const char *)arg1;
+ (id)emptyBoxWithType:(id)arg1;
- (void)wipeStorage;
@property(readonly, nonatomic) _Bool isWeakObject;
@property(readonly, nonatomic) _Bool isStrongObject;
- (void)dealloc;
- (id)initWithType:(id)arg1;

@end
