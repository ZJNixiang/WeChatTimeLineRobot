/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "PBCoding.h"

@class NSString, NSMutableDictionary;

@interface MMDiskUsageScanStat : XXUnknownSuperclass <PBCoding> {
	BOOL m_isDelUnknowData;
	unsigned m_totalStartTime;
	unsigned m_totalEndTime;
	unsigned m_totalUsedTime;
	unsigned m_totalScanCount;
	unsigned m_totalFolderNum;
	unsigned m_totalFileNum;
	NSMutableDictionary* m_dicTotalBizStat;
	unsigned m_totalDelFolderNum;
	unsigned m_totalDelFileNum;
	NSMutableDictionary* m_dicTotalFileTypeInUseStat;
	unsigned m_curStartTime;
	unsigned m_curEndTime;
	unsigned m_curUsedTime;
	unsigned m_curScannedFolderNum;
	unsigned m_curAddFolderNum;
	unsigned m_curScannedFileNum;
	unsigned m_curDelFolderNum;
	unsigned m_curDelFileNum;
	unsigned long long m_totalFileSize;
	unsigned long long m_totalDelFileSize;
	unsigned long long m_curDelFileSize;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL m_isDelUnknowData;
@property(assign, nonatomic) unsigned long long m_curDelFileSize;
@property(assign, nonatomic) unsigned m_curDelFileNum;
@property(assign, nonatomic) unsigned m_curDelFolderNum;
@property(assign, nonatomic) unsigned m_curScannedFileNum;
@property(assign, nonatomic) unsigned m_curAddFolderNum;
@property(assign, nonatomic) unsigned m_curScannedFolderNum;
@property(assign, nonatomic) unsigned m_curUsedTime;
@property(assign, nonatomic) unsigned m_curEndTime;
@property(assign, nonatomic) unsigned m_curStartTime;
@property(assign, nonatomic) unsigned long long m_totalDelFileSize;
@property(assign, nonatomic) unsigned m_totalDelFileNum;
@property(assign, nonatomic) unsigned m_totalDelFolderNum;
@property(retain, nonatomic) NSMutableDictionary* m_dicTotalFileTypeInUseStat;
@property(retain, nonatomic) NSMutableDictionary* m_dicTotalBizStat;
@property(assign, nonatomic) unsigned long long m_totalFileSize;
@property(assign, nonatomic) unsigned m_totalFileNum;
@property(assign, nonatomic) unsigned m_totalFolderNum;
@property(assign, nonatomic) unsigned m_totalScanCount;
@property(assign, nonatomic) unsigned m_totalUsedTime;
@property(assign, nonatomic) unsigned m_totalEndTime;
@property(assign, nonatomic) unsigned m_totalStartTime;
+(void)initialize;
-(void).cxx_destruct;
-(id)currentScanSummary;
-(void)markStopTime:(BOOL)time;
-(void)markStartTime;
-(id)init;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end
