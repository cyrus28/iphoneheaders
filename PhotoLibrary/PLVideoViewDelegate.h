/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "NSObject.h"


@protocol PLVideoViewDelegate <NSObject>
@optional
-(BOOL)videoViewShouldPlayImmediately:(id)videoView;
-(BOOL)videoViewShouldDisplayScrubber:(id)videoView;
-(float)videoViewScrubberYOrigin:(id)origin;
-(BOOL)videoViewShouldDisplayOverlay:(id)videoView;
-(BOOL)videoViewShouldRemoveFromViewHierarchy:(id)videoView;
-(BOOL)videoViewCanBeginPlayback:(id)playback;
-(void)videoViewIsReadyToBeginPlayback:(id)beginPlayback;
-(void)videoViewPlaybackDidFail:(id)videoViewPlayback;
-(void)videoViewDidBeginPlayback:(id)videoView;
-(void)videoViewDidPausePlayback:(id)videoView;
-(void)videoViewDidEndPlayback:(id)videoView didFinish:(BOOL)finish;
-(void)videoViewDidBeginScrubbing:(id)videoView;
-(void)videoViewDidEndScrubbing:(id)videoView;
-(void)videoViewDidBeginRemaking:(id)videoView;
-(void)videoViewDidEndRemaking:(id)videoView temporaryPath:(id)path;
-(void)videoView:(id)view remakingProgressDidChange:(float)remakingProgress;
-(void)videoViewDidBeginEditing:(id)videoView;
-(BOOL)videoViewCanFlushOnViewRemoval:(id)removal;
-(BOOL)videoViewCanCreateMetadata:(id)metadata;
@end

