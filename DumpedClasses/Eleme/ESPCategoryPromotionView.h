//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ESPCategoryPromotion, UILabel;

@interface ESPCategoryPromotionView : UIView
{
    ESPCategoryPromotion *_categoryPromotion;
    UILabel *_descriptionLabel;
    UIView *_descriptionViewBorder;
}

+ (double)heightForCategoryPromotion:(id)arg1 withinWidth:(double)arg2;
@property(retain, nonatomic) UIView *descriptionViewBorder; // @synthesize descriptionViewBorder=_descriptionViewBorder;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak ESPCategoryPromotion *categoryPromotion; // @synthesize categoryPromotion=_categoryPromotion;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)loadDescriptionViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

