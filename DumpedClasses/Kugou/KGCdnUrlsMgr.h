//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface KGCdnUrlsMgr : NSObject
{
    int _urlIndex;
    NSArray *_urlArray;
    long long _urlTime;
}

@property(nonatomic) long long urlTime; // @synthesize urlTime=_urlTime;
@property(nonatomic) int urlIndex; // @synthesize urlIndex=_urlIndex;
@property(retain, nonatomic) NSArray *urlArray; // @synthesize urlArray=_urlArray;
- (void).cxx_destruct;
- (id)getBackupURL;
- (id)getMainURL;
- (_Bool)isUrlValid;
- (void)resetCdnUrls:(id)arg1;
- (id)init;

@end

