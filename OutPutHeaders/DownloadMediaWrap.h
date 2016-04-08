/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class WCMediaItem, UIImage, NSString;

@interface DownloadMediaWrap : XXUnknownSuperclass {
	WCMediaItem* mediaItem;
	int downloadType;
	NSString* downloadID;
	NSString* downloadMd5;
	BOOL isDownloading;
	UIImage* resultImage;
	BOOL isUseWebpDownload;
}
@property(assign, nonatomic) BOOL isUseWebpDownload;
@property(retain, nonatomic) UIImage* resultImage;
@property(assign, nonatomic) BOOL isDownloading;
@property(readonly, assign, nonatomic) NSString* downloadMd5;
@property(readonly, assign, nonatomic) NSString* downloadID;
@property(assign, nonatomic) int downloadType;
@property(retain, nonatomic) WCMediaItem* mediaItem;
+(id)getDownloadID:(id)anId downloadType:(int)type;
-(void).cxx_destruct;
-(id)initWithMediaItem:(id)mediaItem downloadType:(int)type;
@end
