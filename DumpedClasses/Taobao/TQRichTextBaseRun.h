//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIFont;

@interface TQRichTextBaseRun : NSObject
{
    _Bool _isResponseTouch;
    int _type;
    NSString *_originalText;
    UIFont *_originalFont;
    struct _NSRange _range;
}

@property(nonatomic) _Bool isResponseTouch; // @synthesize isResponseTouch=_isResponseTouch;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(retain, nonatomic) UIFont *originalFont; // @synthesize originalFont=_originalFont;
@property(copy, nonatomic) NSString *originalText; // @synthesize originalText=_originalText;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)drawRunWithRect:(struct CGRect)arg1;
- (void)replaceTextWithAttributedString:(id)arg1;
- (id)init;

@end

