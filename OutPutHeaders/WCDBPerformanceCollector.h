/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSRecursiveLock, NSMutableArray;

@interface WCDBPerformanceCollector : XXUnknownSuperclass {
	NSRecursiveLock* m_lock;
	NSMutableArray* m_arrPerformance;
	BOOL m_isOpenReport;
	unsigned long long m_mainThreadMaxSelectTime;
	unsigned long long m_mainThreadMaxInsertTime;
	unsigned long long m_mainThreadMaxUpdateTime;
	unsigned long long m_mainThreadMaxDeleteTime;
	unsigned long long m_mainThreadMaxTransactionTime;
	unsigned long long m_mainThreadMaxOtherTime;
	unsigned long long m_subThreadMaxSelectTime;
	unsigned long long m_subThreadMaxInsertTime;
	unsigned long long m_subThreadMaxUpdateTime;
	unsigned long long m_subThreadMaxDeleteTime;
	unsigned long long m_subThreadMaxTransactionTime;
	unsigned long long m_subThreadMaxOtherTime;
	unsigned long long _m_suspendTimeStamp;
}
@property(assign) unsigned long long m_suspendTimeStamp;
@property(assign) unsigned long long m_subThreadMaxOtherTime;
@property(assign) unsigned long long m_subThreadMaxTransactionTime;
@property(assign) unsigned long long m_subThreadMaxDeleteTime;
@property(assign) unsigned long long m_subThreadMaxUpdateTime;
@property(assign) unsigned long long m_subThreadMaxInsertTime;
@property(assign) unsigned long long m_subThreadMaxSelectTime;
@property(assign) unsigned long long m_mainThreadMaxOtherTime;
@property(assign) unsigned long long m_mainThreadMaxTransactionTime;
@property(assign) unsigned long long m_mainThreadMaxDeleteTime;
@property(assign) unsigned long long m_mainThreadMaxUpdateTime;
@property(assign) unsigned long long m_mainThreadMaxInsertTime;
@property(assign) unsigned long long m_mainThreadMaxSelectTime;
@property(assign) BOOL m_isOpenReport;
+(id)ShareInstance;
-(void).cxx_destruct;
-(id)popPerformance;
-(void)addPerformance:(id)performance;
-(void)resetParameter;
-(BOOL)isExceedLimitTimeOnSubThread:(unsigned long long)thread operationType:(unsigned)type;
-(BOOL)isExceedLimitTimeOnMainThread:(unsigned long long)thread operationType:(unsigned)type;
-(void)clearCacheItemWhenMemoryWarning;
-(id)FetchPerformanceData;
-(void)InputOnePerformance:(id)performance;
-(BOOL)IsExceedLimitTime:(unsigned long long)time operationType:(unsigned)type;
-(id)init;
@end

