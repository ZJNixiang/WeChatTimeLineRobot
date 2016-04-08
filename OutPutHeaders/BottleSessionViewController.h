/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCActionSheetDelegate.h"
#import "IMMNewSessionMgrExt.h"
#import "MMUIViewController.h"
#import "UITableViewDelegate.h"
#import "IBottleSessionExt.h"
#import "UITableViewDataSource.h"
#import "FloatBottleContentLogicDelegate.h"

@class UILabel, NSArray, NSString, MMTableView, NSMutableDictionary;

@interface BottleSessionViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, IBottleSessionExt, FloatBottleContentLogicDelegate, IMMNewSessionMgrExt> {
	MMTableView* m_tableView;
	UILabel* m_tipLabel;
	NSMutableDictionary* m_dicSessionCellCache;
	NSArray* m_arrNewArriveList;
	BOOL m_bFromMainFrame;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL m_bFromMainFrame;
@property(retain, nonatomic) NSArray* m_arrNewArriveList;
-(void).cxx_destruct;
-(void)onSessionTotalUnreadCountChange:(unsigned long)change;
-(void)showTips:(id)tips;
-(void)deleteThrowBackBottle:(id)bottle;
-(void)BottleSessionChanged:(id)changed;
-(void)BottleNeedReload;
-(void)updateSessionByName:(id)name;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)dealloc;
-(void)viewDidLoad;
-(id)init;
-(void)pluginsChanged:(id)changed;
-(void)viewWillBePoped:(BOOL)view;
-(void)viewWillBePushed:(BOOL)view;
-(void)initData;
-(void)reloadNewArrList;
-(BOOL)isNewArrive:(id)arrive;
-(void)initView;
-(void)updateLeftBarButtonItem;
-(void)initRightButton;
-(void)updateRightButtonState;
-(void)onJumpToBottleMainFrame:(id)bottleMainFrame;
-(void)onEditContact:(id)contact;
-(void)OnLeave:(id)leave;
-(void)goToInfoViewController:(id)infoViewController;
-(void)UpdateTipLabel;
-(void)initTableView;
-(void)UpdateTableView;
-(void)UpdateHeaderView;
-(void)UpdateTitle;
@end
