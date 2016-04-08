/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"
#import "BrandArticleSearchLogicDelegateForController.h"
#import "MMSearchBarDelegate.h"

@class MMSearchBar, BrandArticleSearchLogic, BrandArticleSearchResultView, NSString, BrandArticleSearchResultLogic;
@protocol BrandArticleSearchControllerDelegate;

@interface BrandArticleSearchController : XXUnknownSuperclass <MMSearchBarDelegate, BrandArticleSearchLogicDelegateForController> {
	MMSearchBar* m_searchBar;
	BrandArticleSearchLogic* m_logic;
	BrandArticleSearchResultView* m_resultView;
	BrandArticleSearchResultLogic* m_resultLogic;
	id<BrandArticleSearchControllerDelegate> m_delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<BrandArticleSearchControllerDelegate> m_delegate;
+(BOOL)isOpenSearchEntry;
-(void).cxx_destruct;
-(void)mmSearchBarTextDidChange:(id)mmSearchBarText;
-(BOOL)mmsearchBarShouldChangeTextInRange:(NSRange)mmsearchBar replacementText:(id)text;
-(void)mmsearchBarTextDidBeginEditing:(id)mmsearchBarText;
-(void)mmsearchBarSearchButtonClicked:(id)clicked;
-(void)mmSearchDisplayControllerWillEndSearch;
-(void)mmSearchDisplayControllerDidBeginSearch;
-(void)mmSearchDisplayControllerWillBeginSearch;
-(void)onSetSearchText:(id)text;
-(void)onOpenMsgSession:(id)session;
-(void)onOpenBrandProfile:(id)profile withParams:(id)params;
-(void)onOpenUrl:(id)url withParams:(id)params;
-(void)onExitSearch;
-(void)openMsgSession:(id)session;
-(void)openBrandProfile:(id)profile withParams:(id)params;
-(void)openWebViewForUrl:(id)url withParams:(id)params;
-(void)hideResultView;
-(void)showResultView;
-(void)clearResultView;
-(void)setupResultView;
-(void)resetResultViewSuperView;
-(void)onClearSearchText;
-(void)resetStatusBarFontColor;
-(void)visitViewToHideDimView:(id)hideDimView;
-(void)hideKeyboardForSearchBar;
-(void)hideSearchBarDimView;
-(void)hideSearchBarResultView;
-(float)searchBarBottomYPosToView:(id)view;
-(id)currentViewController;
-(void)onViewWillBePushed;
-(void)onViewDidPop;
-(void)onViewDidBePoped;
-(void)removeCustomView;
-(id)initWithViewController:(id)viewController tableView:(id)view;
-(void)dealloc;
@end
