//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface KeywordPasswordInfo : CTBusinessBean
{
    NSString *_passwordStr;
    NSString *_url;
    NSString *_startDate;
    NSString *_endDate;
}

@property(copy, nonatomic) NSString *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) NSString *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *passwordStr; // @synthesize passwordStr=_passwordStr;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

