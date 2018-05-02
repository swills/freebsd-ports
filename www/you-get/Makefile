# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/www/you-get/Makefile 468844 2018-05-02 15:07:27Z jbeich $

PORTNAME=	you-get
PORTVERSION=	0.4.1060
PORTREVISION=	1
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
