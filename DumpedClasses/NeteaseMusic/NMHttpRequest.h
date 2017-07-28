//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSMutableArray, NSMutableData, NSMutableDictionary, NSNumber, NSString;

@interface NMHttpRequest : NSObject
{
    long long _priority;
    NSString *_urlString;
    NSMutableDictionary *_postArguments;
    NSMutableDictionary *_getArguments;
    NSArray *_paramsOrder;
    NSDictionary *_header;
    NSDictionary *_responseHeader;
    NSMutableData *_receiveData;
    unsigned long long _responseEncoding;
    NSData *_postData;
    NSString *_requestMethod;
    NSMutableArray *_cookies;
    NSArray *_responseCookies;
    long long _timeoutSeconds;
    NSString *_objId;
    NSString *_userAgent;
    long long _errCode;
    NSString *_hashKey;
    _Bool _uploadFile;
    NSString *_filePath;
    NSString *_fileKey;
    id _parseReuslt;
    id _userInfo;
    _Bool _showProgress;
    _Bool _shouldCompressRequestBody;
    _Bool _needContentType;
    _Bool _needKeepAlive;
    CDUnknownBlockType _completeBlock;
    CDUnknownBlockType _failedBlock;
    CDUnknownBlockType _cancelledBlock;
    CDUnknownBlockType _progressBlock;
    _Bool _needLoginState;
    _Bool _needGetContentType;
    _Bool _sendBeforeAnomiLogin;
    _Bool _shouldNeverGoSPProxy;
    _Bool _responseEncrypted;
    _Bool _receiveDataDecrypted;
    id <NMHttpRequestDelegate> _delegate;
    NSString *_downloadFilePath;
    NSString *_downloadTempFilePath;
    NSNumber *_range;
    NSMutableDictionary *_getArgumentsEvenEncrypt;
    long long _statusCode;
}

+ (void)cancelAllRequestWithClass:(Class)arg1;
+ (id)fixRequestUrlForWebView:(id)arg1;
@property(nonatomic) _Bool receiveDataDecrypted; // @synthesize receiveDataDecrypted=_receiveDataDecrypted;
@property(nonatomic) _Bool responseEncrypted; // @synthesize responseEncrypted=_responseEncrypted;
@property(nonatomic) _Bool shouldNeverGoSPProxy; // @synthesize shouldNeverGoSPProxy=_shouldNeverGoSPProxy;
@property(nonatomic) _Bool sendBeforeAnomiLogin; // @synthesize sendBeforeAnomiLogin=_sendBeforeAnomiLogin;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSMutableDictionary *getArgumentsEvenEncrypt; // @synthesize getArgumentsEvenEncrypt=_getArgumentsEvenEncrypt;
@property(readonly, nonatomic) _Bool needLoginState; // @synthesize needLoginState=_needLoginState;
@property(readonly, nonatomic) NSString *hashKey; // @synthesize hashKey=_hashKey;
@property(nonatomic) _Bool needKeepAlive; // @synthesize needKeepAlive=_needKeepAlive;
@property(nonatomic) _Bool needGetContentType; // @synthesize needGetContentType=_needGetContentType;
@property(nonatomic) _Bool shouldCompressRequestBody; // @synthesize shouldCompressRequestBody=_shouldCompressRequestBody;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelledBlock; // @synthesize cancelledBlock=_cancelledBlock;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool showProgress; // @synthesize showProgress=_showProgress;
@property(retain, nonatomic) NSNumber *range; // @synthesize range=_range;
@property(retain, nonatomic) NSString *downloadTempFilePath; // @synthesize downloadTempFilePath=_downloadTempFilePath;
@property(retain, nonatomic) NSString *downloadFilePath; // @synthesize downloadFilePath=_downloadFilePath;
@property(retain, nonatomic) NSArray *responseCookies; // @synthesize responseCookies=_responseCookies;
@property(retain, nonatomic) NSDictionary *header; // @synthesize header=_header;
@property(retain, nonatomic) NSDictionary *responseHeader; // @synthesize responseHeader=_responseHeader;
@property(nonatomic) _Bool uploadFile; // @synthesize uploadFile=_uploadFile;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *fileKey; // @synthesize fileKey=_fileKey;
@property(nonatomic) long long errCode; // @synthesize errCode=_errCode;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain, nonatomic) NSMutableArray *cookies; // @synthesize cookies=_cookies;
@property(retain, nonatomic) NSString *requestMethod; // @synthesize requestMethod=_requestMethod;
@property(nonatomic) long long timeoutSeconds; // @synthesize timeoutSeconds=_timeoutSeconds;
@property(retain, nonatomic) NSData *postData; // @synthesize postData=_postData;
@property(nonatomic) unsigned long long responseEncoding; // @synthesize responseEncoding=_responseEncoding;
@property(retain, nonatomic) NSMutableData *receiveData; // @synthesize receiveData=_receiveData;
@property(retain, nonatomic) NSArray *paramsOrder; // @synthesize paramsOrder=_paramsOrder;
@property(retain, nonatomic) NSMutableDictionary *getArguments; // @synthesize getArguments=_getArguments;
@property(retain, nonatomic) NSMutableDictionary *postArguments; // @synthesize postArguments=_postArguments;
@property(retain, nonatomic) NSString *objId; // @synthesize objId=_objId;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) __weak id <NMHttpRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)checkToAddSPType;
- (void)addCacheKeyWithParams:(id)arg1;
- (void)resetData;
- (void)changeToHttpRequest;
- (_Bool)isHttpsRequest;
- (id)getRequestParameters;
- (id)getRequestUri;
@property(readonly, nonatomic) _Bool isServerError;
@property(readonly, nonatomic) _Bool isNetworkConnectionError; // @dynamic isNetworkConnectionError;
- (id)description;
- (long long)responseCode;
- (id)returnCode;
- (void)cancel;
- (void)start;
- (id)safeParseResultDictionary;
- (id)parseResult;
- (id)textWithUTF8Encoding;
- (void)setProgress:(double)arg1;
- (void)addCookies;
- (id)init;
- (id)initWithUrlString:(id)arg1;
- (id)fixRequestUrlIfNeeded:(id)arg1;
@property(nonatomic) _Bool isAutoSiteSecurityOn;

@end
