//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray<AliDetailTreeBranchModel>, NSString;

@interface AliDetailTreeBranchModel : TBJSONModel
{
    _Bool _leaf;
    _Bool _sync;
    NSString *_query;
    NSString *_text;
    NSArray<AliDetailTreeBranchModel> *_branches;
}

@property(retain, nonatomic) NSArray<AliDetailTreeBranchModel> *branches; // @synthesize branches=_branches;
@property(nonatomic) _Bool sync; // @synthesize sync=_sync;
@property(nonatomic) _Bool leaf; // @synthesize leaf=_leaf;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;

@end
