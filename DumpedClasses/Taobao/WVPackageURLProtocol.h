//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WVURLProtocolInterface.h"

@class NSData, NSDictionary, NSString, NSURLRequest, WVPackageVisitMonitorInfo;

@interface WVPackageURLProtocol : NSObject <WVURLProtocolInterface>
{
    NSData *_responseData;
    NSDictionary *_externalHeaders;
    NSURLRequest *_request;
    double _startTime;
    WVPackageVisitMonitorInfo *_monitorInfo;
    CDUnknownBlockType _successBlock;
    NSString *_appName;
    NSString *_appVersion;
    unsigned long long _appSeq;
    long long _appMonitor;
}

+ (void)recordPackageVisitStart:(id)arg1;
@property(nonatomic) long long appMonitor; // @synthesize appMonitor=_appMonitor;
@property(nonatomic) unsigned long long appSeq; // @synthesize appSeq=_appSeq;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) WVPackageVisitMonitorInfo *monitorInfo; // @synthesize monitorInfo=_monitorInfo;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSDictionary *externalHeaders; // @synthesize externalHeaders=_externalHeaders;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
- (void).cxx_destruct;
- (_Bool)checkData:(id)arg1 withUrlInfo:(id)arg2;
- (id)concatFiles:(id)arg1;
- (id)parseComboUrlInfo:(id)arg1;
- (_Bool)parseCombo;
- (_Bool)isComboUrl;
- (void)sendResponse:(id)arg1 from:(long long)arg2;
- (_Bool)readFromLocalFile:(id)arg1;
- (void)reportPackageAppVisit:(id)arg1 withSeq:(unsigned long long)arg2 withError:(id)arg3;
- (void)reportPackageAppVisit:(id)arg1;
- (_Bool)canLoadRequest:(id)arg1 withSuccess:(CDUnknownBlockType)arg2 withFailure:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

