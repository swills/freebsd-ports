# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/www/you-get/Makefile 457142 2017-12-24 11:14:51Z sunpoet $

PORTNAME=	you-get
PORTVERSION=	0.4.1011
CATEGORIES=	www
MASTER_SITES=	CHEESESHOP

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Dumb downloader that scrapes the web

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	ffmpeg:multimedia/ffmpeg

OPTIONS_DEFINE=	RTMPDUMP

NO_ARCH=	yes
USE_PYTHON=	autoplist distutils noflavors
USES=		python:3.4+

RTMPDUMP_RUN_DEPENDS=	rtmpdump:multimedia/rtmpdump

.include <bsd.port.mk>
