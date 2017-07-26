//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JKDBModel.h"

@class NSString, QLJCEVRSSItem;

@interface QLVRssSubscribeDBRecord : JKDBModel
{
    NSString *_rssKey;
    NSString *_rssId;
    QLJCEVRSSItem *_backupVRssItem;
    NSString *_userId;
    NSString *_serverDataVersion;
    NSString *_localDataVersion;
}

+ (id)joindedTableName;
+ (id)indexes;
+ (id)transients;
+ (_Bool)createTable;
+ (_Bool)checkIfUpdataComing:(id)arg1;
+ (_Bool)updateLocalDataVersion:(id)arg1;
+ (_Bool)deleteObjectsNotInNewList:(id)arg1;
+ (_Bool)saveObjects:(id)arg1;
@property(copy, nonatomic) NSString *localDataVersion; // @synthesize localDataVersion=_localDataVersion;
@property(copy, nonatomic) NSString *serverDataVersion; // @synthesize serverDataVersion=_serverDataVersion;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) QLJCEVRSSItem *backupVRssItem; // @synthesize backupVRssItem=_backupVRssItem;
@property(retain, nonatomic) NSString *rssId; // @synthesize rssId=_rssId;
@property(retain, nonatomic) NSString *rssKey; // @synthesize rssKey=_rssKey;
- (void).cxx_destruct;
- (_Bool)save;
- (id)initWithJCEItem:(id)arg1 userId:(id)arg2;

@end
