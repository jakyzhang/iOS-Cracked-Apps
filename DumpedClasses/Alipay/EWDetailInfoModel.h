//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSAttributedString, NSString;

@interface EWDetailInfoModel : NSObject
{
    NSAttributedString *_detailAttributeString;
    NSString *_detailSimpleString;
    NSString *_detailHTMLString;
    NSString *_noticeSimpleString;
    NSArray *_attachments;
}

@property(retain, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) NSString *noticeSimpleString; // @synthesize noticeSimpleString=_noticeSimpleString;
@property(retain, nonatomic) NSString *detailHTMLString; // @synthesize detailHTMLString=_detailHTMLString;
@property(retain, nonatomic) NSString *detailSimpleString; // @synthesize detailSimpleString=_detailSimpleString;
@property(retain, nonatomic) NSAttributedString *detailAttributeString; // @synthesize detailAttributeString=_detailAttributeString;
- (void).cxx_destruct;
- (_Bool)allImageUploaded;

@end

