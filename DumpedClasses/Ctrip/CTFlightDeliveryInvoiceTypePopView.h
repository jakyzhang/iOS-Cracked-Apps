//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTFlightCommonUpPushSubView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTFlightDeliveryInvoiceTypePopViewModel, NSString, UITableView;

@interface CTFlightDeliveryInvoiceTypePopView : CTFlightCommonUpPushSubView <UITableViewDelegate, UITableViewDataSource>
{
    CTFlightDeliveryInvoiceTypePopViewModel *_viewModel;
    id <CTFlightDeliveryInvoiceTypePopViewDelegate> _delegate;
    UITableView *_pTableView;
}

@property(retain, nonatomic) UITableView *pTableView; // @synthesize pTableView=_pTableView;
@property(nonatomic) __weak id <CTFlightDeliveryInvoiceTypePopViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CTFlightDeliveryInvoiceTypePopViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)headerViewAction;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)contentHeight;
- (void)setupDeliveryInvoiceTypePopView:(id)arg1 delegate:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

