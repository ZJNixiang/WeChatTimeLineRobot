/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMObject.h"
#import "MMPackageDownloadMgrExt.h"

@class RecoverDataWorker, NSMutableDictionary;
@protocol RecoverDataManagerDelegate;

@interface RecoverDataManager : MMObject <MMPackageDownloadMgrExt> {
	NSMutableDictionary* m_dicRecoverData;
	RecoverDataWorker* m_worker;
	id<RecoverDataManagerDelegate> m_delegate;
}
-(void).cxx_destruct;
-(id)getUploadPath:(id)path;
-(BOOL)doRecover:(id)recover;
-(BOOL)isLowSpaceForDBRecover:(id)dbrecover suggestSize:(unsigned long long*)size restSize:(unsigned long long*)size3;
-(id)pathOfRecoverDB:(id)recoverDB;
-(BOOL)isRecoverDB:(id)db;
-(BOOL)readItem:(XmlReaderNode_t*)item item:(id)item2;
-(void)parseConfigItems:(CXmlReader*)items name:(id)name order:(unsigned*)order items:(id)items4;
-(BOOL)parseConfigContent:(id)content xmlReader:(CXmlReader*)reader;
-(void)receiveConfigContent:(id)content;
-(void)notifyAddUploadData:(id)data order:(unsigned)order items:(id)items;
-(void)notifyAddRecoverData:(id)data order:(unsigned)order;
-(void)addRecoverData:(id)data order:(unsigned)order arrItems:(id)items;
-(void)downloadPackage:(id)package;
-(void)downloadConfigs;
-(void)dealloc;
-(id)initWithDelegate:(id)delegate;
-(void)onPackageDownloadFinish:(id)finish package:(id)package;
-(void)onPackageListUpdated:(id)updated;
@end
