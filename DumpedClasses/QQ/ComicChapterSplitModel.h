//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray, NSString;

@interface ComicChapterSplitModel : NSObject <NSCoding>
{
    NSString *_chapterName;
    NSString *_chapterTitle;
    NSMutableArray *_sectionIds;
    int _xo;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *chapterName; // @dynamic chapterName;
@property(retain, nonatomic) NSString *chapterTitle; // @dynamic chapterTitle;
@property(retain, nonatomic) NSMutableArray *sectionIds; // @dynamic sectionIds;

@end

