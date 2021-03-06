/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "IAsyncTaskProtocol.h"
#import "IFavoritesExt.h"

@class FTSFavDB, NSMutableArray, FTSFavIndexState, FTSDB, NSRecursiveLock, NSArray, NSString, AsyncTaskQueueEngine;

@interface FTSFavMgr : XXUnknownSuperclass <IAsyncTaskProtocol, IFavoritesExt> {
	FTSFavDB* _ftsFavDB;
	AsyncTaskQueueEngine* _asyncTaskQueueEngine;
	FTSDB* _ftsDB;
	NSRecursiveLock* _lock;
	BOOL _hasInitTask;
	BOOL _hasForegroundTask;
	BOOL _hasBackgroundTask;
	NSMutableArray* _arrHomePageLastQueryKeywords;
	NSString* _lastHomePageQueryText;
	NSString* _newestHomePageQueryText;
	BOOL _hasSearchDoneForHomePage;
	NSMutableArray* _arrSearchItemForHomePage;
	NSMutableArray* _arrDetailPageLastQueryKeywords;
	NSString* _lastDetailPageQueryText;
	NSString* _newestDetailPageQueryText;
	BOOL _hasSearchDoneForDetailPage;
	NSMutableArray* _arrSearchItemForDetailPage;
	FTSFavIndexState* _favIndexState;
	BOOL _hasValidateFavIndex;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* newestDetailPageQueryText;
@property(retain, nonatomic) NSArray* arrDetailPageLastQueryKeywords;
@property(retain, nonatomic) NSString* lastDetailPageQueryText;
@property(retain, nonatomic) NSString* newestHomePageQueryText;
@property(retain, nonatomic) NSArray* arrHomePageLastQueryKeywords;
@property(retain, nonatomic) NSString* lastHomePageQueryText;
-(void).cxx_destruct;
-(void)OnDelAllFavItem;
-(void)OnDelFavoritesItem:(unsigned long)item;
-(void)OnModFavoritesItem:(id)item;
-(void)signalAllTask;
-(void)trySaveIndexState;
-(void)tryLoadIndexState;
-(id)pathForIndexState;
-(void)excuteBackgroundTask;
-(BOOL)hasBackgroundTask;
-(void)excuteForegroundTask;
-(BOOL)hasForegroundTask;
-(void)excuteInitTask;
-(BOOL)hasInitTask;
-(void)traceIndexState;
-(id)getSearchItemForDetailPage:(id)detailPage index:(unsigned)index;
-(id)getSearchItemsForDetailPage:(id)detailPage;
-(BOOL)hasSearchDoneForDetailPage:(id)detailPage;
-(void)cancelSearchForDetailPage;
-(void)asyncSearchTextForDetailPage:(id)detailPage;
-(void)searchCompletelyForDetailPage:(id)detailPage;
-(id)getSearchItemForHomePage:(id)homePage index:(unsigned)index;
-(unsigned)getSearchItemCountForHomePage:(id)homePage;
-(BOOL)hasSearchDoneForHomePage:(id)homePage;
-(BOOL)hasSearchResultForHomePage:(id)homePage;
-(void)cancelSearchForHomePage;
-(void)asyncSearchTextForHomePage:(id)homePage;
-(void)searchCompletelyForHomePage:(id)homePage;
-(void)reloadDB;
-(void)initDB:(id)db lock:(id)lock asyncTaskQueueEngine:(id)engine;
-(void)dealloc;
-(id)init;
-(void)setNeedsInitTask;
-(void)resetIndexState;
-(void)onRecoverFTSDB;
-(void)onPreRecoverFTSDB;
@end

