//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray<TXBottomConfigModel>, NSMutableArray, NSString;

@interface TXOneFamilyView : UIView
{
    NSArray<TXBottomConfigModel> *_bottomConfig;
    UIView *_frameView;
    NSMutableArray *_buttonArray;
    NSMutableArray *_dividedLineArray;
    NSMutableArray *_redPointViewArray;
}

+ (id)RechargeConfigBtnClicked;
@property(copy, nonatomic) NSMutableArray *redPointViewArray; // @synthesize redPointViewArray=_redPointViewArray;
@property(copy, nonatomic) NSMutableArray *dividedLineArray; // @synthesize dividedLineArray=_dividedLineArray;
@property(copy, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) UIView *frameView; // @synthesize frameView=_frameView;
@property(retain, nonatomic) NSArray<TXBottomConfigModel> *bottomConfig; // @synthesize bottomConfig=_bottomConfig;
- (void).cxx_destruct;
- (void)gotoRechargeConfigLink:(id)arg1;
- (void)updateUI;
- (void)setupView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) NSString *RechargeConfigBtnClicked; // @dynamic RechargeConfigBtnClicked;

@end

