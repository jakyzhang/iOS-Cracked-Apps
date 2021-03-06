//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "DCHomeTableViewCellProtocol.h"

@class DCHomeCarpoolCardModel, NSString, UIImageView, UILabel, UIView;

@interface DCHomeCarpoolCardCell : UITableViewCell <DCHomeTableViewCellProtocol>
{
    DCHomeCarpoolCardModel *curModel;
    UIImageView *arrowView;
    UIView *bgView;
    UILabel *titleLabel;
    UILabel *subTitleLabel;
}

+ (double)cellHeightByDataModel:(id)arg1;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)refreshCellByDataModel:(id)arg1;
- (id)currentDataModel;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

