//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KMHomeFXModel, KMHomeFXModelManager, NSArray;

@protocol KGMusicHomeShowMessagePopViewDelegate <NSObject>

@optional
- (void)refreshHomeShowFXdata:(KMHomeFXModelManager *)arg1;
- (void)refreshTotalCount:(long long)arg1;
- (void)didSelectStartRoom:(KMHomeFXModel *)arg1 withList:(NSArray *)arg2;
@end

