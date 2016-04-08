/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"
#import "MoveWithTouchAlgorithmDelegate.h"

@class MoveWithTouchAlgorithm, NSString;
@protocol SmallCameraViewDelegate;

@interface SmallCameraView : XXUnknownSuperclass <MoveWithTouchAlgorithmDelegate> {
	BOOL _hasMoved;
	MoveWithTouchAlgorithm* m_moveAlgorithm;
	id<SmallCameraViewDelegate> delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) MoveWithTouchAlgorithm* m_moveAlgorithm;
@property(assign, nonatomic) id<SmallCameraViewDelegate> delegate;
-(void).cxx_destruct;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(id)onMoveWithTouchAlgorithmRequestView;
-(void)onMoveWithTouchAlgorithmTaped;
-(void)onMoveWithTouchAlgorithmResultMoveTo:(CGPoint)to;
-(void)onMoveEndWithTouchAlgorithmResultMoveTo:(CGPoint)to;
-(void)adsorbToWindow;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
@end
