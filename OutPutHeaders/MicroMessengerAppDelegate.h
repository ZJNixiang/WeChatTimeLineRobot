/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "UIApplicationDelegate.h"
#import "UIAlertViewDelegate.h"
#import "ResourceMonitorDelegate.h"
#import "MMUIResponder.h"
#import "MMCommonAdapterDelegate.h"

@class MMSafeModeViewController, UIWindow, UILabel, CAppViewControllerManager, NSString, MMServiceCenter, MMUIWindow, VoIPTokenRetriveObject, CMainControll, NSRecursiveLock, CAppObserverCenter, ResourceInfo, ResourceMonitor;

@interface MicroMessengerAppDelegate : MMUIResponder <MMCommonAdapterDelegate, UIApplicationDelegate, UIAlertViewDelegate, ResourceMonitorDelegate> {
	CAppObserverCenter* m_appObserverCenter;
	CMainControll* m_mainController;
	MMServiceCenter* m_serviceCenter;
	CAppViewControllerManager* m_appViewControllerMgr;
	NSString* m_nsToken;
	NSString* m_nsSound;
	NSString* m_nsVoipSound;
	unsigned long m_uLastTimeResignActive;
	unsigned long m_uInitViewType;
	long m_tTotalRunningTime;
	long m_tLastActiveTime;
	int m_appVerCompareWithLastRun;
	BOOL m_isActive;
	UILabel* m_changeValueLabel;
	UILabel* m_resourceLabel;
	MMUIWindow* m_resourceWindow;
	ResourceInfo* m_lastResourceInfo;
	ResourceMonitor* m_resourceMonitor;
	NSRecursiveLock* mActiveLock;
	BOOL mInBackground;
	BOOL mInBackGroundFetch;
	unsigned long long m_ui64BackGroundFetchStopTime;
	id m_fetchCompletionHandler;
	MMSafeModeViewController* m_safeModeViewController;
	UIWindow* _window;
	VoIPTokenRetriveObject* _m_voipTokenRetriveObject;
}
@property(retain, nonatomic) UIWindow* window;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) VoIPTokenRetriveObject* m_voipTokenRetriveObject;
@property(assign, nonatomic) unsigned long long m_ui64BackGroundFetchStopTime;
@property(assign, nonatomic) BOOL mInBackGroundFetch;
@property(retain, nonatomic) NSString* m_nsVoipSound;
@property(retain, nonatomic) NSString* m_nsSound;
@property(retain, nonatomic) NSString* m_nsToken;
@property(retain, nonatomic) CMainControll* m_mainController;
@property(readonly, assign, nonatomic) BOOL m_isActive;
@property(readonly, assign, nonatomic) CAppViewControllerManager* m_appViewControllerMgr;
@property(readonly, assign, nonatomic) CAppObserverCenter* m_appObserverCenter;
@property(retain, nonatomic) NSRecursiveLock* mActiveLock;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)setInBackground:(BOOL)background;
-(BOOL)getInBackground;
-(void)onUpdateResourceInfo:(id)info;
-(void)setUserAgent;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)closeMainFrameWithoutReset;
-(void)delayStopMain;
-(void)closeMainFrameInternal;
-(void)dealloc;
-(int)GetAppVerCompareWithLastRun;
-(void)saveAppVersion;
-(void)detectAppFirstRunOrFirstRunAfterUpgrade;
-(void)firstStartAfterUpgradeDowngrade;
-(void)didReceiveLocalMemoryWarning:(id)warning;
-(void)applicationDidReceiveMemoryWarning:(id)application;
-(void)clearURLCache;
-(void)clearServiceMemory;
-(void)handleMemoryWarning;
-(void)application:(id)application didUpdateUserActivity:(id)activity;
-(void)application:(id)application didFailToContinueUserActivityWithType:(id)type error:(id)error;
-(BOOL)application:(id)application continueUserActivity:(id)activity restorationHandler:(id)handler;
-(BOOL)application:(id)application willContinueUserActivityWithType:(id)type;
-(void)application:(id)application performActionForShortcutItem:(id)shortcutItem completionHandler:(id)handler;
-(void)setupForShortcut;
-(void)application:(id)application handleWatchKitExtensionRequest:(id)request reply:(id)reply;
-(BOOL)application:(id)application openURL:(id)url sourceApplication:(id)application3 annotation:(id)annotation;
-(BOOL)application:(id)application handleOpenURL:(id)url bundleID:(id)anId annotation:(id)annotation;
-(id)decodeUrlAttrs:(id)attrs;
-(BOOL)handleOpenURL:(id)url bundleID:(id)anId;
-(void)application:(id)application didChangeStatusBarFrame:(CGRect)frame;
-(void)application:(id)application willChangeStatusBarFrame:(CGRect)frame;
-(void)application:(id)application willChangeStatusBarOrientation:(int)orientation duration:(double)duration;
-(void)applicationWillTerminate:(id)application;
-(void)applicationDidBecomeActive:(id)application;
-(void)application:(id)application didChangeStatusBarOrientation:(int)orientation;
-(void)applicationWillEnterForeground:(id)application;
-(void)handleOpenPush;
-(void)applicationDidEnterBackground:(id)application;
-(void)applicationWillResignActive:(id)application;
-(void)resetBadge;
-(void)application:(id)application handleEventsForBackgroundURLSession:(id)backgroundURLSession completionHandler:(id)handler;
-(float)getMainWindowHeight;
-(float)getMainWindowWidth;
-(void)ClearBackGroundFetch;
-(void)application:(id)application handleActionWithIdentifier:(id)identifier forRemoteNotification:(id)remoteNotification withResponseInfo:(id)responseInfo completionHandler:(id)handler;
-(void)application:(id)application handleActionWithIdentifier:(id)identifier forRemoteNotification:(id)remoteNotification completionHandler:(id)handler;
-(void)application:(id)application handleActionWithIdentifier:(id)identifier forLocalNotification:(id)localNotification withResponseInfo:(id)responseInfo completionHandler:(id)handler;
-(void)application:(id)application handleActionWithIdentifier:(id)identifier forLocalNotification:(id)localNotification completionHandler:(id)handler;
-(void)application:(id)application performFetchWithCompletionHandler:(id)completionHandler;
-(void)application:(id)application didReceiveLocalNotification:(id)notification;
-(void)application:(id)application didReceiveRemoteNotification:(id)notification;
-(void)handleApnsDeepLink:(id)link;
-(void)jumpToChatWhenReceivePush:(id)chatWhenReceivePush remotePush:(BOOL)push;
-(void)application:(id)application didFailToRegisterForRemoteNotificationsWithError:(id)error;
-(void)application:(id)application didRegisterForRemoteNotificationsWithDeviceToken:(id)deviceToken;
-(void)application:(id)application didRegisterUserNotificationSettings:(id)settings;
-(void)doSendTokenTimeOut;
-(void)doSendToken:(id)token error:(BOOL)error;
-(BOOL)application:(id)application didFinishLaunchingWithOptions:(id)options;
-(void)mainUISetting;
-(void)monitorResource;
-(void)mainThreadMonitorStart;
-(void)continueMainLaunching:(id)launching;
-(void)beforeMainLauching;
-(void)logEssencialInfo;
-(void)clearServiceObject;
-(void)initServiceObject;
-(void)registerLazyExtensionListener;
-(void)registerClsMethodObserver;
-(void)releaseSeviceCenter;
-(void)RenamePath;
-(void)handleMMSafeModeDidEndNotification:(id)handleMMSafeMode;
-(BOOL)shouldEnterSafeMode;
-(void)LogFeatureIdKey:(unsigned)key key:(unsigned)key2 value:(unsigned)value isKeyLog:(bool)log;
-(void)LogFeatureExt:(unsigned long)ext logExt:(id)ext2 isReportNow:(bool)now isImportant:(bool)important;
-(void)NetworkLogOutput:(id)output;
-(void)LogWithinCommon:(int)common module:(const char*)module file:(const char*)file line:(int)line funcName:(const char*)name message:(id)message;
-(BOOL)ShouldLog:(int);
-(BOOL)IsChinese;
-(void)setupMMCommonAdapter;
@end

