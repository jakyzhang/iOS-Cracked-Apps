//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBaseJSONModel.h"

@class NSString;

@interface FXSLuckBoxList_LuckBox : FXBaseJSONModel
{
    int _userId;
    int _costValue;
    NSString *_nickName;
    NSString *_userLogo;
    NSString *_desc;
    NSString *_descDetail;
}

@property(retain, nonatomic) NSString *descDetail; // @synthesize descDetail=_descDetail;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) int costValue; // @synthesize costValue=_costValue;
@property(retain, nonatomic) NSString *userLogo; // @synthesize userLogo=_userLogo;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) int userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

