//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVObjectModel.h"

@class KTVJudgeKrcModel, KTVPlayerBaseInfo, KTV_SongInfo, KtvAccompanyHttpADO, KtvKrcModel, NSObject<OS_dispatch_group>, NSString;

@interface KTVMakeJudgeInfo : KTVObjectModel
{
    _Bool _isRequestSuccess;
    int _pkId;
    int _p1StarNum;
    int _p2StarNum;
    int _p1Relation;
    int _p2Relation;
    int _opusId1;
    int _opusId2;
    int _playTime;
    int _index;
    int _isBreak;
    KTVPlayerBaseInfo *_playerBase1;
    KTVPlayerBaseInfo *_playerBase2;
    NSString *_opusHash1;
    NSString *_opusHash2;
    NSString *_songName;
    NSString *_singerName;
    long long _songId;
    NSString *_songHash;
    NSString *_albumURL;
    double _voteRate1;
    double _voteRate2;
    long long _selectedPlayerId;
    long long _selectedOpusId;
    KtvKrcModel *_krcModel;
    KTVJudgeKrcModel *_judgeModel;
    long long _krcAdjust;
    NSString *_leftMaskImgUrl;
    NSString *_rightMaskImgUrl;
    NSString *_backgroundImg;
    KtvAccompanyHttpADO *_accHttp;
    NSObject<OS_dispatch_group> *_group;
    KTV_SongInfo *_songInfo;
}

@property(retain, nonatomic) KTV_SongInfo *songInfo; // @synthesize songInfo=_songInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(retain, nonatomic) KtvAccompanyHttpADO *accHttp; // @synthesize accHttp=_accHttp;
@property(retain, nonatomic) NSString *backgroundImg; // @synthesize backgroundImg=_backgroundImg;
@property(nonatomic) int isBreak; // @synthesize isBreak=_isBreak;
@property(nonatomic) _Bool isRequestSuccess; // @synthesize isRequestSuccess=_isRequestSuccess;
@property(retain, nonatomic) NSString *rightMaskImgUrl; // @synthesize rightMaskImgUrl=_rightMaskImgUrl;
@property(retain, nonatomic) NSString *leftMaskImgUrl; // @synthesize leftMaskImgUrl=_leftMaskImgUrl;
@property(nonatomic) long long krcAdjust; // @synthesize krcAdjust=_krcAdjust;
@property(retain, nonatomic) KTVJudgeKrcModel *judgeModel; // @synthesize judgeModel=_judgeModel;
@property(retain, nonatomic) KtvKrcModel *krcModel; // @synthesize krcModel=_krcModel;
@property(nonatomic) long long selectedOpusId; // @synthesize selectedOpusId=_selectedOpusId;
@property(nonatomic) long long selectedPlayerId; // @synthesize selectedPlayerId=_selectedPlayerId;
@property(nonatomic) double voteRate2; // @synthesize voteRate2=_voteRate2;
@property(nonatomic) double voteRate1; // @synthesize voteRate1=_voteRate1;
@property(nonatomic) int index; // @synthesize index=_index;
@property(copy, nonatomic) NSString *albumURL; // @synthesize albumURL=_albumURL;
@property(copy, nonatomic) NSString *songHash; // @synthesize songHash=_songHash;
@property(nonatomic) int playTime; // @synthesize playTime=_playTime;
@property(nonatomic) long long songId; // @synthesize songId=_songId;
@property(copy, nonatomic) NSString *singerName; // @synthesize singerName=_singerName;
@property(copy, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(nonatomic) int opusId2; // @synthesize opusId2=_opusId2;
@property(nonatomic) int opusId1; // @synthesize opusId1=_opusId1;
@property(copy, nonatomic) NSString *opusHash2; // @synthesize opusHash2=_opusHash2;
@property(copy, nonatomic) NSString *opusHash1; // @synthesize opusHash1=_opusHash1;
@property(nonatomic) int p2Relation; // @synthesize p2Relation=_p2Relation;
@property(nonatomic) int p1Relation; // @synthesize p1Relation=_p1Relation;
@property(nonatomic) int p2StarNum; // @synthesize p2StarNum=_p2StarNum;
@property(nonatomic) int p1StarNum; // @synthesize p1StarNum=_p1StarNum;
@property(retain, nonatomic) KTVPlayerBaseInfo *playerBase2; // @synthesize playerBase2=_playerBase2;
@property(retain, nonatomic) KTVPlayerBaseInfo *playerBase1; // @synthesize playerBase1=_playerBase1;
@property(nonatomic) int pkId; // @synthesize pkId=_pkId;
- (void).cxx_destruct;
- (void)analyzeKrc;
- (void)loadWorkInfoCompleteBlock:(CDUnknownBlockType)arg1;
- (void)exchangeObj:(id *)arg1 andObj2:(id *)arg2;
- (void)exchangeFloat:(double *)arg1 andNum2:(double *)arg2;
- (void)exchangeInt:(int *)arg1 andNum2:(int *)arg2;
- (id)exchangeP1WithP2;
- (id)init;

@end
