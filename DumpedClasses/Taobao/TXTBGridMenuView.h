//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class NSMutableArray;

@interface TXTBGridMenuView : UIScrollView
{
    unsigned long long _columnCount;
    double _topPadding;
    double _leftPadding;
    double _bottomPadding;
    double _yPadding;
    id <TXTBGridMenuViewDelegate> _gridMenuViewDelegate;
    NSMutableArray *_itemViews;
    struct CGSize _itemSize;
}

@property(retain, nonatomic) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
@property(nonatomic) id <TXTBGridMenuViewDelegate> gridMenuViewDelegate; // @synthesize gridMenuViewDelegate=_gridMenuViewDelegate;
@property(nonatomic) double yPadding; // @synthesize yPadding=_yPadding;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) double leftPadding; // @synthesize leftPadding=_leftPadding;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) unsigned long long columnCount; // @synthesize columnCount=_columnCount;
- (void).cxx_destruct;
- (void)reloadData;
- (void)itemPressed:(id)arg1;
- (void)setupItemViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

