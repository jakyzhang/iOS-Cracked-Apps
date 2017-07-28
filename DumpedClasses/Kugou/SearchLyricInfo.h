//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LyricSong.h"

@class NSArray, NSString;

@interface SearchLyricInfo : LyricSong
{
    NSString *_searchLyricString;
    NSArray *_lyricHighlightRangeValues;
}

+ (id)modelCustomPropertyMapper;
@property(retain, nonatomic) NSArray *lyricHighlightRangeValues; // @synthesize lyricHighlightRangeValues=_lyricHighlightRangeValues;
@property(copy, nonatomic) NSString *searchLyricString; // @synthesize searchLyricString=_searchLyricString;
- (void).cxx_destruct;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1;
- (id)refreshHighLightedString:(id)arg1 field:(unsigned long long)arg2;

@end
