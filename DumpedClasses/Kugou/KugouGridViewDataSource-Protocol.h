//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KugouGridView, KugouGridViewCell;

@protocol KugouGridViewDataSource <NSObject>
- (KugouGridViewCell *)KugouGridView:(KugouGridView *)arg1 cellForItemAtIndex:(long long)arg2;
- (struct CGSize)KugouGridView:(KugouGridView *)arg1 sizeForItemsInInterfaceOrientation:(long long)arg2;
- (long long)numberOfItemsInKugouGridView:(KugouGridView *)arg1;

@optional
- (_Bool)KugouGridView:(KugouGridView *)arg1 canDeleteItemAtIndex:(long long)arg2;
@end
