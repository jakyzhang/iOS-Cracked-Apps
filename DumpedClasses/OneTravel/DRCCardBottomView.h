//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DRCOrderDetailModel, UIButton, UIImageView;

@interface DRCCardBottomView : UIView
{
    DRCOrderDetailModel *_cardData;
    UIImageView *_header;
    UIButton *_actionBtn;
}

@property(retain, nonatomic) UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) UIImageView *header; // @synthesize header=_header;
@property(retain, nonatomic) DRCOrderDetailModel *cardData; // @synthesize cardData=_cardData;
- (void).cxx_destruct;
- (void)action;
- (void)updateSubview;
- (id)initWithOrderData:(id)arg1;

@end

