//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ITBPBGetData.h"
#import "NSCoding.h"

@class NSArray, NSData, NSString, TBAddressModel, TBVideoReaderConfModel, TBVideoSpreadGroupListModel;

@interface TBReqPublishStoryVideoModel : NSObject <ITBPBGetData, NSCoding>
{
    _Bool _isLocal;
    _Bool _isPicture;
    _Bool _isGroupVideo;
    unsigned int _videoHeight;
    unsigned int _videoWidth;
    unsigned int _source;
    unsigned int _date;
    int _latitude;
    int _longitude;
    int _timezoneOffset;
    NSString *_title;
    NSString *_vid;
    NSString *_videoCover;
    NSString *_doodleUrl;
    unsigned long long _videoTime;
    TBAddressModel *_address;
    NSString *_label;
    unsigned long long _createTime;
    NSString *_videoURL;
    unsigned long long _videoBytes;
    NSString *_doodleText;
    NSString *_locationEmojiText;
    NSString *_geographyFilter;
    NSArray *_mentionList;
    TBVideoReaderConfModel *_readerConf;
    TBVideoSpreadGroupListModel *_groupList;
    NSString *_groupID;
    unsigned long long _captureTime;
    NSString *_captureLocation;
    NSData *_videoAttributeJson;
    unsigned long long _uin;
}

@property(nonatomic) _Bool isGroupVideo; // @synthesize isGroupVideo=_isGroupVideo;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
@property(nonatomic) int timezoneOffset; // @synthesize timezoneOffset=_timezoneOffset;
@property(nonatomic) _Bool isPicture; // @synthesize isPicture=_isPicture;
@property(retain, nonatomic) NSData *videoAttributeJson; // @synthesize videoAttributeJson=_videoAttributeJson;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(retain, nonatomic) NSString *captureLocation; // @synthesize captureLocation=_captureLocation;
@property(nonatomic) int longitude; // @synthesize longitude=_longitude;
@property(nonatomic) int latitude; // @synthesize latitude=_latitude;
@property(nonatomic) unsigned long long captureTime; // @synthesize captureTime=_captureTime;
@property(nonatomic) unsigned int date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) TBVideoSpreadGroupListModel *groupList; // @synthesize groupList=_groupList;
@property(retain, nonatomic) TBVideoReaderConfModel *readerConf; // @synthesize readerConf=_readerConf;
@property(nonatomic) unsigned int source; // @synthesize source=_source;
@property(retain, nonatomic) NSArray *mentionList; // @synthesize mentionList=_mentionList;
@property(retain, nonatomic) NSString *geographyFilter; // @synthesize geographyFilter=_geographyFilter;
@property(retain, nonatomic) NSString *locationEmojiText; // @synthesize locationEmojiText=_locationEmojiText;
@property(retain, nonatomic) NSString *doodleText; // @synthesize doodleText=_doodleText;
@property(nonatomic) unsigned int videoWidth; // @synthesize videoWidth=_videoWidth;
@property(nonatomic) unsigned int videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) unsigned long long videoBytes; // @synthesize videoBytes=_videoBytes;
@property(retain, nonatomic) NSString *videoURL; // @synthesize videoURL=_videoURL;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) TBAddressModel *address; // @synthesize address=_address;
@property(nonatomic) unsigned long long videoTime; // @synthesize videoTime=_videoTime;
@property(retain, nonatomic) NSString *doodleUrl; // @synthesize doodleUrl=_doodleUrl;
@property(retain, nonatomic) NSString *videoCover; // @synthesize videoCover=_videoCover;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)getStoryVideoAttributeJson;
- (id)getJsonDict;
- (id)objectTojsonWithoutSpace:(id)arg1;
- (id)getRequestPBData;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

