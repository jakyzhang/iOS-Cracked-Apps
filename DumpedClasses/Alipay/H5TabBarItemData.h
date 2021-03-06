//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNumber, NSString;

@interface H5TabBarItemData : NSObject
{
    _Bool _isSelected;
    NSString *_url;
    NSString *_launchParamsTag;
    NSDictionary *_launchParams;
    NSString *_name;
    NSString *_tag;
    NSNumber *_textColor;
    NSNumber *_selectedColor;
    NSString *_icon;
    NSString *_activeIcon;
    NSString *_redDot;
}

@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) NSString *redDot; // @synthesize redDot=_redDot;
@property(retain, nonatomic) NSString *activeIcon; // @synthesize activeIcon=_activeIcon;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSNumber *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) NSNumber *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSDictionary *launchParams; // @synthesize launchParams=_launchParams;
@property(copy, nonatomic) NSString *launchParamsTag; // @synthesize launchParamsTag=_launchParamsTag;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

