//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class NSString;

@interface FALiveSongSheetItem : FAModel
{
    long long _giftUsers;
    long long _itemId;
    NSString *_songName;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(nonatomic) long long itemId; // @synthesize itemId=_itemId;
@property(nonatomic) long long giftUsers; // @synthesize giftUsers=_giftUsers;
- (void).cxx_destruct;

@end

