//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelOrderOpsModifyResultModel : CTBusinessBean
{
    _Bool _success;
    int _addOptionalItemID;
    NSString *_couponNo;
    NSString *_message;
}

@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) int addOptionalItemID; // @synthesize addOptionalItemID=_addOptionalItemID;
@property(copy, nonatomic) NSString *couponNo; // @synthesize couponNo=_couponNo;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

