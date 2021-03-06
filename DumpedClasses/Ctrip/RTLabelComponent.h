//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, UIImage;

@interface RTLabelComponent : NSObject
{
    _Bool _isClosure;
    int _componentIndex;
    int _position;
    NSString *_text;
    NSString *_tagLabel;
    NSMutableDictionary *_attributes;
    UIImage *_img;
}

+ (id)componentWithTag:(id)arg1 position:(int)arg2 attributes:(id)arg3;
+ (id)componentWithString:(id)arg1 tag:(id)arg2 attributes:(id)arg3;
@property(retain, nonatomic) UIImage *img; // @synthesize img=_img;
@property(nonatomic) _Bool isClosure; // @synthesize isClosure=_isClosure;
@property(nonatomic) int position; // @synthesize position=_position;
@property(retain, nonatomic) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property(copy, nonatomic) NSString *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) int componentIndex; // @synthesize componentIndex=_componentIndex;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTag:(id)arg1 position:(int)arg2 attributes:(id)arg3;
- (id)initWithString:(id)arg1 tag:(id)arg2 attributes:(id)arg3;

@end

