//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber<Optional>, NSString<Optional>;

@interface DCClickOrderInfoModel : JSONModel
{
    NSNumber<Optional> *_order_level;
    NSString<Optional> *_order_sort;
}

@property(copy, nonatomic) NSString<Optional> *order_sort; // @synthesize order_sort=_order_sort;
@property(retain, nonatomic) NSNumber<Optional> *order_level; // @synthesize order_level=_order_level;
- (void).cxx_destruct;

@end
