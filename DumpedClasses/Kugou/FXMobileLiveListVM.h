//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FXMobileLiveHotClassify, FXMobileLiveMoreClassify, FXMobileLiveRedPeoplePredicInfo, NSArray;

@interface FXMobileLiveListVM : NSObject
{
    _Bool _noRefresh;
    _Bool _loading;
    _Bool _hasNextConcernPage;
    FXMobileLiveRedPeoplePredicInfo *_bigVipInfo;
    long long _currentPage;
    long long _pageSize;
    unsigned long long _recommendListStatus;
    unsigned long long _allListStatus;
    long long _type;
    FXMobileLiveHotClassify *_currentHotClassify;
    FXMobileLiveMoreClassify *_currentClassify;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failedBlock;
    long long _roomType;
    long long _sortType;
    NSArray *_recommendListArr;
    FXMobileLiveRedPeoplePredicInfo *_tempAllListInfo;
}

+ (id)convertToPredicInfoWithRoomInfo:(id)arg1;
@property(nonatomic) _Bool hasNextConcernPage; // @synthesize hasNextConcernPage=_hasNextConcernPage;
@property(retain, nonatomic) FXMobileLiveRedPeoplePredicInfo *tempAllListInfo; // @synthesize tempAllListInfo=_tempAllListInfo;
@property(retain, nonatomic) NSArray *recommendListArr; // @synthesize recommendListArr=_recommendListArr;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) _Bool noRefresh; // @synthesize noRefresh=_noRefresh;
@property(nonatomic) long long sortType; // @synthesize sortType=_sortType;
@property(nonatomic) long long roomType; // @synthesize roomType=_roomType;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) FXMobileLiveMoreClassify *currentClassify; // @synthesize currentClassify=_currentClassify;
@property(retain, nonatomic) FXMobileLiveHotClassify *currentHotClassify; // @synthesize currentHotClassify=_currentHotClassify;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long allListStatus; // @synthesize allListStatus=_allListStatus;
@property(nonatomic) unsigned long long recommendListStatus; // @synthesize recommendListStatus=_recommendListStatus;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) FXMobileLiveRedPeoplePredicInfo *bigVipInfo; // @synthesize bigVipInfo=_bigVipInfo;
- (void).cxx_destruct;
- (void)reloadAllOfPageData;
- (id)convernConcernListToMobileList:(id)arg1;
- (void)requestMobileConcernListWithPageSize:(long long)arg1;
- (void)requestAllConcernListWithPage:(long long)arg1 pageSize:(long long)arg2;
- (void)requestHomePageConcernListWithPage:(long long)arg1 pageSize:(long long)arg2;
- (_Bool)hasMoreMobileRoomToRequest;
- (struct CLLocationCoordinate2D)getLastLocation;
- (id)getAreaId;
- (id)getCityId;
- (id)resortArrayWithSourceArray:(id)arg1 addArray:(id)arg2;
- (void)reloadListData;
- (void)requestListData:(long long)arg1 pageSize:(long long)arg2;
- (void)requestListData;
- (void)reqeustClassifyArtistList:(long long)arg1 pageSize:(long long)arg2;
- (void)dealRequestAllList:(long long)arg1 pageSize:(long long)arg2;
- (void)requestAllListFail:(id)arg1;
- (void)mergeRecommendListAndAllList;
- (void)requestAllArtistList:(long long)arg1 pageSize:(long long)arg2;
- (void)requestRecommendList;
- (id)filterData:(id)arg1;
- (_Bool)filterMobileListWithDestData:(out id)arg1 sourceData:(in id)arg2;
- (void)requestSameCityData:(unsigned long long)arg1 pageSize:(unsigned long long)arg2;
- (void)requestHotClassifyList:(long long)arg1 pageSize:(long long)arg2;
- (id)init;

@end

