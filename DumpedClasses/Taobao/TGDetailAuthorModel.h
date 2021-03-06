//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGBaseModel.h"

@class NSArray, NSString;

@interface TGDetailAuthorModel : TGBaseModel
{
    int _uType;
    long long _followerNumber;
    long long _groupId;
    NSString *_groupName;
    long long _userId;
    NSString *_userNick;
    NSString *_avatar;
    NSArray *_uTitles;
}

@property(nonatomic) int uType; // @synthesize uType=_uType;
@property(retain, nonatomic) NSArray *uTitles; // @synthesize uTitles=_uTitles;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *userNick; // @synthesize userNick=_userNick;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
@property(nonatomic) long long followerNumber; // @synthesize followerNumber=_followerNumber;
- (void).cxx_destruct;
- (id)initWithParams:(id)arg1;

@end

