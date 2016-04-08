/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITextFieldDelegate.h"
#import "WeChat-Structs.h"
#import "IAutoVerifySMSExt.h"
#import "WCAccountBaseViewController.h"

@class NSString, UIButton, WCAccountTextFieldItem, WCBaseKeyboardToolBar, WCUITextField;
@protocol WCAccountPhoneVerifyViewControllerDelegate;

@interface WCAccountPhoneVerifyViewController : WCAccountBaseViewController <IAutoVerifySMSExt, UITextFieldDelegate> {
	UIButton* m_noCodeBtn;
	UIButton* m_doneBtn;
	WCUITextField* m_textFieldVerifyCode;
	WCAccountTextFieldItem* m_textFieldVerifyCodeItem;
	WCBaseKeyboardToolBar* m_keyboardBar;
	id<WCAccountPhoneVerifyViewControllerDelegate> m_delegate;
	int m_iCountDown;
	int m_iCount;
	int m_stypeType;
	int m_fbReg;
	int m_qqReg;
	int m_emailReg;
	BOOL m_bFirstLoop;
	BOOL m_bShowCloseSafeDevice;
	UIButton* m_btnQQReg;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(BOOL)recoverFromArchive:(id)archive;
-(void)OnHandleOpenAutoVerifySMS:(id)sms;
-(void)WCBaseInfoItemEditChanged:(id)changed;
-(void)WCBaseInfoItemPressReturnKey:(id)key;
-(void)setDelegate:(id)delegate;
-(void)didReceiveMemoryWarning;
-(void)vcResignFirstResponder;
-(void)vcBecomeFirstResponder;
-(void)initView;
-(void)onNoCodeClicked:(id)clicked;
-(void)onPhoneVerifyAgain;
-(void)startTimer;
-(void)reportTime:(id)time;
-(void)stopTimer;
-(void)updateSendVerifyCodeButton;
-(void)showCloseSafeDevice;
-(void)onCloseSafeDevice;
-(void)jumpToUnProtectPage;
-(BOOL)isShowEmailReg;
-(BOOL)isShowQQReg;
-(BOOL)isFBClose;
-(BOOL)needCount;
-(void)initNavigationBar;
-(void)onPhoneVerifyBack;
-(void)onNext;
-(void)dealloc;
-(id)init;
@end
