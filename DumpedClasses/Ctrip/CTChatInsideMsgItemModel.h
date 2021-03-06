//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface CTChatInsideMsgItemModel : NSObject
{
    unsigned long long _MsgID;
    unsigned long long _MsgServiceID;
    NSString *_BizType;
    NSString *_BatchCode;
    NSString *_MsgType;
    NSString *_SubType;
    NSString *_Status;
    NSString *_SenderName;
    NSString *_Icon;
    NSString *_Image;
    NSString *_Title;
    NSString *_ChannelType;
    NSString *_ContentType;
    NSString *_Content;
    NSString *_RedirectUrl;
    NSString *_RequestID;
    NSString *_PostTime;
    NSString *_ExpiredTime;
    NSString *_MajorVersion;
    NSString *_VersionFlag;
    NSArray *_SubMessages;
}

@property(retain, nonatomic) NSArray *SubMessages; // @synthesize SubMessages=_SubMessages;
@property(retain, nonatomic) NSString *VersionFlag; // @synthesize VersionFlag=_VersionFlag;
@property(retain, nonatomic) NSString *MajorVersion; // @synthesize MajorVersion=_MajorVersion;
@property(retain, nonatomic) NSString *ExpiredTime; // @synthesize ExpiredTime=_ExpiredTime;
@property(retain, nonatomic) NSString *PostTime; // @synthesize PostTime=_PostTime;
@property(retain, nonatomic) NSString *RequestID; // @synthesize RequestID=_RequestID;
@property(retain, nonatomic) NSString *RedirectUrl; // @synthesize RedirectUrl=_RedirectUrl;
@property(retain, nonatomic) NSString *Content; // @synthesize Content=_Content;
@property(retain, nonatomic) NSString *ContentType; // @synthesize ContentType=_ContentType;
@property(retain, nonatomic) NSString *ChannelType; // @synthesize ChannelType=_ChannelType;
@property(retain, nonatomic) NSString *Title; // @synthesize Title=_Title;
@property(retain, nonatomic) NSString *Image; // @synthesize Image=_Image;
@property(retain, nonatomic) NSString *Icon; // @synthesize Icon=_Icon;
@property(retain, nonatomic) NSString *SenderName; // @synthesize SenderName=_SenderName;
@property(retain, nonatomic) NSString *Status; // @synthesize Status=_Status;
@property(retain, nonatomic) NSString *SubType; // @synthesize SubType=_SubType;
@property(retain, nonatomic) NSString *MsgType; // @synthesize MsgType=_MsgType;
@property(retain, nonatomic) NSString *BatchCode; // @synthesize BatchCode=_BatchCode;
@property(retain, nonatomic) NSString *BizType; // @synthesize BizType=_BizType;
@property(nonatomic) unsigned long long MsgServiceID; // @synthesize MsgServiceID=_MsgServiceID;
@property(nonatomic) unsigned long long MsgID; // @synthesize MsgID=_MsgID;
- (void).cxx_destruct;

@end

