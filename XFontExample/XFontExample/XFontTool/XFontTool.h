//
//  XFontTool.h
//  XFontExample
//
//  Created by xlx on 16/12/20.
//  Copyright © 2016年 xlx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define XChineseFont_STBaoli_SC_Regular         @"STBaoli-SC-Regular"       //报隶-简 常规体
#define XChineseFont_HiraginoSansGB_W3          @"HiraginoSansGB-W3"        //冬青黑体简体中文 W3
#define XChineseFont_HiraginoSansGB_W6          @"HiraginoSansGB-W6"        //冬青黑体简体中文 W6
#define XChineseFont_STHeitiSC_Light            @"STHeitiSC-Light"          //黑体-简 细体
#define XChineseFont_STHeitiSC_Medium           @"STHeitiSC-Medium"         //黑体-简 中等
#define XChineseFont_STFangsong                 @"STFangsong"               //华文仿宋 常规体
#define XChineseFont_STXihei                    @"STXihei"                  //华文黑体 细体
#define XChineseFont_STHeiti                    @"STHeiti"                  //华文黑体 常规体
#define XChineseFont_STKaiti                    @"STKaiti"                  //华文楷体 常规体
#define XChineseFont_STSong                     @"STSong"                   //华文宋体 常规体
#define XChineseFont_STKaiti_SC_Regular         @"STKaiti-SC-Regular"       //楷体-简 常规体
#define XChineseFont_STKaiti_SC_Bold            @"STKaiti-SC-Bold"          //楷体-简 粗体
#define XChineseFont_STKaiti_SC_Black           @"STKaiti-SC-Black"         //楷体-简 黑体
#define XChineseFont_FZLTXHK_GBK1_0             @"FZLTXHK--GBK1-0"          //兰亭黑-简 纤黑
#define XChineseFont_FZLTTHK_GBK1_0             @"FZLTTHK--GBK1-0"          //兰亭黑-简 特黑
#define XChineseFont_FZLTZHK_GBK1_0             @"FZLTZHK--GBK1-0"          //兰亭黑-简 中黑
#define XChineseFont_STLibian_SC_Regular        @"STLibian-SC-Regular"      //隶变-简 常规体
#define XChineseFont_HanziPenSC_W3              @"HanziPenSC-W3"            //翩翩体-简 常规体
#define XChineseFont_HanziPenSC_W5              @"HanziPenSC-W5"            //翩翩体-简 粗体
#define XChineseFont_PingFangSC_Regular         @"PingFangSC-Regular"       //苹方-简 常规体
#define XChineseFont_PingFangSC_Ultralight      @"PingFangSC-Ultralight"    //苹方-简 极细体
#define XChineseFont_PingFangSC_Light           @"PingFangSC-Light"         //苹方-简 细体
#define XChineseFont_PingFangSC_Thin            @"PingFangSC-Thin"          //苹方-简 纤细体
#define XChineseFont_PingFangSC_Medium          @"PingFangSC-Medium"        //苹方-简 中黑体
#define XChineseFont_PingFangSC_Semibold        @"PingFangSC-Semibold"      //苹方-简 中粗体
#define XChineseFont_HannotateSC_W5             @"HannotateSC-W5"           //手札体-简 常规体
#define XChineseFont_HannotateSC_W7             @"HannotateSC-W7"           //手札体-简 粗体
#define XChineseFont_STSongti_SC_Regular        @"STSongti-SC-Regular"      //宋体-简 常规体
#define XChineseFont_STSongti_SC_Light          @"STSongti-SC-Light"        //宋体-简 细体
#define XChineseFont_STSongti_SC_Bold           @"STSongti-SC-Bold"         //宋体-简 粗体
#define XChineseFont_STSongti_SC_Black          @"STSongti-SC-Black"        //宋体-简 黑体
#define XChineseFont_DFWaWaSC_W5                @"DFWaWaSC-W5"              //娃娃体-简 常规体
#define XChineseFont_Weibei_SC_Bold             @"Weibei-SC-Bold"           //魏碑-简 粗体
#define XChineseFont_STXingkai_SC_Light         @"STXingkai-SC-Light"       //行楷-简 细体
#define XChineseFont_STXingkai_SC_Bold          @"STXingkai-SC-Bold"        //行楷-简 粗体
#define XChineseFont_YuppySC_Regular            @"YuppySC-Regular"          //雅痞-简 常规体
#define XChineseFont_STYuanti_SC_Regular        @"STYuanti-SC-Regular"      //圆体-简 常规体
#define XChineseFont_STYuanti_SC_Light          @"STYuanti-SC-Light"        //圆体-简 细体
#define XChineseFont_STYuanti_SC_Bold           @"STYuanti-SC-Bold"         //圆体-简 粗体
#define XChineseFont_AdobeFangsongStd_Regular   @"AdobeFangsongStd-Regular" //Adobe 仿宋 Std R
#define XChineseFont_AdobeHeitiStd_Regular      @"AdobeHeitiStd-Regular"    //Adobe 黑体 Std R
#define XChineseFont_AdobeKaitiStd_Regular      @"AdobeKaitiStd-Regular"    //Adobe 楷体 Std R
#define XChineseFont_AdobeSongStd_Light         @"AdobeSongStd-Light"       //Adobe 宋体 Std L




@interface XFontTool : NSObject

+(BOOL)isDownloadFont:(NSString *)fontName;


+(void)downLoadFontWithFontName:(NSString *)fontName progress:(void(^)(CGFloat pro))progress complete:(void(^)(void))complete errorMsg:(void(^)(NSString *message))errorMsg;
@end
