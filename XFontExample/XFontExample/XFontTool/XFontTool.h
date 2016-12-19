//
//  XFontTool.h
//  XFontExample
//
//  Created by xlx on 16/12/20.
//  Copyright © 2016年 xlx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface XFontTool : NSObject


+(BOOL)isDownloadFont:(NSString *)fontName;


+(void)downLoadFontWithFontName:(NSString *)fontName progress:(void(^)(CGFloat pro))progress complete:(void(^)(void))complete errorMsg:(void(^)(NSString *message))errorMsg;
@end
