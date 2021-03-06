//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "TBSCInputBarDeletage.h"
#import "TBSNSSLLTableViewDataSourceDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDelegate.h"

@class NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, NSURL, TBSCCommentListOperation, TBSCInputBar, TBSNSFeedCommentItem, TBSNSLoadingView, TBSNSSLLDetaiAccountView, TBSNSSLLDetailBaseItem, TBSNSSLLDetailDataLoader, TBSNSSLLDetailDegradeView, TBSNSSLLDetailExtendItem, TBSNSSLLDetailNavHandler, TBSNSSLLDetailTableDataSource, UIActionSheet, UIButton, UIView;

@interface TBSNSSLLDetailCommentTableView : UITableView <TBSCInputBarDeletage, UITableViewDelegate, UIActionSheetDelegate, TBSNSSLLTableViewDataSourceDelegate>
{
    _Bool _isReplyComment;
    _Bool _isCache;
    _Bool _isHotComment;
    _Bool _isNextPaging;
    _Bool _hasNoComment;
    _Bool _istableDataFinish;
    NSURL *_URL;
    id <TBSNSSLLDetailCommentTableViewDelegate> _navDelegate;
    double _webViewHeight;
    CDUnknownBlockType _commentComplete;
    TBSCInputBar *_inputBar;
    UIButton *_bgBtn;
    UIView *_tableHeader;
    UIView *_noCommentView;
    TBSNSSLLDetaiAccountView *_accountView;
    TBSNSSLLDetailDegradeView *_degradeView;
    TBSNSLoadingView *_nextPageLoadingView;
    UIActionSheet *_actionSheet;
    TBSNSSLLDetailDataLoader *_dataLoader;
    TBSCCommentListOperation *_commentOperate;
    TBSNSSLLDetailTableDataSource *_tableDataSource;
    TBSNSSLLDetailNavHandler *_navHandler;
    TBSNSSLLDetailBaseItem *_baseItem;
    TBSNSSLLDetailExtendItem *_extendItem;
    TBSNSFeedCommentItem *_selectedCommentItem;
    unsigned long long _userId;
    double _oldOffset;
    NSString *_commentContent;
    NSMutableArray *_reCommendAry;
    NSMutableArray *_hotCommentAry;
    NSMutableArray *_recentCommentAry;
    NSMutableArray *_itemAry;
    NSMutableDictionary *_itemOperaterDic;
    NSIndexPath *_selectIndexPath;
}

@property(retain, nonatomic) NSIndexPath *selectIndexPath; // @synthesize selectIndexPath=_selectIndexPath;
@property(retain, nonatomic) NSMutableDictionary *itemOperaterDic; // @synthesize itemOperaterDic=_itemOperaterDic;
@property(retain, nonatomic) NSMutableArray *itemAry; // @synthesize itemAry=_itemAry;
@property(retain, nonatomic) NSMutableArray *recentCommentAry; // @synthesize recentCommentAry=_recentCommentAry;
@property(retain, nonatomic) NSMutableArray *hotCommentAry; // @synthesize hotCommentAry=_hotCommentAry;
@property(retain, nonatomic) NSMutableArray *reCommendAry; // @synthesize reCommendAry=_reCommendAry;
@property(copy, nonatomic) NSString *commentContent; // @synthesize commentContent=_commentContent;
@property(nonatomic) double oldOffset; // @synthesize oldOffset=_oldOffset;
@property(nonatomic) unsigned long long userId; // @synthesize userId=_userId;
@property(nonatomic) _Bool istableDataFinish; // @synthesize istableDataFinish=_istableDataFinish;
@property(nonatomic) _Bool hasNoComment; // @synthesize hasNoComment=_hasNoComment;
@property(nonatomic) _Bool isNextPaging; // @synthesize isNextPaging=_isNextPaging;
@property(nonatomic) _Bool isHotComment; // @synthesize isHotComment=_isHotComment;
@property(nonatomic) _Bool isCache; // @synthesize isCache=_isCache;
@property(nonatomic) _Bool isReplyComment; // @synthesize isReplyComment=_isReplyComment;
@property(retain, nonatomic) TBSNSFeedCommentItem *selectedCommentItem; // @synthesize selectedCommentItem=_selectedCommentItem;
@property(retain, nonatomic) TBSNSSLLDetailExtendItem *extendItem; // @synthesize extendItem=_extendItem;
@property(retain, nonatomic) TBSNSSLLDetailBaseItem *baseItem; // @synthesize baseItem=_baseItem;
@property(retain, nonatomic) TBSNSSLLDetailNavHandler *navHandler; // @synthesize navHandler=_navHandler;
@property(retain, nonatomic) TBSNSSLLDetailTableDataSource *tableDataSource; // @synthesize tableDataSource=_tableDataSource;
@property(retain, nonatomic) TBSCCommentListOperation *commentOperate; // @synthesize commentOperate=_commentOperate;
@property(retain, nonatomic) TBSNSSLLDetailDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) UIActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) TBSNSLoadingView *nextPageLoadingView; // @synthesize nextPageLoadingView=_nextPageLoadingView;
@property(retain, nonatomic) TBSNSSLLDetailDegradeView *degradeView; // @synthesize degradeView=_degradeView;
@property(retain, nonatomic) TBSNSSLLDetaiAccountView *accountView; // @synthesize accountView=_accountView;
@property(retain, nonatomic) UIView *noCommentView; // @synthesize noCommentView=_noCommentView;
@property(retain, nonatomic) UIView *tableHeader; // @synthesize tableHeader=_tableHeader;
@property(retain, nonatomic) UIButton *bgBtn; // @synthesize bgBtn=_bgBtn;
@property(retain, nonatomic) TBSCInputBar *inputBar; // @synthesize inputBar=_inputBar;
@property(copy, nonatomic) CDUnknownBlockType commentComplete; // @synthesize commentComplete=_commentComplete;
@property(nonatomic) double webViewHeight; // @synthesize webViewHeight=_webViewHeight;
@property(nonatomic) __weak id <TBSNSSLLDetailCommentTableViewDelegate> navDelegate; // @synthesize navDelegate=_navDelegate;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)dealloc;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dealWithNewComment:(id)arg1 isSuccess:(_Bool)arg2 error:(id)arg3;
- (void)operateSendNewComment:(id)arg1;
- (void)tbscInputBar:(id)arg1 willChangeHeight:(double)arg2;
- (void)tbscInputBar:(id)arg1 keyboardHeight:(double)arg2;
- (void)tbscInputBar:(id)arg1 textToSend:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)SLLDetailTableviewCellLongPressed:(id)arg1;
- (void)performSelectorWithIndex:(int)arg1;
- (void)addBlackLibrary;
- (void)onBlackList;
- (void)onReport;
- (void)onDelete;
- (void)onCopy;
- (id)setUpActionSheetItem:(unsigned long long)arg1 isSelf:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableViewRefreshData;
- (void)nextPage;
- (void)scrollToRecentComment;
- (void)scrolltoNewComment;
- (_Bool)isForReplyComment;
- (void)initUserId;
- (void)showAlert:(id)arg1;
- (void)beginInput;
- (_Bool)isRecentCommentEmpty;
- (_Bool)isHotCommentEmpty;
- (void)loadDataWhetherCache:(_Bool)arg1;
- (void)onBgBtnClicked;
- (void)setNavBar;
- (void)addInputBarListener;
- (void)updateWithBaseItem:(id)arg1;
- (void)updateSubviews;
- (void)setupView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

