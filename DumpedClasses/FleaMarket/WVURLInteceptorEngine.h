//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WVURLInteceptorEngine : NSObject
{
}

+ (_Bool)checkIsV2Protocol:(id)arg1;
+ (id)getRequestBodyForPost:(id)arg1;
+ (id)getRequestUrlFromRequest:(id)arg1;
+ (id)getParamFromRequestQuery:(id)arg1;
+ (id)getParamFromReqeust:(id)arg1;
+ (id)parseRequest:(id)arg1 navigationType:(long long)arg2 withWebView:(id)arg3;
+ (id)parseRequestV2:(id)arg1 navigationType:(long long)arg2;
+ (_Bool)isPostRequest:(id)arg1;
+ (id)notFixRule;
+ (id)analyzerRequest:(id)arg1 navigationType:(long long)arg2 withWebView:(id)arg3;
+ (_Bool)dispatch:(id)arg1 withRequestUrl:(id)arg2 withSourceViewController:(id)arg3;
+ (_Bool)interrunptedFromCurrentRule:(id)arg1 withWebView:(id)arg2 navigationType:(long long)arg3 withViewController:(id)arg4;
+ (_Bool)isOpenURLInterceptor;
+ (void)updateRuleEngine;
+ (void)initRuleEngine;

@end

