//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NVMCartDataSubscriber.h"

@class NSString, NVMCartContext, NVMCartResult, NVMCartViewController, NVMCommonCartView, UILabel, UIViewController;

@interface NVMBottomCartView : UIView <NVMCartDataSubscriber>
{
    long long _comeFrom;
    NVMCommonCartView *_commonCartView;
    UIViewController *_parentViewController;
    NVMCartContext *_cartContext;
    id <NVMCartContextDataSource> _restaurantInfo;
    UILabel *_cartViewNotAvailableHintLabel;
    NVMCartViewController *_cartViewController;
    NVMCartResult *_lastCartData;
}

@property(retain, nonatomic) NVMCartResult *lastCartData; // @synthesize lastCartData=_lastCartData;
@property(retain, nonatomic) NVMCartViewController *cartViewController; // @synthesize cartViewController=_cartViewController;
@property(retain, nonatomic) UILabel *cartViewNotAvailableHintLabel; // @synthesize cartViewNotAvailableHintLabel=_cartViewNotAvailableHintLabel;
@property(retain, nonatomic) id <NVMCartContextDataSource> restaurantInfo; // @synthesize restaurantInfo=_restaurantInfo;
@property(retain, nonatomic) NVMCartContext *cartContext; // @synthesize cartContext=_cartContext;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain, nonatomic) NVMCommonCartView *commonCartView; // @synthesize commonCartView=_commonCartView;
@property(nonatomic) long long comeFrom; // @synthesize comeFrom=_comeFrom;
- (void).cxx_destruct;
- (void)didCompleteCartResultCalculate:(id)arg1;
- (void)trackCoudanStatus;
- (void)trackConfirmAction;
- (void)trackPriceStatus;
- (id)restaurantID;
- (void)gotoCheckoutViewController;
- (void)gotoCoOrderViewController;
- (_Bool)canPopupFoodView;
- (_Bool)isShowAnyPopUp;
- (id)currentNavigationController;
- (void)popupFoodViewIfCan;
- (void)autoPopupFoodView;
- (void)dismissAllPopupViews;
- (void)showCoudan;
- (void)confirmCart;
- (void)clearCart;
- (void)confirmAction;
- (void)popupFoodView;
- (void)popupFoodViewAction;
- (void)showCartView:(_Bool)arg1;
- (void)loadCartViewNotAvailableHintLabelIfNeed;
- (void)updateWithRestaurantInfo:(id)arg1;
- (void)updateWithCartContext:(id)arg1;
- (void)configCommonCartView:(id)arg1;
- (void)loadCommonCartView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

