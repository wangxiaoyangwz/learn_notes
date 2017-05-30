#! /usr/bin/env python
# -*- coding:utf-8 -*-
 
import requests
import time
from datetime import datetime
 
headers = {'User-Agent':'Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:51.0) Gecko/20100101 Firefox/51.0'}
ISOTIMEFORMAT='%Y-%m-%d %X'
def query_100():
    starttime = datetime.now()
    print('开始时间：{}'.format(starttime.strftime(ISOTIMEFORMAT)))#将指定的starttime(默认为当前时间)，根据指定的格式化字符串输出
    for i in range(100):
        start = time.time()#从0开始到99
        print('第{}次爬取：'.format(i+1),end='')
        url = 'https://www.baidu.com/s'
        keyword = {'wd':'{}'.format(i)}#{}.format -->%s
        try:
            r = requests.get(url,params=keyword,headers=headers,timeout=30)
            r.raise_for_status()
        except:
            print('Error!')
        end = time.time()
        print('用时：{}'.format(end-start))
    endtime = datetime.now()
    print('结束时间：{}'.format(endtime.strftime(ISOTIMEFORMAT)))
    print('累计用时：{}'.format((endtime-starttime).seconds))#单位s
 
if __name__ == "__main__":
    query_100()
