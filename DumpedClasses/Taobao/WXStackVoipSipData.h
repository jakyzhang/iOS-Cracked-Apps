//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WXStackVoipSipData : NSObject
{
    NSString *_sipData;
    NSString *_from;
    long long _msgid;
    NSString *_to;
}

@property(retain, nonatomic) NSString *to; // @synthesize to=_to;
@property(nonatomic) long long msgid; // @synthesize msgid=_msgid;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(retain, nonatomic) NSString *sipData; // @synthesize sipData=_sipData;
- (void).cxx_destruct;

@end

