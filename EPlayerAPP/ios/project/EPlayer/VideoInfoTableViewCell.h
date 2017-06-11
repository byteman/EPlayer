//
//  VideoInfoTableViewCell.h
//  EPlayer
//
//  Created by GaoPeng on 2017/6/10.
//  Copyright © 2017年 EC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Photos/Photos.h>

typedef NS_ENUM(NSUInteger, VideoCellType)
{
    CameraVideoCell     = 0,
    UploadVideoCell     = 1,
    iTunesVideoCell     = 2,
};

@interface VideoInfoTableViewCell : UITableViewCell
@property (nonatomic, assign) CGFloat fileSize;
@property (nonatomic, assign) NSString *fileURL;
@property (nonatomic, assign) NSString *fileName;
@property (nonatomic, assign) NSString *fileType;
@property (nonatomic, assign) NSString *updateTime;
@property (nonatomic, assign) NSString *videoDuration;
@property (nonatomic, assign) AVURLAsset *urlAsset;
@property (nonatomic, assign) VideoCellType videoCellType;
- (void)setCellSelected : (BOOL)selected;
- (void)configuVideoInfoCell;
@end
