//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ESPSearchFilterItemViewModel : NSObject
{
    _Bool _highlight;
    _Bool _bold;
    NSString *_title;
    long long _number;
}

+ (id)itemWithTitle:(id)arg1 highlight:(_Bool)arg2 bold:(_Bool)arg3 number:(long long)arg4;
@property(nonatomic) long long number; // @synthesize number=_number;
@property(nonatomic) _Bool bold; // @synthesize bold=_bold;
@property(nonatomic) _Bool highlight; // @synthesize highlight=_highlight;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

