/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "NSObject.h"


@protocol WCSelectorViewDataSource <NSObject>
-(BOOL)shouldShowDeleteView;
-(CGSize)sizeForViews;
-(id)viewAtIndex:(unsigned)index;
-(unsigned)numbersOfViews;
@optional
-(void)didSelectViewAtIndex:(unsigned)index;
@end

