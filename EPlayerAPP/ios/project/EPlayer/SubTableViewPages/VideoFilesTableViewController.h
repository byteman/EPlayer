//
//  WMTableViewController.h
//  Demo
//
//  Created by Mark on 16/7/25.
//  Copyright © 2016年 Wecan Studio. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MainViewController.h"
#import <Photos/PHPhotoLibrary.h>

typedef NS_ENUM(NSUInteger, VideoTableViewType)
{
    CameraVideosTableView     = 0,
    UploadVideosTableView     = 1,
    iTunesVideosTableView     = 2,
};

typedef NS_ENUM(NSUInteger, AccessMediaLibraryRight)
{
    CanAccess     = 0,
    CanNotAccess  = 1,
    NeedRequest   = 2,
};

@interface VideoFilesTableViewController : UITableViewController <PHPhotoLibraryChangeObserver>
@property (nonatomic, assign) AccessMediaLibraryRight accessMeidaRight;
@property (nonatomic, assign) VideoTableViewType tableViewType;
@property (nonatomic, assign) MainViewController *mainVC;
- (void)setVideoFilesFolder :(NSString*)folderPath;
- (void)setNoMediaLibraryAuthorization;
- (void)reloadAllVideosInfo;
- (void)playFailed;
@end
