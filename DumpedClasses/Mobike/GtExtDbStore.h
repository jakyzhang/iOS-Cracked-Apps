//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GtDbAttachmentManager, GtDbNotifyManager;

@interface GtExtDbStore : NSObject
{
    struct sqlite3 *_database;
    GtDbNotifyManager *_dbNotifyManager;
    GtDbAttachmentManager *_dbAttachmentManager;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)deleteExpireAttachment;
- (_Bool)deleteAttachmentByUrl:(id)arg1;
- (id)genStoredInAttachmentDbByUrl:(id)arg1;
- (_Bool)insertUpdateAttachmentInfo:(id)arg1 andPath:(id)arg2;
- (_Bool)createAttachmentTable;
- (id)getNotifyDataForSaveCount:(int)arg1;
- (_Bool)deleteNotify:(id)arg1;
- (_Bool)hasStoredInNotify:(id)arg1;
- (_Bool)insertDisplayNotifyRid:(id)arg1 apnsData:(id)arg2 andExtInfo:(id)arg3;
- (_Bool)createNotificationTable;
- (void)closeDataBase;
- (_Bool)openDatabase;
- (id)init;

@end

