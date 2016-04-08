/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "EmoticonStoreMgrExt.h"
#import "MMService.h"
#import "IEmoticonPackageMgrExt.h"
#import "EmoticonStoreItemExt.h"
#import "MMService.h"

@class NSString, NSMutableDictionary;

@interface EmoticonPackageStateMgr : MMService <MMService, EmoticonStoreMgrExt, EmoticonStoreItemExt, IEmoticonPackageMgrExt> {
	NSMutableDictionary* m_dicState;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableDictionary* m_dicState;
-(void).cxx_destruct;
-(void)OnEmoticonPackageDownloadStatusChanged:(id)changed IsDownloaded:(BOOL)downloaded;
-(void)OnEmoticonStoreItemInstallFailed:(id)failed;
-(void)OnEmoticonStoreItemInstallFinished:(id)finished;
-(void)OnEmoticonStoreItemInstallStarted:(id)started;
-(void)OnEmoticonStoreItemGetProductFinished:(id)finished;
-(void)resetState:(id)state;
-(void)OnEmoticonStoreItemDownloadFailed:(id)failed;
-(void)OnEmoticonStoreItemDownloadFinished:(id)finished;
-(void)OnEmoticonStoreItemDownloadProgressChanged:(id)changed CurrLength:(unsigned)length TotalLength:(unsigned)length3;
-(void)OnEmoticonStoreItemChanged:(id)changed;
-(void)OnBuyEmoticonItemCanceled:(id)canceled;
-(void)OnBuyEmoticonItemFailed:(id)failed;
-(void)OnBuyEmoticonItemSuccess:(id)success;
-(void)removeItem:(id)item;
-(int)getStateByItem:(id)item;
-(void)addOrReplaceItem:(id)item withState:(int)state;
-(float)getDownloadProgress:(id)progress;
-(void)cancelDownloadItem:(id)item;
-(void)downloadEmoticonItem:(id)item isAutomatic:(BOOL)automatic;
-(void)downloadHardCodePackage:(id)package;
-(int)buyEmoticonItem:(id)item;
-(void)onServiceReloadData;
-(void)onServiceInit;
-(id)init;
-(void)dealloc;
@end
