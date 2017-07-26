//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBJSONFormatProtocol.h"

@class NSString;

@interface TBCouponListConfigModel : NSObject <TBJSONFormatProtocol>
{
    NSString *_text;
    NSString *_url;
    NSString *_title;
    NSString *_button;
    id _configData;
}

@property(retain, nonatomic) id configData; // @synthesize configData=_configData;
@property(copy, nonatomic) NSString *button; // @synthesize button=_button;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)jsonFormObject;
- (_Bool)parseFromJSON:(id)arg1 error:(id *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
