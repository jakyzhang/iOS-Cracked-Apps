//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGBaseModel.h"

@class NSArray;

@interface TGDetailCommentsModel : TGBaseModel
{
    long long _totalCount;
    NSArray *_list;
}

@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
- (void).cxx_destruct;
- (id)initWithParams:(id)arg1;

@end

