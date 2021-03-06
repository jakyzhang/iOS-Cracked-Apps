//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSString, NVMOrderItemRating;

@interface NVMOrderRatingItem : NVMModel
{
    _Bool _canUploadImage;
    _Bool _ratedBefore;
    NSString *_orderItemID;
    NSString *_name;
    NVMOrderItemRating *_rating;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool ratedBefore; // @synthesize ratedBefore=_ratedBefore;
@property(nonatomic) _Bool canUploadImage; // @synthesize canUploadImage=_canUploadImage;
@property(retain, nonatomic) NVMOrderItemRating *rating; // @synthesize rating=_rating;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *orderItemID; // @synthesize orderItemID=_orderItemID;
- (void).cxx_destruct;
- (_Bool)validateRatingText:(id *)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

