//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYRKModel.h"

@class NSString;

@interface XYPHStoreThirdPartyBrandCollectionBanner : XYRKModel
{
    NSString *_image;
    NSString *_title;
    NSString *_desc;
    NSString *_goodsNumber;
    NSString *_brandLogo;
    NSString *_brandName;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
@property(retain, nonatomic) NSString *brandLogo; // @synthesize brandLogo=_brandLogo;
@property(retain, nonatomic) NSString *goodsNumber; // @synthesize goodsNumber=_goodsNumber;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
- (void).cxx_destruct;

@end
