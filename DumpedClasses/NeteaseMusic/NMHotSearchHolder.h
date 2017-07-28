//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NMHttpRequestDelegate.h"

@class NMSearchHotRequest, NSArray, NSMutableArray, NSString;

@interface NMHotSearchHolder : NSObject <NMHttpRequestDelegate>
{
    long long _type;
    NMSearchHotRequest *_searchHotRequest;
    _Bool _loading;
    _Bool _loadFailed;
    _Bool _failBecauseOfNetwork;
    NSMutableArray *_hotSearchArray;
    double _lastLoadHotSearch;
}

+ (unsigned long long)maxHotSearchCount;
+ (id)globalHolder;
@property(readonly, nonatomic) NSArray *hotSearchArray; // @synthesize hotSearchArray=_hotSearchArray;
@property(readonly, nonatomic) _Bool failBecauseOfNetwork; // @synthesize failBecauseOfNetwork=_failBecauseOfNetwork;
@property(readonly, nonatomic) _Bool loadFailed; // @synthesize loadFailed=_loadFailed;
@property(readonly, nonatomic) _Bool loading; // @synthesize loading=_loading;
- (void).cxx_destruct;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)loadHotSearch;
- (void)finishLoadHotSearch:(_Bool)arg1 request:(id)arg2;
- (void)dealloc;
- (id)initWithType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
