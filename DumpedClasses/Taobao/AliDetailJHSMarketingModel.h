//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray<AliDetailJHSMarketingItemModel>;

@interface AliDetailJHSMarketingModel : TBJSONModel
{
    NSArray<AliDetailJHSMarketingItemModel> *_marketingActivities;
}

+ (id)modelKeyMapper;
@property(retain, nonatomic) NSArray<AliDetailJHSMarketingItemModel> *marketingActivities; // @synthesize marketingActivities=_marketingActivities;
- (void).cxx_destruct;

@end

