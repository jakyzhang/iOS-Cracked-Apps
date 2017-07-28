//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SongList.h"

@class UIImage;

@interface AppSongList : SongList
{
    int startIndex;
    int curPlayIndex;
    UIImage *m_image;
}

- (void).cxx_destruct;
- (void)deleteSongsBySongURL:(id)arg1;
- (void)deleteSongArrayBySongName:(id)arg1;
- (void)deleteSongArrayBySongURL:(id)arg1;
- (void)deleteSongArray:(id)arg1;
- (void)deleteSong:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)songs;
- (id)songInfoForIndex:(int)arg1;
- (int)songInfoIndexForSongName:(id)arg1;
- (int)songInfoIndexForHash:(id)arg1;
- (int)songInfoIndexForSongInfo:(id)arg1;
- (int)songInfoIndexForURL:(id)arg1;
- (id)songInfoForURL:(id)arg1;
- (void)setCurPlayIndex:(int)arg1;
- (int)curPlayIndex;
- (void)setStartIndex:(int)arg1;
- (int)startIndex;
- (void)dealloc;
- (int)songCount;
- (void)deleteSongAtIndex:(int)arg1;
- (void)addSongAtFront:(id)arg1;
- (void)addSong:(id)arg1;
- (void)addSongs:(id)arg1;
- (void)clearAllSongs;

@end
